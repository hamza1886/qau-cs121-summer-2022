#include <iostream>
#include <array>

using namespace std;

void print(const array<int, 3> &);

int main() {
    array<int, 3> nums{10, 15, -5};

    for (auto &num: nums) {
        num = num * num * num;
    }

    print(nums);

    return 0;
}

void print(const array<int, 3> &items) {
    for (auto &item: items) {
        cout << item << " ";
    }
}
