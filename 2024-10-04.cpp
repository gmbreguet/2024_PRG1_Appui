#include <iostream>
#include <cstdlib>

using namespace std;

void fct() {
   cout << "coucou" << endl;
}
int main() {

   double temperature = 37.1;

   if (temperature > 40)
      cout << "tres chaud ..";
   else if (temperature > 30)
      cout << "chaud ..";
   else if (temperature > 20)
      cout << "agreable ..";
   else
      cout << "frais";

   /* pas ue valeur discrete => ne compile pas !
   switch(temperature) {
      case temperature > 30 :
      default : cout << "..";
   }
   */

   cout << endl;

   char car = 'a';
      switch (car) {
         case 'a' : fct(); cout << "lundi"    << endl;
         case 'b' : cout << "mardi"    << endl;
         case 'c' : cout << "mercredi" << endl;
         default : cout << "default" << endl;
      }

   return EXIT_SUCCESS;
}