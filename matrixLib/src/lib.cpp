//
// Created by Mateusz on 19.10.2021.


#include "../include/lib.h"
#include <iostream>
using namespace std;

/**
 * addMatrix adds two matrices
 * @param A first matrix
 * @param B second matrix
 * @param rows number of rows in matrices
 * @param columns number of columns in matrices
 * @return matrix that is sum of the two given matrices
 */
int** addMatrix(int** A,int** B,int rows,int columns)
{
    int**C = new int* [rows];
    for(int i=0; i<rows; i++)
        C[i] = new int [columns];
    for(int i = 0; i<rows; i++)
    {
        for(int j=0; j<columns; j++) {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    return C;
}
double** addMatrix(double**A,double **B,int rows,int columns)
{
    double**C = new double* [rows];
    for(int i=0; i<rows; i++)
        C[i] = new double [columns];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
            C[i][j]=A[i][j]+B[i][j];
    }
    return C;
}

/**
 * subtractMatrix subtracts two matrices
 * @param A first matrix
 * @param B second matrix
 * @param rows number of rows in matrices
 * @param columns number of columns in matrices
 * @return matrix that is subtraction of the two given matrices
 */
int** subtractMatrix(int** A,int** B,int rows,int columns)
{
    int**C = new int* [rows];
    for(int i=0; i<rows; i++)
        C[i] = new int [columns];
    for(int i = 0; i<rows; i++)
    {
        for(int j=0; j<columns; j++) {
            C[i][j]=A[i][j]-B[i][j];
        }
    }
    return C;
}
double** subtractMatrix(double** A,double** B,int rows,int columns)
{
    double**C = new double* [rows];
    for(int i=0; i<rows; i++)
        C[i] = new double [columns];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
            C[i][j]=A[i][j]-B[i][j];
    }
    return C;
}

/**
 * multiplyMatrix multiplies two matrices
 * @param A first matrix
 * @param B second matrix
 * @param rows number of rows in first matrix
 * @param columnsA number of columns in first matrix
 * @param columnsB number of columns in second matrix
 * @return matrix that is multiplication of the two given matrices
 */
int** multiplyMatrix(int** A,int** B,int rows,int columnsA,int columnsB)
{
    int** C = new int* [rows];
    for(int i=0; i<rows; i++)
    {
        C[i] = new int [columnsB];
    }
    int p;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columnsB; j++)
        {
            p = 0;
            for(int k=0; k<columnsA; k++)
                p+= A[i][k]*B[k][j];
            C[i][j] = p;
        }
    }
    return C;
}
double** multiplyMatrix(double** A,double** B,int rows,int columnsA,int columnsB)
{
    double** C = new double* [rows];
    for(int i=0; i<rows; i++)
    {
        C[i] = new double [columnsB];
    }
    double p;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columnsB; j++)
        {
            p = 0;
            for(int k=0; k<columnsA; k++)
                p+= A[i][k]*B[k][j];
            C[i][j] = p;
        }
    }
    return C;
}

/**
 * multiplyByScalar multiplies matrix by scalar
 * @param A matrix
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 * @param scalar a given scalar that the matrix is multiplied by
 * @return multiplied matrix by given scalar
 */
int** multiplyByScalar(int** A,int rows,int columns,int scalar)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            A[i][j]*=scalar;
        }
    }
    return A;
}
double** multiplyByScalar(double** A,int rows,int columns,double scalar)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++) {
            A[i][j] *= scalar;
        }
    }
    return A;
}

/**
 * transpozeMatrix transposes a matrix
 * @param A matrix
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 * @return transposed matrix
 */
int** transpozeMatrix(int** A,int rows,int columns)
{
    int** C = new int*[rows];
    for(int i=0; i<rows; i++)
        C[i] = new int[columns];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            C[j][i] = A[i][j];
        }
    }
    return C;
}
double** transpozeMatrix(double** A,int rows,int columns)
{
    double** C = new double *[rows];
    for(int i=0; i<rows; i++)
        C[i] = new double[columns];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            C[j][i] = A[i][j];
        }
    }
    return C;
}

/**
 * powerMatrix raise a matrix to given power
 * @param A matrix
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 * @param power
 * @return matrix raised to the given power
 */
int** powerMatrix(int**A,int rows,int columns,unsigned power)
{
    if(power == 0)
    {
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<columns; j++)
            {
                if(i==j)
                    A[i][j] = 1;
                else
                    A[i][j] = 0;
            }
        }
        return A;
    }
    else if(power == 1)
        return A;

    int**W,**P;

    W = new int* [rows];
    P = new int* [rows];
    for(int i=0; i<rows; i++)
    {
        W[i] = new int [columns];
        P[i] = new int [columns];
    }
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++) {
            P[i][j] = A[i][j];
        }
    }
    for(int i=2; i<=power; i++)
    {
        int s;
        for(int j=0; j<rows; j++)
        {
            for(int k=0; k<columns; k++)
            {
              s = 0;
              for(int l = 0; l<rows; l++) s+=P[j][l]*A[l][k];
              W[j][k] = s;
            }
        }
        for(int j=0; j<rows; j++)
        {
            for(int k=0; k<columns; k++)
            {
                A[j][k] = W[j][k];
            }
        }
    }
    for(int i=0; i<rows; i++)
    {
        delete [] P[i];
        delete [] W[i];
    }
    return A;
}
double** powerMatrix(double** A,int rows,int columns,unsigned power)
{
    if(power == 0)
    {
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<columns; j++)
            {
                if(i==j)
                    A[i][j] = 1;
                else
                    A[i][j] = 0;
            }
        }
        return A;
    }
    else if(power == 1)
        return A;

    double**W,**P;

    W = new double * [rows];
    P = new double * [rows];
    for(int i=0; i<rows; i++)
    {
        W[i] = new double [columns];
        P[i] = new double [columns];
    }
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++) {
            P[i][j] = A[i][j];
        }
    }
    for(int i=2;i<=power; i++)
    {
        double s;
        for(int j=0; j<rows; j++)
        {
            for(int k=0; k<columns; k++)
            {
                s = 0;
                for(int l = 0; l<rows; l++)
                    s+=P[j][l]*A[l][k];
                W[j][k] = s;
            }
        }
        for(int j=0; j<rows; j++)
        {
            for(int k=0; k<columns; k++)
            {
                A[j][k] = W[j][k];
            }
        }
    }
    for(int i=0; i<rows; i++)
    {
        delete [] P[i];
        delete [] W[i];
    }
    delete [] P;
    delete [] W;
    return A;
}

/**
 * determinantMatrix gives determinant of matrix
 * @param A matrix
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 * @return determinant of given matrix
 */
int determinantMatrix(int** A,int rows,int columns)
{
    double sgn = 1;
    for(int i=0; i<rows-1; i++)
    {
        if(A[0][0]==0)
        {
            int m = 0;
            for(m=i+1;m<rows; m++)
            {
                if(A[m][i]!=0)
                {
                    for(int l = 0; l<columns; l++)
                    {
                        swap(A[m][l],A[i][l]);
                    }
                    sgn=-sgn;
                    break;
                }
            }
            if(m==rows)
                return 0;
        }
        for(int j=i+1; j<rows; j++)
        {
            for(int k=i+1; k<columns; k++)
            {
                A[j][k] = A[i][i]*A[j][k] - A[j][i]*A[i][k];
                if(i!=0)
                {
                    A[j][k]/=A[i-1][i-1];
                }
            }
        }
    }
    return sgn*A[rows-1][columns-1];
}
double determinantMatrix(double**A,int rows,int columns)
{
    double sgn = 1;
    for(int i=0; i<rows-1; i++)
    {
        if(A[0][0]==0)
        {
            int m = 0;
            for(m=i+1;m<rows; m++)
            {
                if(A[m][i]!=0)
                {
                    for(int l = 0; l<columns; l++)
                    {
                        swap(A[m][l],A[i][l]);
                    }
                    sgn=-sgn;
                    break;
                }
            }
            if(m==rows)
                return 0;
        }
        for(int j=i+1; j<rows; j++)
        {
            for(int k=i+1; k<columns; k++)
            {
                A[j][k] = A[i][i]*A[j][k] - A[j][i]*A[i][k];
                if(i!=0)
                {
                    A[j][k]/=A[i-1][i-1];
                }
            }
        }
    }
    return sgn*A[rows-1][columns-1];
}

/**
 * matrixIsDiagonal checks if matrix is diagonal
 * @param A matrix
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 * @return true if given matirx is diagonal or false if not
 */
bool matrixIsDiagonal(int** A,int rows,int columns)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++) {
            if(A[i][j] != 0 && i!=j)
                return false;
        }
    }
    return true;
}
bool matrixIsDiagonal(double** A,int rows,int columns)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++) {
            if(A[i][j] != 0 && i!=j)
                return false;
        }
    }
    return true;
}

/**
 * swap swaps two given numbers
 * @param a the first number
 * @param b the second number
 */
void swap(int& a,int& b)
{
    int c = a;
    a = b;
    b = c;
}
void swap(double& a,double& b)
{
    double c = a;
    a = b;
    b = c;
}

/**
 * sortRow sorts an array
 * @param A an array
 * @param columns number of numbers in the array
 * @return sorted array
 */
int *sortRow(int* A,int columns)
{
    for(int i=0; i<columns; i++)
    {
        for(int j=1; j<columns-i; j++)
        {
            if(A[j-1]>A[j])
            {
                swap(A[j-1],A[j]);
            }
        }
    }
    return A;
}
double* sortRow(double* A,int columns)
{
    for(int i=0; i<columns; i++)
    {
        for(int j=1; j<columns-i; j++)
        {
            if(A[j-1]>A[j])
            {
                swap(A[j-1],A[j]);
            }
        }
    }
    return A;
}

/**
 * sortRowInMatrix sorts rows in matrix ascendly
 * @param A matrix
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 * @return matrix with sorted rows
 */
int** sortRowsInMatrix(int** A,int rows,int columns)
{
    for(int i = 0; i<rows; i++)
    {
       A[i] = sortRow(A[i],columns);
    }

    return A;
}
double** sortRowsInMatrix(double** A,int rows,int columns)
{
    for(int i = 0; i<rows; i++)
    {
        A[i] = sortRow(A[i],columns);
    }
    return A;
}

/**
 * help gives information about program and its funcionalities
 */
void help()
{
    cout<<"Application that performs simple operations on matrices"<<endl;
    cout<<"How to use: "<<endl;
    cout<<"Run application with one argument, which operation you want to use"<<endl;
    cout<<"Input the number of rows and columns of the matrix and the type of the matrix (int or double)"<<endl;
    cout<<"Input numbers that you want to put in the matrix using console"<<endl;
    cout<<endl;
    cout<<"Available operations: "<<endl;
    cout<<"addMatrix"<<endl;
    cout<<"  Adds two matrices"<<endl;
    cout<<"subtractMatrix"<<endl;
    cout<<"  Subtracts two matrices"<<endl;
    cout<<"multiplyMatrix"<<endl;
    cout<<"  Multiplies two matrices"<<endl;
    cout<<"multiplyByScalar"<<endl;
    cout<<"   Multiplies matrix by scalar"<<endl;
    cout<<"transpozeMatrix"<<endl;
    cout<<"  Transposes matrix"<<endl;
    cout<<"powerMatrix"<<endl;
    cout<<"  Produces matrix raised to the given power"<<endl;
    cout<<"determinantMatrix"<<endl;
    cout<<"  Gives back the determinant of the matrix"<<endl;
    cout<<"matrixIsDiagonal"<<endl;
    cout<<"  Checks if given matrix is diagonal or not"<<endl;
    cout<<"swap"<<endl;
    cout<<"   Swaps two numbers"<<endl;
    cout<<"sortRow"<<endl;
    cout<<"   Sorts a given row (array)"<<endl;
    cout<<"sortRowsInMatrix"<<endl;
    cout<<"  Sorts matrix by rows"<<endl;
    cout<<"help"<<endl;
    cout<<"  Gives information about the program"<<endl;
}
