#include <iostream>

using namespace std;

// function prototype with pointer as parameters
void swap(int *, int *);

int main() {
    // initialize variables
    int a = 1, b = 2;
    int *aPtr = &a, *bPtr = &b;

    cout << "Before swapping" << endl;
    cout << "a = " << *aPtr << endl;
    cout << "b = " << *bPtr << endl;

    // call function by passing variable addresses
    swap(aPtr, bPtr);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << *aPtr << endl;
    cout << "b = " << *bPtr << endl;
    return 0;
}

// function definition to swap numbers
void swap(int *n1, int *n2) {
    int temp = *n1
    *n1 = *n2;
    *n2 = temp;
}
