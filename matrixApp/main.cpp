//
// Created by Mateusz on 19.10.2021.
//

#include <iostream>
#include "../include/lib.h"

using namespace std;
/**
 * input  asks user to type in the number of rows and columns and type of the matrix
 * @param rows number of rows of matrix
 * @param columns number of columns of matrix
 * @param type type of the matrix: int or double
 */
void input(int& rows,int& columns,string& type)
{
    cout<<"Enter the number of rows: "<<endl;
    cin>>rows;
    while(cin.fail()) {
        cout << "That's not a number!" << endl;
        // cin.clear(cin.rdstate() & ~ios::failbit);
        cin.clear();
        cin.ignore();
        cout << "Enter the number of rows: " << endl;
        cin >> rows;
    }

    cout<<"Enter the numer of columns: "<<endl;
    cin>>columns;
    while(cin.fail())
    {
        cout<<"That's not a number!"<<endl;
        cin.clear();
        cin.ignore();
        cout<<"Enter the numer of columns: "<<endl;
        cin>>columns;
    }
    cout<<"Enter the type of the matrix, int or double: "<<endl;
    cin>>type;
    while(type!="int" && type!="double")
    {
        cout<<"That's wrong type!"<<endl;
        cout<<"Enter the type of the matrix, int or double: "<<endl;
        cin>>type;
    }

}
/**
 * getMatrix gets a matrix from user from the console
 * @param A matrix
 * @param rows number of rows of matrix
 * @param columns number of columns of matrix
 */
void getMatrix(double**A,int rows,int columns)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++) {
            cin>>A[i][j];
            while(cin.fail())
            {
                cout<<"It seems like you didn't type a number typing matrix["<<i+1<<"]["<<j+1<<"]"<<endl;
                cout<<"Type again that element: ";
                cin.clear();
                cin.ignore();
                cin>>A[i][j];
            }
        }
    }
    //If user enters more numbers to matrix than it's expected
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}
void getMatrix(int**A,int rows,int columns)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cin >> A[i][j];
            while(cin.fail())
            {
                cout<<"It seems like you didn't type a number typing matrix["<<i+1<<"]["<<j+1<<"] or that's not an integer"<<endl;
                cout<<"Type again that element: ";
                cin.clear();
                cin.ignore();
                cin>>A[i][j];
            }
        }
    }
    //If user enters more numbers to matrix than it's expected
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}
/**
 * print prints matrix on the console
 * @param A matrix
 * @param rows number of rows of matrix
 * @param columns number of columns of matrix
 */
void print(double**A,int rows,int columns)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
void print(int**A,int rows,int columns)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(int argc, char* argv[])
{
    int rows,columns;
    string type;
    if(string(argv[1]) == "addMatrix")
    {
        input(rows,columns,type);
        if(type=="double"){
            double** A = new double*[rows];
            double** B = new double*[rows];
                for(int i=0; i<rows; i++) {
                    A[i] = new double[columns];
                    B[i] = new double[columns];
                }
            cout<<"Enter the first matrix: "<<endl;
            getMatrix(A,rows,columns);
            cout<<"Enter the second matrix that you want to add: "<<endl;
            getMatrix(B,rows,columns);
            A = addMatrix(A,B,rows,columns);
            cout<<"Matrix after operation of addition: "<<endl;
            print(A,rows,columns);
        }
        else if(type=="int") {
            int ** A = new int *[rows];
            int ** B = new int *[rows];
            for(int i=0; i<rows; i++) {
                A[i] = new int [columns];
                B[i] = new int[columns];
            }
            cout << "Enter the first matrix: " << endl;
            getMatrix(A, rows, columns);
            cout << "Enter the second matrix that you want to add: " << endl;
            getMatrix(B, rows, columns);
            A = addMatrix(A, B, rows, columns);
            cout << "Matrix after operation of addition: " << endl;
            print(A, rows, columns);
        }
    }
    else if(string(argv[1])=="subtractMatrix")
    {
        input(rows,columns,type);
        if(type=="double") {
            double **A = new double *[rows];
            double **B = new double *[rows];
            for (int i = 0; i < rows; i++) {
                A[i] = new double[columns];
                B[i] = new double[columns];
            }
            cout << "Enter the first matrix: " << endl;
            getMatrix(A, rows, columns);
            cout << "Enter the second matrix that you want to subtract: " << endl;
            getMatrix(B, rows, columns);
            A = subtractMatrix(A, B, rows, columns);
            cout << "Matrix afrer operation of subtraction: " << endl;
            print(A, rows, columns);
        }
        else if(type=="int") {
            int ** A = new int *[rows];
            int ** B = new int *[rows];
            for(int i=0; i<rows; i++) {
                A[i] = new int [columns];
                B[i] = new int[columns];
            }
            cout << "Enter the first matrix: " << endl;
            getMatrix(A, rows, columns);
            cout << "Enter the second matrix that you want to subtract: " << endl;
            getMatrix(B, rows, columns);
            A = subtractMatrix(A, B, rows, columns);
            cout << "Matrix afrer operation of subtraction: " << endl;
            print(A, rows, columns);
        }
    }
    else if(string(argv[1])=="multiplyMatrix")
    {
        cout<<"Enter the type of the matrices, int or double: "<<endl;
        cin>>type;
        if(type=="double") {
            cout<<"First matrix:"<<endl;
            cout<<"Enter the number of rows: "<<endl;
            cin>>rows;
            cout<<"Enter the numer of columns: "<<endl;
            cin>>columns;
            double** A = new double *[rows];
            for (int i = 0; i < rows; i++)
                A[i] = new double[columns];
            cout << "Enter the first matrix: " << endl;
            getMatrix(A, rows, columns);
            int rowsB, columnsB;
            cout << "Second matrix: " << endl;
            cout<<"Enter the number of rows: "<<endl;
            cin>>rowsB;
            cout<<"Enter the numer of columns: "<<endl;
            cin>>columnsB;
            double** B = new double *[rowsB];
            for (int i = 0; i < rowsB; i++)
                B[i] = new double[columnsB];
            cout << "Enter the second matrix: " << endl;
            getMatrix(B, rowsB, columnsB);
            A = multiplyMatrix(A, B, rows, columns, columnsB);
            cout << "Matrix after operation of multiplication: " << endl;
            print(A, rows, columnsB);
        }
        else if(type=="int")
        {
            cout<<"First matrix:"<<endl;
            cout<<"Enter the number of rows: "<<endl;
            cin>>rows;
            cout<<"Enter the numer of columns: "<<endl;
            cin>>columns;
            int** A = new int *[rows];
            for (int i = 0; i < rows; i++)
                A[i] = new int[columns];
            cout << "Enter the first matrix: " << endl;
            getMatrix(A, rows, columns);
            int rowsB, columnsB;
            cout << "Second matrix: " << endl;
            cout<<"Enter the number of rows: "<<endl;
            cin>>rowsB;
            cout<<"Enter the numer of columns: "<<endl;
            cin>>columnsB;
            int** B = new int *[rowsB];
            for (int i = 0; i < rowsB; i++)
                B[i] = new int[columnsB];
            cout << "Enter the second matrix: " << endl;
            getMatrix(B, rowsB, columnsB);
            A = multiplyMatrix(A, B, rows, columns, columnsB);
            cout << "Matrix after operation of multiplication: " << endl;
            print(A, rows, columnsB);
        }
    }
    else if(string(argv[1])=="multiplyByScalar")
    {
        input(rows,columns,type);
        if(type=="double") {
            double** A = new double *[rows];
            double scalar;
            for (int i = 0; i < rows; i++) {
                A[i] = new double[columns];
            }
            cout << "Enter the matrix: " << endl;
            getMatrix(A, rows, columns);
            cout << "Enter the scalar that you want to multiply the matrix by: " << endl;
            cin >> scalar;
            A = multiplyByScalar(A, rows, columns, scalar);
            cout << "Matrix after operation of multiplication: " << endl;
            print(A, rows, columns);
        }
        else if(type=="int")
        {
            int**A = new int* [rows];
            int scalar;
            for(int i=0; i<rows; i++)
                A[i] = new int[columns];
            cout << "Enter the matrix: " << endl;
            getMatrix(A, rows, columns);
            cout << "Enter the scalar that you want to multiply the matrix by: " << endl;
            cin >> scalar;
            A = multiplyByScalar(A, rows, columns, scalar);
            cout << "Matrix after operation of multiplication: " << endl;
            print(A, rows, columns);
        }
    }
    else if(string(argv[1])=="transpozeMatrix")
    {
        input(rows,columns,type);
        if(type == "double") {
            double** A = new double *[rows];
            for (int i = 0; i < rows; i++)
                A[i] = new double[columns];
            cout << "Enter the matirx: " << endl;
            getMatrix(A, rows, columns);
            A = transpozeMatrix(A, rows, columns);
            cout << "Natrix after operation of transposition: " << endl;
            print(A, rows, columns);
        }
        else if(type=="int")
        {
            int** A = new int* [rows];
            for(int i=0; i<rows; i++)
                A[i] = new int[columns];
            cout << "Enter the matirx: " << endl;
            getMatrix(A, rows, columns);
            A = transpozeMatrix(A, rows, columns);
            cout << "Natrix after operation of transposition: " << endl;
            print(A, rows, columns);
        }
    }
    else if(string(argv[1])=="powerMatrix")
    {
        unsigned power;
        input(rows,columns,type);
        if(type=="double") {
            double** A = new double *[rows];
            for (int i = 0; i < rows; i++)
                A[i] = new double[columns];
            cout << "Enter the matrix: " << endl;
            getMatrix(A, rows, columns);
            cout << "Enter the power: " << endl;
            cin >> power;
            A = powerMatrix(A, rows, columns, power);
            cout << "Matrix after operation of exponentiation: " << endl;
            print(A, rows, columns);
        }
        else if(type=="int")
        {
            int** A = new int *[rows];
            for (int i = 0; i < rows; i++)
                A[i] = new int[columns];
            cout << "Enter the matrix: " << endl;
            getMatrix(A, rows, columns);
            cout << "Enter the power: " << endl;
            cin >> power;
            A = powerMatrix(A, rows, columns, power);
            cout << "Matrix after operation of exponentiation: " << endl;
            print(A, rows, columns);
        }
    }
    else if(string(argv[1])=="determinantMatrix")
    {
        input(rows,columns,type);
        if(type=="double") {
            double** A = new double *[rows];
            for (int i = 0; i < rows; i++)
                A[i] = new double[columns];
            cout << "Enter the matrix: " << endl;
            getMatrix(A, rows, columns);
            double determinant = determinantMatrix(A, rows, columns);
            cout << "Determinant of the given matrix: " << determinant << endl;
        }
        else if(type=="int")
        {
            int** A = new int *[rows];
            for (int i = 0; i < rows; i++)
                A[i] = new int[columns];
            cout << "Enter the matrix: " << endl;
            getMatrix(A, rows, columns);
            int determinant = determinantMatrix(A, rows, columns);
            cout << "Determinant of the given matrix: " << determinant << endl;
        }
    }
    else if(string(argv[1])=="matrixIsDiagonal")
    {
        input(rows,columns,type);
        if(type=="double") {
            double** A = new double *[rows];
            for (int i = 0; i < rows; i++)
                A[i] = new double[columns];
            cout << "Enter the matrix: " << endl;
            getMatrix(A, rows, columns);
            if (matrixIsDiagonal(A, rows, columns))
                cout << "Matrix is diagonal" << endl;
            else
                cout << "Matrix is not diagonal" << endl;
        }
        else if(type=="int")
        {
           int ** A = new int *[rows];
            for (int i = 0; i < rows; i++)
                A[i] = new int[columns];
            cout << "Enter the matrix: " << endl;
            getMatrix(A, rows, columns);
            if (matrixIsDiagonal(A, rows, columns))
                cout << "Matrix is diagonal" << endl;
            else
                cout << "Matrix is not diagonal" << endl;
        }
    }
    else if(string(argv[1])=="swap")
    {
        int rowA=0,columnA=0,rowB=0,columnB=0;
        input(rows,columns,type);
        if(type=="double") {
            double** A = new double *[rows];
            for (int i = 0; i < rows; i++)
                A[i] = new double[columns];
            cout << "Enter the matrix: " << endl;
            getMatrix(A, rows, columns);
            cout << "Select the numbers that you want to swap by typing the row and the column of the number" << endl;
            cout << "For example the first number is in first row and first column so type 1 and 1" << endl;
            cout << "Enter the position of the first number: " << endl;
            cout << "Row: ";
            cin >> rowA;
            while (rowA <= 0 || rowA > rows) {
                cout << "Enter again the right value!" << endl;
                cout << "Row: ";
                cin >> rowA;
            }
            cout << "Column: ";
            cin >> columnA;
            while (columnA <= 0 || columnA > columns) {
                cout << "Enter again the right value!" << endl;
                cout << "Column: ";
                cin >> columnA;
            }
            cout << "Enter the position of the second number: " << endl;
            cout << "Row: ";
            cin >> rowB;
            while (rowB <= 0 || rowB > rows) {
                cout << "Enter again the right value!" << endl;
                cout << "Row: ";
                cin >> rowB;
            }
            cout << "Column: ";
            cin >> columnB;
            while (columnB <= 0 || columnB > columns) {
                cout << "Enter again the right value!" << endl;
                cout << "Column: ";
                cin >> columnB;
            }
            swap(A[rowA - 1][columnA - 1], A[rowB - 1][columnB - 1]);
            cout << "Matrix after swaping these numbers: " << endl;
            print(A, rows, columns);
        }
        else if(type=="int")
        {
            int** A = new int *[rows];
            for (int i = 0; i < rows; i++)
                A[i] = new int[columns];
            cout << "Enter the matrix: " << endl;
            getMatrix(A, rows, columns);
            cout << "Select the numbers that you want to swap by typing the row and the column of the number" << endl;
            cout << "For example the first number is in first row and first column so type 1 and 1" << endl;
            cout << "Enter the position of the first number: " << endl;
            cout << "Row: ";
            cin >> rowA;
            while (rowA <= 0 || rowA > rows) {
                cout << "Enter again the right value!" << endl;
                cout << "Row: ";
                cin >> rowA;
            }
            cout << "Column: ";
            cin >> columnA;
            while (columnA <= 0 || columnA > columns) {
                cout << "Enter again the right value!" << endl;
                cout << "Column: ";
                cin >> columnA;
            }
            cout << "Enter the position of the second number: " << endl;
            cout << "Row: ";
            cin >> rowB;
            while (rowB <= 0 || rowB > rows) {
                cout << "Enter again the right value!" << endl;
                cout << "Row: ";
                cin >> rowB;
            }
            cout << "Column: ";
            cin >> columnB;
            while (columnB <= 0 || columnB > columns) {
                cout << "Enter again the right value!" << endl;
                cout << "Column: ";
                cin >> columnB;
            }
            swap(A[rowA - 1][columnA - 1], A[rowB - 1][columnB - 1]);
            cout << "Matrix after swaping these numbers: " << endl;
            print(A, rows, columns);
        }
    }
    else if(string(argv[1])=="sortRow")
    {
        int row;
        input(rows,columns,type);
        if(type=="double") {
            double** A = new double *[rows];
            for (int i = 0; i < rows; i++)
                A[i] = new double[columns];
            cout << "Enter the matrix: " << endl;
            getMatrix(A, rows, columns);
            cout << "Enter the number of row that you want to sort (if you want the first row type 1 etc.): ";
            cin >> row;
            while (row <= 0 || row > rows) {
                cout << "Enter again the right value!" << endl;
                cout << "Row: ";
                cin >> row;
            }
            A[row - 1] = sortRow(A[row - 1], columns);
            cout << "Matrix after sorting the row: " << endl;
            print(A, rows, columns);
        }
        else if(type=="int")
        {
            int** A = new int *[rows];
            for (int i = 0; i < rows; i++)
                A[i] = new int [columns];
            cout << "Enter the matrix: " << endl;
            getMatrix(A, rows, columns);
            cout << "Enter the number of row that you want to sort (if you want the first row type 1 etc.): ";
            cin >> row;
            while (row <= 0 || row > rows) {
                cout << "Enter again the right value!" << endl;
                cout << "Row: ";
                cin >> row;
            }
            A[row - 1] = sortRow(A[row - 1], columns);
            cout << "Matrix after sorting the row: " << endl;
            print(A, rows, columns);
        }
    }
    else if(string(argv[1])=="sortRowsInMatrix")
    {
        input(rows,columns,type);
        if(type=="double") {
            double** A = new double *[rows];
            for (int i = 0; i < rows; i++)
                A[i] = new double[columns];
            cout << "Enter the matrix: " << endl;
            getMatrix(A, rows, columns);
            A = sortRowsInMatrix(A, rows, columns);
            cout << "Matirx after operation of sorting: " << endl;
            print(A, rows, columns);
        }
        else if(type=="int")
        {
            int** A = new int *[rows];
            for (int i = 0; i < rows; i++)
                A[i] = new int[columns];
            cout << "Enter the matrix: " << endl;
            getMatrix(A, rows, columns);
            A = sortRowsInMatrix(A, rows, columns);
            cout << "Matirx after operation of sorting: " << endl;
            print(A, rows, columns);
        }
    }
    else
    {
        help();
    }
    return 0;
}