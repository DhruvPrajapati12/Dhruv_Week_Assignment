// Problem Statement:

// Create a class called 'Matrix' containing a constructor that initialises the number of rows and the
// number of columns of a new Matrix object. The Matrix class has the following information:
// 1 - number of rows of matrix
// 2 - number of columns of matrix
// 3 - elements of matrix (You can use 2D vector)
// The Matrix class has functions for each of the following:
// 1 - get the number of rows
// 2 - get the number of columns
// 3 - set the elements of the matrix at a given position (i,j)
// 4 - adding two matrices.
// 5 - multiplying the two matrices
// You can assume that the dimensions are correct for the multiplication and addition.

#include <iostream>
using namespace std;

//define Matrix class

class Matrix
{
    int row, column, *arr;      //declaration of data members of Matrix class

public:

    Matrix()    //default constructor
    {
        //do nothing
    }

    Matrix(int r, int c)    //parameterized constructor
    {
        row = r;
        column = c;
        arr = new int[row * column];
    }

    int getRows()   //getRows() returns row of matrix
    {
        return row;
    }

    int getColumns()    //getColumns() returns column of matrix
    {
        return column;
    }

    void setMatrix()    //setMatrix() sets the values of matrix
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << "Enter the [" << i << "][" << j << "]th element: ";
                cin >> *(arr + i * column + j);
            }   //end of for(j) loop
        }   // end of for(i) loop
    }   // end of setMatrix function

    void printMatrix()  //printMatrix() prints the matrix
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << *(arr + i * column + j) << " ";
            }   //end of for(j) loop
            cout << endl;
        }   //end of for(i) loop
    }   //end of printMatrix function

    Matrix operator+(Matrix m1)     //'+' operator overloading function
    {
        Matrix m(m1.getRows(), m1.getColumns());

        if (row == m1.row && column == m1.column)
        {
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    *(m.arr + i * column + j) = *(arr + i * column + j) + *(m1.arr + i * column + j);
                }   //end of for(j) loop
            }   //end of for(i) loop
            return m;
        }
        else 
        {
            cout << "Cant perform addition" << endl;
            exit(EXIT_SUCCESS);
        }
    }   //end of '+' operator overloading function

    Matrix operator*(Matrix m1)     //'*' operator overloading function
    {
        Matrix m(row, m1.getColumns());

        if (column == m1.getRows())
        {
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < m1.getColumns(); j++)
                {
                    *(m.arr + i * column + j) = 0;
                    for (int k = 0; k < column; k++)
                    {
                        *(m.arr + i * column + j) += (*(arr + i * column + k)) * (*(m1.arr + k * column + j));
                    }//end of for(k) loop
                }//end of for(j) loop
            }//end of for(i) loop
            return m;
        }
        else
        {
            cout << "Multiplication can not be performed" << endl;
            exit(EXIT_SUCCESS);
        }
    }
};  // end of Matrix class

int main()
{
    Matrix a(3, 3);     //creating a matrix object using Matrix class
    cout << "Enter elements of matrix a: " << endl;
    a.setMatrix();  //setvalues of matrix a
    cout << "Matrix a: " << endl;
    a.printMatrix();    //print matrix a

    Matrix b(3, 3);     //creating b matrix object using Matrix class
    cout << "Enter elements of matrix b: " << endl;
    b.setMatrix();  //setvalues of matrix b
    cout << "Matrix b: " << endl;
    b.printMatrix();    //print matrix b

    Matrix c;
    c = a + b;
    // c = a.operator+(b);     // matrix c = matrix a + matrix b

    cout << "Addition of a and b is: " << endl;
    c.printMatrix();

    Matrix d;
    d = a * b;
    // d = a.operator*(b);         //matrix d = matrix a * matrix b

    cout << "Multiplication of a and b is: " << endl;
    d.printMatrix();
}   //end of main function