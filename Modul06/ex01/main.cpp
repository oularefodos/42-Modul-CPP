#include <iostream>

typedef struct data
{
    int years;
    int days;
} Data;

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main(void)
{
    Data data;
    data.days = 10;
    uintptr_t rep;
    data.years = 25;

    rep = serialize(&data);
    std::cout << rep << std::endl;

    Data *ret = deserialize(rep);

    std::cout << ret->days << " ------ " << ret->years << std::endl;

    return (0);
}