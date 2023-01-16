#include <iostream>
using namespace std;

int main()
{
    // Store sparse matrix given into 2D array for testing
    int sparseMatrix[4][5] =
        {{0, 0, 3, 0, 4},
         {0, 0, 5, 7, 0},
         {0, 0, 0, 0, 0},
         {0, 2, 6, 0, 0}};

    // Find how many columns (the size) sparse matrix representation array
    // needs to be. The number of non zero elements
    int col = 0;
    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            if (sparseMatrix[x][y] != 0)
            {
                col++;
            }
        }
    }
    // Create Array for Implementation of Sparse Matrix
    int sparseMatrixRepresentation[3][col];

    // Keep track of the current column for the new array
    int sparseMatrixColumn = 0;

    // Create Array Implementation for Sparse Matrix
    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            if (sparseMatrix[x][y] != 0)
            {
                sparseMatrixRepresentation[0][sparseMatrixColumn] = x;
                sparseMatrixRepresentation[1][sparseMatrixColumn] = y;
                sparseMatrixRepresentation[2][sparseMatrixColumn] = sparseMatrix[x][y];
                sparseMatrixColumn++;
            }
        }
    }

    // Testing the Array Implementation for Sparse Matrix
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < sparseMatrixColumn; y++)
        {
            cout << sparseMatrixRepresentation[x][y] << " ";
        }
        cout << endl;
    }
}