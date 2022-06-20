#include <iostream>
#include <fstream>
#include <string>



void writeOutfile(std::string line, char s, char r, char *name)
{
    std::string namefile(name);
    namefile += ".replace";
    std::ofstream myfile(namefile, std::ios::app);
    for (int i(0); line[i]; i++)
    {
        if (line[i] == s)
            line[i] = r;
    }
    myfile << line << std::endl;
}

int main(int ac, char **arg) 
{
    if (ac != 4)
        return (1);
    std::ifstream monFile(arg[1]);
    std::string line;

    if (!monFile)
    {
        std::cout << "Error: bad file" << std::endl;
        return (1);
    }

    std::getline(monFile, line);
    while (line[0] != '\0')
    {
        // std::cout << line << std::endl;
        writeOutfile(line, arg[2][0], arg[3][0], arg[1]);
        std::getline(monFile, line);
    }
    return (0);
}