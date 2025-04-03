#ifndef VERIFIER_ACCENT_H
#define VERIFIER_ACCENT_H
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
int convertir_accents(char *message_user);

#endif // VERIFIER_ACCENT_H
