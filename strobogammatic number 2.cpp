
#include <iostream>

#define ROWS 4
#define COLS 4
using namespace std;
/* Function declaration to input and print two dimensional array */
void inputMatrix(int matrix[][COLS], int rows, int cols);
void printMatrix(int matrix[][COLS], int rows, int cols);
void printMatrixWithoutPointer(int matrix[][COLS], int rows, int cols);
int main()
{
    int matrix[ROWS][COLS];
    int i, j;

    /* Input elements in matrix */
    printf("Enter elements in %dx%d matrix.\n", ROWS, COLS);
    inputMatrix(matrix, ROWS, COLS);


    /* Print elements in matrix */
    printf("Elements of %dx%d matrix.\n", ROWS, COLS);
    printMatrix(matrix, ROWS, COLS);
     printMatrixWithoutPointer(matrix, ROWS, COLS);

    return 0;
}


void inputMatrix(int matrix[][COLS], int rows, int cols)
{
    int i, j;


    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            // (*(matrix + i) + j is equivalent to &matrix[i][j]
            scanf("%d", (*(matrix + i) + j));
        }
    }
}

void printMatrix(int (*matrix)[COLS], int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            
            cout<<(*(*(matrix + i) + j))<<" ";
            // here we are accessing the values using pointers if we modify the value 
            // the address value will be changed
        }

        cout<<endl;
    }
}

void printMatrixWithoutPointer(int (*matrix)[COLS], int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            
            cout<<matrix[i][j]<<" ";
            // here we are accessing the values using indexes 
        
        }

        cout<<endl;
    }
}
