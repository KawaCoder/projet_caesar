#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
 * @brief Affiche un message avec un préfixe spécifique en fonction du type et écrit les sorties dans un fichier ou la sortie standard.
 *
 * Valeurs du type:
 *  - 1: Question ("[?]")
 *  - 2: Message d'erreur (préfixe "[!]")
 *  - 3: Sortie standard (préfixe "[*]")
 *  - 4: Aucun préfixe
 *
 * Valeurs de type_sortie:
 *  - 's': Écrit dans la sortie standard.
 *  - 'f': Écrit dans un fichier.
 *
 * @param type Le type de message à afficher.
 * @param message Le message à afficher.
 * @param type_sortie Le type de sortie ('s' pour standard, 'f' pour fichier).
 * @return int Renvoie 1 en cas de succès, 0 en cas d'erreur.
 */
int afficher(char *message, int type, char type_sortie);