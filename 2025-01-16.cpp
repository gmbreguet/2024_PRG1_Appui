#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//--------------------------------------------------
class C {
public:
   C(int a) { i = a; }
   C(const C& other) { this->i = other.i; }
   ~C() { cout << "D"; }
   int get() const { return i; }
private:
   int i;
};

//--------------------------------------------------
int main() {

   C c(2);
   cout << c.get() << endl;

   return EXIT_SUCCESS;
}