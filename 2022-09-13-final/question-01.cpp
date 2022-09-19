#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<float> items;

    items.push_back(10.5f);
    items.push_back(20.0f);
    items.push_back(30.9f);

    for (const float &item: items) {
        cout << item << endl;
    }

    return 0;
}
