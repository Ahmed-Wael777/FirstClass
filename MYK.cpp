
#include <iostream>
using namespace std;

class FirstClass {
private:
    int l =5;
    int w = 10;
    int h =6;
public:
    int GetArea() {
          return l*w;
    }
    int GetVolume() {

    }

};

int main()
{
    std::cout << "Hello World!\n";
}

