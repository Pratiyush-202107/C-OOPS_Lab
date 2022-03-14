#include<iostream>
using namespace std;

int matrix[10][10]; //Declaring a matrix of size 10*10 (let's say).

//Function to read matrix by taking input using nested for loop.
void read_matrix(int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        cout <<"Enter elements in matrix for row " << i+1 << " (with spaces in between): ";
        for (int j = 0; j < columns; j++)
            cin >> matrix[i][j];
    }    
}

//Function to display matrix for provided input using for loop.
void display_matrix(int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }  
}

//Main function
int main()
{
    int m, n;
    cout << "Reading Matrix:" << endl;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    read_matrix(m,n);
    cout << "Diplaying the matrix with entered elements:" << endl;
    display_matrix(m,n);
    return 0;
}