#include "Replace.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "argument is not valid" << std::endl;
        return 0;
    }
    // if (!av[1])
    // {
    //     std::cout << "argument is empty" << std::endl;
    //     return 0;
    // }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (s1.empty())
    {
        std::cerr << "Error: s1 must not be empty\n";
        return 1;
    }
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cout << "failed to open the file." << std::endl;
        return 0; 
    }
    std::string content;
    std::ostringstream ss;
    ss << file.rdbuf();
    content = ss.str();
    file.close();
    std::string replaced = replace_all(content, s1, s2);
    std::string outname = filename + ".replace";
    std::ofstream ofs(outname.c_str());
    if (!ofs) {
        std::cerr << "Error: cannot create file " << outname << "\n";
        return 1;
    }
    ofs << replaced;
    ofs.close();
    return 1;
}