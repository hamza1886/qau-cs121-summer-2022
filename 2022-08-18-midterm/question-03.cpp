#include <iostream>

using namespace std;

class BigNumber {
private:
    size_t SIZE = 5;
    unsigned int *digits = nullptr;
public:
    explicit BigNumber(unsigned long number = 0) {
        initArray(1 + static_cast<int>(floor(log10(number))));

        for (size_t i = SIZE - 1; number != 0 && i >= 0; i++) {
            digits[i] = number % 10;
            cout << digits[i] << " ";
            number /= 10;
            cout << number << endl;
        }
    }

    explicit BigNumber(const int *number, const int size = 5) {
        initArray(size);

        for (int i = 0; i < size; i++) {
            digits[i] = number[i];
        }
    }

    void initArray(int size = 5) {
        SIZE = size;
        digits = new unsigned int[SIZE];
    }

    void toString() {
        if (nullptr == digits) {
            return;
        }

        for (int i = 0; i < SIZE; i++) {
            cout << digits[i] << endl;
        }
    }
};

int main() {
    BigNumber number = BigNumber(1234567890);
    number.toString();

    return 0;
}
