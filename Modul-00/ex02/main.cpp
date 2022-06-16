#include <iostream>
#include <ctime>
#include <iomanip>

int main(void)
{
    time_t timestamp = time(NULL);
    struct tm * timeInfos = localtime(&timestamp);
    std::cout  << std::put_time(timeInfos, "[%Y%m%d_%H%M%S]");
}