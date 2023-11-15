#include <iostream> 

using namespace std;

class dog {

private:

double length;
double width;

public: 
//deafult constructor
dog(): length(3.0), width(3.0) {}

//setters
void setLength(double len) {
    length = len;
}

void setWidth (double wid) {
    width = wid;
}

//getters

double getLength() const {
    return length;
}

double getWidth() const {
    return width;
}

//member functions for calc. area

double calculateArea() const {
    return length * width;
}

};

int main() {

    dog mydog;

    mydog.setLength(10.0);
    mydog.setWidth(20.0);
   
   
    cout<< "\nThis is my dog: ";
    cout<< "\n----------------------";


    cout<< "\nLength: " <<mydog.getLength();
    cout<< "\nWidth: " <<mydog.getWidth();

    cout<< "\nArea: " <<mydog.calculateArea();

    return 0;
}