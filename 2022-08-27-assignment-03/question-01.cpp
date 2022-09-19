#include <iostream>

using namespace std;

class String {
private:
    char *value{};
public:
    String() = default;

    explicit String(char *str) {
        str = str;
    }

    friend std::ostream& operator<<(std::ostream &output, const char *str) {
        for (int i = 0; i < sizeof(str); ++i) {
            output << *(str + i);
        }
        return output;
    }
};

int main() {
    char str[] = "['H', 'e', 'l', 'l', 'o', '\0']";
    String s = String(str);

    cout << s;
    return 0;
}
