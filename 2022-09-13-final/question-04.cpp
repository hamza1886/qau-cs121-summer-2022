#include <iostream>
#include <cstring>

using namespace std;

class String {
private:
    char *value;

    void initStr() {
        value = new char[1];
        value[0] = '\0';
    }

    void copyStr(const char* str) {
        size_t size{0};

        while (str[size] != '\0') {
            ++size;
        }

        value = new char[size + 1];

        for (size_t i{0}; i < size; i++) {
            value[i] = str[i];
        }

        value[size] = '\0';
    }

public:
    String() : value{nullptr} {
        initStr();
    }

    explicit String(char* val) : value(nullptr) {
        val == nullptr ? initStr() : copyStr(val);
    }

    String(const String& source) : value(nullptr) {
        copyStr(source.value);
    }

    ~String() {
        delete value;
    }

    size_t length() const {
        size_t size{0};

        while (value[size] != '\0') {
            ++size;
        }

        return size;
    }

    String& operator=(const String& s)
    {
        if (this != &s) {
            delete [] value;
            value = new char[s.length()];

            for (int i = 0; i < s.length() + 1; i++) {
                value[i] = s.value[i];
            }
        }

        return *this;
    }

    String operator+(const String& str) const {
        size_t strLength = length() - 1 + str.length() - 1;

        String newStr;
        newStr.value = new char[strLength + 1];

        size_t i{0};
        while (value[i] != '\0') {
            newStr.value[i] = value[i];
            ++i;
        }

        size_t j{0};
        while (str.value[j] != '\0') {
            newStr.value[i] = str.value[j];
            ++i;
            ++j;
        }

        newStr.value[strLength] = '\0';

        return newStr;
    }

    friend istream& operator>>(istream& input, String& s)  {
        char* temp;
        size_t size(256);
        temp = new char[size];

        input.getline(temp,size);
        s = String(temp);

        delete [] temp;

        return input;
    }

    friend ostream& operator<<(ostream& output, const String& s)  {
        output << s.value;
        return output;
    }
};

int main() {
    String s1, s2;

    cout << "Enter string 1: ";
    cin >> s1;

    cout << "Enter string 2: ";
    cin >> s2;

    String s3(s1 + s2);
    cout << s3;

    return 0;
}