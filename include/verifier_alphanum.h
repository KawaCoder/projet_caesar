#include <stdbool.h>
#ifndef VERIFIER_ALPHANUM_H
#define VERIFIER_ALPHANUM_H

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
bool verifier_alphanum(char *c);

#endif /* VERIFIER_ALPHANUM_H */
