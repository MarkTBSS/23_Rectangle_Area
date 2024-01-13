#include <iostream>
using namespace std;

class Rectangle {
    private:
    int width, height;

    public:
    // Setter methods
    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }

    // Getter methods
    int getWidth() const { return width; }
    int getHeight() const { return height; }

    void display() { cout << width << " " << height; }
};

class RectangleArea : public Rectangle {
    public:
    void overloadFromAboveDisplay() {
        display();
        cout << endl << getWidth() * getHeight();
    }
};

int main() {
    RectangleArea rectangleInstance;
    rectangleInstance.setWidth(10);
    rectangleInstance.setHeight(5);
    rectangleInstance.overloadFromAboveDisplay();
    cout << endl;
    return 0;
}