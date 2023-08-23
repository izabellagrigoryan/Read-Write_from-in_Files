// Write_in_File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Matrix.h"
#include <fstream>

int main()
{
    Matrix<int> m_matrix(4, 5);

    m_matrix.print();

    std::ofstream OutputFile("Output.txt");

    if (OutputFile.is_open())
    {
        for (int i = 0; i < m_matrix.size1; i++)
        {
            for (int j = 0; j < m_matrix.size2; j++)
                OutputFile << m_matrix.arr[i][j] << "  ";
            OutputFile << "\n";
        }
    }
    OutputFile.close();

    return 0;
}
