#include <iostream>

using namespace std;

int main() {
    float a{1.2f}, b{2.3f}, c{5.0f};
    float *aPtr{&a}, *bPtr{&b}, *cPtr{&c};

    float min{*aPtr}, max{*aPtr};

    if (*bPtr < min) min = *bPtr;
    if (*cPtr < min) min = *cPtr;

    if (*bPtr > max) max = *bPtr;
    if (*cPtr > max) max = *cPtr;

    cout << "Smallest value among " << a << ", " << b << " and " << c << " is: " << min << endl;
    cout << "Largest value " << a << ", " << b << " and " << c << " is: " << max << endl;

    return 0;
}
