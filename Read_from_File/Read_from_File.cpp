// Read_from_File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <map>

int main()
{
    std::ifstream InputFile("Input.txt");

    std::map<int, std::string> map_lines;

    if (InputFile.is_open())
    {
        std::string line = "";
        int i = 0;
        
        while (std::getline(InputFile, line))
        {
            i++;
            if (line.find("Armenia") != std::string::npos)
            {
                map_lines.insert(std::pair<int, std::string> (i, line));               
            }
        }
    }

    InputFile.close();

    std::ofstream OutputFile("Output.txt");

    if (OutputFile.is_open())
    {
        for (auto it : map_lines)
        {
            std::string str = it.second.c_str();
            OutputFile << str << '\n';
        }
    }

    OutputFile.close();

    return 0;
}