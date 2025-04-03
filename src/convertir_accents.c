#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include "convertir_accents.h"
#include "verifier_alphanum.h"
#include "caesar.h"

/**
 * @brief Convertit les caractères accentués d'une chaîne en leurs équivalents non accentués.
 *
 * Cette fonction traite la chaîne d'entrée et remplace les caractères accentués
 * par leurs versions non accentuées.
 *
 * @param message_user Un pointeur vers la chaîne contenant des caractères accentués.
 *
 * @return Retourne 1 en cas de succès, -1 en cas d'erreur.
 */
int convertir_accents(char *message_user)
{
  if (message_user == NULL)
  {
    return -1;
  }
  setlocale(LC_ALL, "");
  wchar_t message_wide[100];
  if (mbstowcs(message_wide, message_user,
               sizeof(message_wide) / sizeof(wchar_t)) == (size_t)-1)
  {
    return -1;
  }

  for (int i = 0; message_wide[i] != L'\0'; i++)
  {
    switch (message_wide[i])
    {
    case L'ä':
    case L'Ä':
    case L'â':
    case L'Â':
    case L'Á':
    case L'á':
    case L'à':
    case L'À':
      message_wide[i] = L'a';
      break;
    case L'ç':
    case L'Ç':
      message_wide[i] = L'c';
      break;
    case L'ë':
    case L'Ë':
    case L'ê':
    case L'Ê':
    case L'é':
    case L'É':
    case L'è':
    case L'È':
      message_wide[i] = L'e';
      break;
    case L'ï':
    case L'Ï':
    case L'î':
    case L'Î':
      message_wide[i] = L'i';
      break;
    case L'ö':
    case L'Ö':
    case L'ô':
    case L'Ô':
      message_wide[i] = L'o';
      break;
    case L'û':
    case L'Û':
    case L'ü':
    case L'Ü':
    case L'ù':
    case L'Ù':
      message_wide[i] = L'u';
      break;
    case L'ÿ':
    case L'Ÿ':
      message_wide[i] = L'y';
      break;
    case L'ñ':
    case L'Ñ':
      message_wide[i] = L'n';
      break;
    }
  }

  if (wcstombs(message_user, message_wide, 100) == (size_t)-1)
  {
    return -1;
  }

  message_user[strcspn(message_user, "\r\n")] = 0;
  return 1;
}
