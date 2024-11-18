#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <sstream>

using namespace std;

//--------------------------------------------------
// fonction : remplacer un mot par un autre dans un texte
// les mots sont des chaines de caractères
// la fonction ne modifie le texte reçu, mais retourne le texte modifié

// exemple : mots => messages
//    avant : les mots du texte composés de mots
//    apres : les messages du texte composés de messages

// remplacer("les mots du texte composés de mots", "mots", "messages")

//--------------------------------------------------
string remplacer(string text, string_view mot, string_view alt) {

   // tant que mot est trouvé dans le texte faire
   size_t pos;
   while( (pos = text.find(mot)) != string::npos ) {

      // remplacer mot par alt
      text.replace(pos, mot.length(), alt);

      // chercher après
      ++pos;
   }

   // retourner le texte modifié
   return text;
}

//--------------------------------------------------
int main() {

   // valeurs non-initialisées => n'importe quoi

   const string text    = "les mots du texte composés de mots"s;
   const string ancien  = "mots"s;
   const string nouveau = "messages"s;

   cout << text.find("mots") << endl;
   cout << text.find("coucou") << endl;

   cout << remplacer(text, ancien, nouveau)     << endl;
   cout << remplacer("toto", ancien, nouveau)   << endl;
   cout << remplacer("", ancien, nouveau)       << endl;

   return EXIT_SUCCESS;
}
