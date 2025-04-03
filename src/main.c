#include <stdio.h>
#include <locale.h>
#include "convertir_accents.h"
#include "verifier_alphanum.h"
#include "obtenir_clef.h"
#include "caesar.h"
#include "afficher.h"
#include "menu.h"

int main()
{
  int reponse = 1;
  menu(&reponse);

  while (reponse != 0)
  {

    setlocale(LC_ALL, "");
    char message[100];
    int clef;

    afficher("Entrez votre message", 1, 's');
    fgets(message, sizeof(message), stdin);

    obtenir_clef(&clef);

    convertir_accents(message);

    if (!verifier_alphanum(message))
    {
      afficher("Le message doit contenir uniquement des lettres et des chiffres", 3, 's');
      return -1;
    }

    // chiffrer
    if (reponse == 1)
    {

      afficher("________________________", 4, 'f');
      afficher("Message d'origine:", 3, 'f');
      afficher(message, 4, 'f');

      caesar(message, clef, true);

      // affichage sur la sortie standard
      afficher(message, 3, 's');

      // ecriture dans le fichier
      afficher("Message chiffré:", 3, 'f');
      afficher(message, 4, 'f');
      afficher("Clef utilisée:", 3, 'f');

      // On caste la clef en string pour l'ecrire dans le fichier
      char clef_str[10];
      snprintf(clef_str, sizeof(clef_str), "%d", clef);
      afficher(clef_str, 4, 'f');
    }
    // dechiffrer
    else if (reponse == 2)
    {
      caesar(message, clef, false);
      afficher(message, 3, 's');
    }
    else if (reponse == 3)
    {
      // chiffrer vigenere
      vigenere(message, clef_vigenere, true);
      afficher(message, 3, 's');
    }
    else if (reponse == 4)
    {
      // dechiffrer vigenere
      vigenere(message, clef_vigenere, false);
      afficher(message, 3, 's');
    }
    menu(&reponse);
  }

  afficher("Merci d'avoir utilisé le programme", 3, 's');
  return 0;
}
