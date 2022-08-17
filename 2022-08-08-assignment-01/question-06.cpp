#include <iostream>
#include <array>

using namespace std;

const size_t SIZE = 6;

void sort(array<int, SIZE> &);

void swap(array<int, SIZE> &, size_t, size_t);

void print(const array<int, SIZE> &);

int main() {
    array<int, SIZE> nums{2, 0, 2, 1, 1, 0};

    sort(nums);
    print(nums);

    return 0;
}

void sort(array<int, SIZE> &items) {
    for (auto i = 0; i < SIZE - 1; i++) {
        for (auto j = i + 1; j < SIZE; j++) {
            if (items[i] > items[j]) {
                swap(items, i, j);
            }
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
