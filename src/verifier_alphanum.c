#include <stdio.h>
#include <stdbool.h>
#include "verifier_alphanum.h"

/**
 * @brief Vérifie si une chaîne donnée contient uniquement des caractères alphanumériques et des espaces.
 *
 * Cette fonction vérifie si tous les caractères de la chaîne d'entrée sont soit
 * des lettres majuscules (A-Z), des lettres minuscules (a-z), des chiffres (0-9),
 * ou des espaces (' '). Si la chaîne contient un autre caractère ou si l'entrée
 * est NULL, la fonction retourne false.
 *
 * @param c Un pointeur vers la chaîne de caractères terminée par un caractère nul
 *          à vérifier. Si le pointeur est NULL, la fonction retourne false.
 *
 * @return true si la chaîne contient uniquement des caractères alphanumériques et des espaces,
 *         false sinon.
 */
bool verifier_alphanum(char *c)
{
  if (c == NULL)
  {
    return false;
  }

  for (int i = 0; c[i] != '\0'; i++)
  {
    char ch = c[i];
    if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
          (ch >= '0' && ch <= '9') || (ch == ' ')))
    {
      return false;
    }
  }

  return true;
}