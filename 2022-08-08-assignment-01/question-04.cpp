#include <iostream>
#include <array>

using namespace std;

const size_t M = 4, N = 5;

float median(const array<int, M> &, const array<int, N> &);

int main() {
    const array<int, M> nums1{1, 2, 5, 8};
    const array<int, N> nums2{3, 7, 10, 12, 17};

    for (auto num1: nums1) {
        cout << num1 << " ";
    }
    cout << endl;

    for (auto num2: nums2) {
        cout << num2 << " ";
    }
    cout << endl;

    const float result = median(nums1, nums2);
    cout << "Median = " << result << endl;
}

float median(const array<int, M> &a, const array<int, N> &b) {
    array<int, M + N> items{};
    size_t i = 0, j = 0, k = 0;

    while (i < M || j < N) {
        if (a[i] < b[j]) {
            items[k++] = a[i++];
        } else if (b[j] < a[i]) {
            items[k++] = b[j++];
        } else {
            items[k++] = a[i++];
            items[k++] = b[j++];
        }

        if (i == M || j == N) {
            break;
        }
    }

    if (i == M) {
        for (auto l = j; l < N; l++) {
            items[k++] = b[l];
        }
    } else if (j == N) {
        for (auto l = i; l < M; l++) {
            items[k++] = a[l];
        }
    }

    for (auto item: items) {
        cout << item << " ";
    }
    cout << endl;

    const auto mid = static_cast<size_t> ((M + N) / 2);

    return 0 == (M + N) % 2
           ? (float) (items[mid - 1] + items[mid]) / 2
           : (float) items[mid];
}
