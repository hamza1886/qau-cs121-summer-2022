#include <iostream>
#include <vector>

using namespace std;

unsigned int removeDuplicates(vector<int> &);

int main() {
    vector<int> nums{1, 2, 2, 5, 10, 10, 10, 12, 17, 17};

    unsigned int k = removeDuplicates(nums);
    cout << "k = " << k << endl;

    for (auto num: nums) {
        cout << num << " ";
    }
}

unsigned int removeDuplicates(vector<int> &items) {
    const unsigned int SIZE = items.size();

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
