#include<iostream>
using namespace std;

int main() {

    cout << "Enter size of the array: ";

    int size_of_array{};

    cin >> size_of_array;

    int *pointer_to_array = new int[size_of_array];

    for(int i{0}; i<size_of_array; ++i) {
        cin >> *(pointer_to_array+i);
    }

    cout << endl << endl;
    for(int i{0}; i<size_of_array; ++i) {
        cout << *(pointer_to_array + i) << endl;
    }

    delete [] pointer_to_array;

    return 0;
}
