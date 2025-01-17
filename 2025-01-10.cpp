#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//--------------------------------------------------
int main() {

   const string cherche = "ma";
   //                0123456789012345678901234567890123456
   string chaine  = "ma maman mange des mangue a la maison";

   size_t pos = 0;
   while(  (pos = chaine.find(cherche, pos)) != string::npos ) {
      cout << pos << " ";
      ++pos;
   }

   return EXIT_SUCCESS;
}