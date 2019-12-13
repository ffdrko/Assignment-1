#include <iostream>
#include<stdio.h>

using namespace std;
//task3
int main()
{
    cout << "Enter rows: ";
    int rows{}, col_ind{};
    cin >> rows;

    int** arr = new int*[rows];
    int* user_col_input = new int[rows];

//allocate 2D array
    for(int i{0}; i<rows; ++i) {
        cout << "Enter number of columns in row " << (i+1) << ": ";
        cin >> *(user_col_input + i);
        arr[i] = new int[*(user_col_input + i)];
    }
    cout << endl << endl;

    //read
    for(int i{0}; i<rows; ++i) {
        cout << "\nRow " << (i+1) << ": \n";
        for(int j{0}; j<*(user_col_input+i); ++j) {
            cout << "col " << (j+1) << ": ";
            cin >> arr[i][j];
        }
    }

    cout << endl << endl;
    //print
    for(int i{0}; i<rows; ++i) {
        for(int j{0}; j<*(user_col_input+i); ++j) {
            cout << arr[i][j];
        }
        cout << endl;
    }

// deallocate
    for(int i{0}; i<rows; ++i) {
        delete [] arr[i];
    }
    delete arr;
    delete user_col_input;

    cout << endl;
    return 0;
}
