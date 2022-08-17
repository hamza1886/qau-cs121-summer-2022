#include <iostream>
#include <array>

using namespace std;

const size_t SIZE = 3;

void permutation(array<int, SIZE> &, size_t, size_t);

void swap(array<int, SIZE> &, size_t, size_t);

void print(const array<int, SIZE> &);

int main() {
    array<int, SIZE> nums{1, 2, 3};

    permutation(nums, 0, SIZE - 1);

    return 0;
}

void permutation(array<int, SIZE> &items, const size_t leftIndex, const size_t rightIndex) {
    if (leftIndex == rightIndex) {
        print(items);
    } else {
        for (auto i = leftIndex; i <= rightIndex; i++) {
            swap(items, leftIndex, i); // Swapping done
            permutation(items, leftIndex + 1, rightIndex); // Recursion called
            swap(items, leftIndex, i); // Backtrack
        }
    }
}

void swap(array<int, SIZE> &items, const size_t i, const size_t j) {
    int temp = items[i];
    items[i] = items[j];
    items[j] = temp;
}

void print(const array<int, SIZE> &items) {
    for (auto item: items) {
        cout << item << " ";
    }
    cout << endl;
}
