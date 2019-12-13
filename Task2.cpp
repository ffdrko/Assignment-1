#include <iostream>
#include <stdio.h>

using namespace std;
//task2
int main()
{
    int row{}, col{};

    cout << "Enter row and column: ";
    cin >> row >> col;
    getc(stdin);

    char** arr = new char*[row];

    for(int i{0}; i<row; i++) {
        arr[i] = new char[col];
    }

    //read
    for(int i{0}; i<row; i++) {
        cout << "Enter str" << (i+1) << ": ";
        cin.getline(arr[i], col);
    }

    //print
    for(int i{0}; i<row; i++) {
        for(int j{0}; j<col; j++)
            cout << arr[i][j];
        cout << endl;
    }

    //deallocate
    for(int i{0}; i<row; i++) {
        delete [] arr[i];
    }
    delete [] arr;

    cout << endl;
    return 0;
}
