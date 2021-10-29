//
// Created by Mateusz on 19.10.2021.
//

#ifndef JIPP2_LIB_H
#define JIPP2_LIB_H

/**
 * addMatrix adds two matrices
 * @param A first matrix
 * @param B second matrix
 * @param rows number of rows in matrices
 * @param columns number of columns in matrices
 * @return matrix that is sum of the two given matrices
 */
int** addMatrix(int** A,int** B,int rows,int columns);
double** addMatrix(double** A,double** B,int rows,int columns);

/**
 * subtractMatrix subtracts two matrices
 * @param A first matrix
 * @param B second matrix
 * @param rows number of rows in matrices
 * @param columns number of columns in matrices
 * @return matrix that is subtraction of the two given matrices
 */
int** subtractMatrix(int** A,int** B,int rows,int columns);
double** subtractMatrix(double** A,double** B,int rows,int columns);

/**
 * multiplyMatrix multiplies two matrices
 * @param A first matrix
 * @param B second matrix
 * @param rows number of rows in first matrix
 * @param columnsA number of columns in first matrix
 * @param columnsB number of columns in second matrix
 * @return matrix that is multiplication of the two given matrices
 */
int** multiplyMatrix(int** A,int**B,int rows,int columnsA,int columnsB);
double** multiplyMatrix(double** A,double**B,int rows,int columnsA,int columnsB);

/**
 * multiplyByScalar multiplies matrix by scalar
 * @param A matrix
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 * @param scalar a given scalar that the matrix is multiplied by
 * @return multiplied matrix by given scalar
 */
int** multiplyByScalar(int** A,int rows,int columns,int scalar);
double** multiplyByScalar(double** A,int rows,int columns,double scalar);

/**
 * transpozeMatrix transposes a matrix
 * @param A matrix
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 * @return transposed matrix
 */
int** transpozeMatrix(int** A,int rows,int columns);
double** transpozeMatrix(double** A,int rows,int columns);

/**
 * powerMatrix raise a matrix to given power
 * @param A matrix
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 * @param power
 * @return matrix raised to the given power
 */
int** powerMatrix(int**A,int rows,int columns,unsigned power);
double** powerMatrix(double** A,int rows,int columns,unsigned power);

/**
 * determinantMatrix gives determinant of matrix
 * @param A matrix
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 * @return determinant of given matrix
 */
int determinantMatrix(int** A,int rows,int columns);
double determinantMatrix(double** A,int rows,int columns);

/**
 * matrixIsDiagonal checks if matrix is diagonal
 * @param A matrix
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 * @return true if given matirx is diagonal or false if not
 */
bool matrixIsDiagonal(int** A,int rows,int columns);
bool matrixIsDiagonal(double** A,int rows,int columns);

/**
 * swap swaps two given numbers
 * @param a the first number
 * @param b the second number
 */
void swap(int& a,int& b);
void swap(double& a,double& b);

/**
 * sortRow sorts an array
 * @param A an array
 * @param columns number of numbers in the array
 * @return sorted array
 */
int*sortRow(int*A,int columns);
double* sortRow(double*A,int columns);

/**
 * sortRowInMatrix sorts rows in matrix ascendly
 * @param A matrix
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 * @return matrix with sorted rows
 */
int**sortRowsInMatrix(int** A,int rows,int columns);
double** sortRowsInMatrix(double** A,int rows,int columns);

/**
 * help gives information about program and its funcionalities
 */
void help();

#endif //JIPP2_LIB_H
