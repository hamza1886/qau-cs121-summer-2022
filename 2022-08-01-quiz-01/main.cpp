#include <iostream>
#include <string>

using namespace std;

class Image {
private:
    unsigned int _width;
    unsigned int _height;
    float _opacity;
public:
    Image(unsigned int width, unsigned int height, float opacity = 1) : _width(width), _height(height), _opacity(opacity) {

    }

    unsigned int getWidth() const {
        return _width;
    }

    void setWidth(const unsigned int width) {
        _width = width;
    }

    unsigned int getHeight() const {
        return _height;
    }

    void setHeight(const unsigned int height) {
        _height = height;
    }

    float getOpacity() const {
        return _opacity;
    }

    void setOpacity(const float opacity) {
        _opacity = opacity;
    }

    string toString() const {
        return "width: " + to_string(_width) + "\nheight: " + to_string(_height) + "\nopacity: " + to_string(_opacity);
    }
};

int main() {
    Image image = Image(10, 10, 0.5);

    cout << image.toString() << endl;

    image.setWidth(15);
    image.setHeight(15);
    image.setOpacity(0.8);

    cout << image.toString() << endl;

    return 0;
}
