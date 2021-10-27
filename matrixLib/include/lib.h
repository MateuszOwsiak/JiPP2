//
// Created by Mateusz on 19.10.2021.
//

#ifndef JIPP2_LIB_H
#define JIPP2_LIB_H

int** addMatrix(int** A,int** B,int rows,int columns);
double** addMatrix(double** A,double** B,int rows,int columns);

int** subtractMatrix(int** A,int** B,int rows,int columns);
double** subtractMatrix(double** A,double** B,int rows,int columns);

int** multiplyMatrix(int** A,int**B,int rows,int columnsA,int columnsB);
double** multiplyMatrix(double** A,double**B,int rows,int columnsA,int columnsB);

int** multiplyByScalar(int** A,int rows,int columns,int scalar);
double** multiplyByScalar(double** A,int rows,int columns,double scalar);

int** transpozeMatrix(int** A,int rows,int columns);
double** transpozeMatrix(double** A,int rows,int columns);

int** powerMatrix(int**A,int rows,int columns,unsigned power);
double** powerMatrix(double** A,int rows,int columns,unsigned power);

int determinantMatrix(int** A,int rows,int columns);
double determinantMatrix(double** A,int rows,int columns);

bool matrixIsDiagonal(int** A,int rows,int columns);
bool matrixIsDiagonal(double** A,int rows,int columns);

void swap(int& a,int& b);
void swap(double& a,double& b);

int*sortRow(int*A,int columns);
double* sortRow(double*A,int columns);

int**sortRowsInMatrix(int** A,int rows,int columns);
double** sortRowsInMatrix(double** A,int rows,int columns);

void help();

#endif //JIPP2_LIB_H
