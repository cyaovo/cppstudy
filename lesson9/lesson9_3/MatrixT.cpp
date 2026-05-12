#include <iostream>
#include "MatrixT.h"
void MatrixT(int a[][4], int rows)
{
    int b[4][rows];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < 4; j++)
            b[j][i] = a[i][j];
    std::cout << "转置后的矩阵为：" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < rows; j++)
            std::cout << b[i][j] << " ";
        std::cout << std::endl;
    }
}