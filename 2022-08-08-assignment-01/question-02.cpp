#include <iostream>
#include <array>

using namespace std;

const int SIZE = 10;

unsigned int removeDuplicates(array<int, SIZE> &);

int main() {
    array<int, SIZE> nums{1, 2, 2, 5, 10, 10, 10, 12, 17, 17};

    unsigned int k = removeDuplicates(nums);
    cout << "k = " << k << endl;

    for (auto num: nums) {
        cout << num << " ";
    }
}

unsigned int removeDuplicates(array<int, SIZE> &items) {
    if (0 == SIZE || 1 == SIZE) {
        return SIZE;
    }

    // To store index of next unique element
    unsigned int k = 0;

    for (auto i = 0; i < SIZE - 1; i++) {
        if (items[i] != items[i + 1]) {
            items[k++] = items[i];
        }
    }

    items[k++] = items[SIZE - 1];

    return k;
}
