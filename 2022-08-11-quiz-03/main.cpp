#include <iostream>
#include <array>

using namespace std;

const int SIZE = 3;

void sort(array<int, SIZE> &items, const int size) {
    for (size_t i{0}; i < SIZE - 1; i++) {
        for (size_t j{i + 1}; j < SIZE; j++) {
            if (items[i] > items[j]) {
                int temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }
}

int main() {
    array<int, SIZE> nums{10, 15, -5};

    sort(nums, SIZE);

    for (auto num: nums) {
        cout << num << " ";
    }

    return 0;
}
