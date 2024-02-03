
#include <iostream>
using namespace std;

class FirstClass {
private:
    int l =5;
    int w = 10;
    int h =6;
public:
    int GetArea() {

    }
    int GetVolume() {
      return l*w*h;
    }

};

int main()
{
    FirstClass mody;
    cout<<mody.GetVolume();
}

