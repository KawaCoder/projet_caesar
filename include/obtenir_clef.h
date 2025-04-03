#include <stdio.h>

/**
 * @brief Obtient une clé entière saisie par l'utilisateur.
 *
 * Cette fonction demande à l'utilisateur de saisir une valeur entière pour la clé.
 * Elle vérifie si le pointeur passé en paramètre est valide et gère les erreurs
 * de saisie en affichant des messages appropriés.
 *
 * @param clef Pointeur vers un entier où la valeur saisie sera stockée.
 *             Doit être non NULL.
 *
 * @return Retourne 1 si la clé a été obtenue avec succès.
 *         Retourne -1 si le pointeur `clef` est NULL.
 */
int obtenir_clef(int *clef);
