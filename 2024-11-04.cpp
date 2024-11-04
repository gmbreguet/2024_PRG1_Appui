#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

string crypter(string message, int n = 1) {
   for (char& c : message)
      c -= n;
   return message;
}

string decrypter(string message, int n = 1) {
   for (char& c : message)
      c += n;
   return message;
}

int main() {

   const size_t VAL_CESAR = 3;
   string message = "bonjour a toutes et tous";
   cout << "avant codage   : " << message             << endl;
   string message_decode = crypter(message, VAL_CESAR);
   cout << "apres codage   : " << message_decode      << endl;
   cout << "apres decodage : " << decrypter(message_decode, VAL_CESAR);

   return EXIT_SUCCESS;
}

/* PSEUDO CODE

 1. message de bienvenue
 2. saisie des fichiers (entrée et sortie)
 3. saisie du message à crypter
 4. crypter le message
 5. écrire le message dans un fichier
 6. lire le fichier crypter
 7. décrypter le message
 8. ecrire le message décrypter dans un fichier

 à faire
 - fonction pour saisir le nom des fichiers
 - crypter et decrypter
 - ecrire un string dans un fichier
 - lire un fichier dans un string

 */