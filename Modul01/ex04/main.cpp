#include <iostream>
#include <fstream>
#include <string>



void writeOutfile(std::string line, char *s, char *r, std::ofstream& outfile)
{
    std::string temp;
    int n;
    while ((n = line.find(s)) != -1 && strcmp(s, r))
    {
        temp = "";
        if (n > 0)
            temp += line.substr(0, n);
        temp += r;
        temp += line.substr(strlen(s) + n, line.size() - (strlen(s) + n));
        line = temp;
    }
    outfile << line;
}

int main(int ac, char **arg) 
{
    int x;

    x = 0;
    if (ac != 4 || arg[2][0] == '\0')
    { 
        std::cout << "bad params" << std::endl;
        return (1);
    }
    
    std::ifstream infile(arg[1]);
    std::string line;

    std::string namefile(arg[1]);
    namefile += ".replace";
    remove (namefile.c_str());
    std::ofstream outfile(namefile, std::ios::app);

    
    if (!infile || !outfile)
    {
        std::cout << "Error: bad file" << std::endl;
        return (1);
    }

    while (std::getline(infile, line))
    {
        if (x)
            outfile << std::endl;
        writeOutfile(line, arg[2], arg[3], outfile);
        x = 1;
    }
    if (line[0] == '\0')
        outfile << std::endl;
    return (0);
}