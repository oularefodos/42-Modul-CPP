#include <iostream>
#include <string>

int isPseudo(char *str)
{
    std::string value(str);
    return (value == "nanf" || value == "nan" || value == "+inf" || value == "-inf" || value == "+inff" || value == "-inff");
}

int getType(char * value)
{
    int n;

    n = 0;
    if (strlen(value) == 1 && !isdigit(value[0]))
        return (0);
    if (isPseudo(value))
        return (3);
    for (int i = 0; value[i]; i++)
    {
        if (!isdigit(value[i]) && value[i] != 'f' && value[i] != '.')
        {   
            if (i == 0 && value[i] == '-')
            {}
            else
                return (-1);
        }
        if (value[i] == 'f' && value[i + 1] == '\0')
            return (2);
        if (value[i] == 'f' && value[i + 1] != '\0')
            return (-1);
        if (value[i] == '.' && !n)
            n = 4;
        else if (value[i] == '.' && n)
            return (-1);
    }
    return (n ? (n) : 1);
}

void intCast(char * value)
{
    int i;

    i = atoi(value);
    if (i < 32 || i > '~')
        std::cout << "char: " << "Non displayeble" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(i) << std::endl;
    std::cout << "int: " << static_cast<int>(i) << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void CharCast(char * value)
{
    char i;

    i = value[0];
    if (i < 32 || i > '~')
        std::cout << "char: " << "Non displayeble" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(i) << std::endl;
    std::cout << "int: " << static_cast<int>(i) << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void pseudoCast (char *str)
{
    double i;

    i = std::strtod(str, nullptr);
    std::string value(str);
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (str[0] == '+')
    {
        std::cout << "float: +" << static_cast<float>(i) << "f" << std::endl;
        std::cout << "double: +" << static_cast<double>(i) << std::endl;
    }
    else
    {
        std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << std::endl;
    }
}

void floatCast(char * value)
{
    float i;

    i = std::strtof(value, nullptr);
    if (i < 32 || i > '~')
        std::cout << "char: " << "Non displayeble" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(i) << std::endl;
    std::cout << "int: " << static_cast<int>(i)<< std::endl;
    std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void doubleCast(char * value)
{
    double i;

    i = std::strtod(value, nullptr);
    if (i < 32 || i > '~')
        std::cout << "char: " << "Non displayeble" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(i) << std::endl;
    std::cout << "int: " << static_cast<int>(i)<< std::endl;
    std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << std::endl;
}

int main(int ac, char **args)
{
    int type;
    float f;
    int i;
    double d;

    if (ac != 2)
    {
        std::cout << "Error : Argument number invalid" << std::endl;
        return (0);
    }
    if ((type = getType(args[1])) == -1)
    {
        std::cout << "Error : Params" << std::endl;
        return (0);
    }
    switch (type)
    {
        case 0:
            CharCast(args[1]);
            break;
        case 1:
            intCast(args[1]);
            break;
        case 2:
            floatCast(args[1]);
            break;
        case 3:
            pseudoCast(args[1]);
        case 4:
            doubleCast(args[1]);
            break;
    }
    return (0);
}