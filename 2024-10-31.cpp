#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;


int main() {

   int entier = 123456789;
   float reel = entier;

   cout << fixed;
   cout << setprecision(20);

   cout << entier << endl;
   cout << reel   << endl;

   cout << 1 / 3.  << endl;
   cout << 42.42  << endl;

   cout << numeric_limits<float>::digits10       << endl;
   cout << numeric_limits<double>::digits10      << endl;
   cout << numeric_limits<long double>::digits10 << endl;

   return EXIT_SUCCESS;
}