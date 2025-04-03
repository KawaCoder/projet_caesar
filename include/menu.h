#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
 * @brief Affiche un menu interactif à l'utilisateur, récupère son choix, et le valide.
 *
 * Cette fonction affiche un menu avec plusieurs options (Quitter, Chiffrer, Déchiffrer),
 * demande à l'utilisateur de saisir son choix, et vérifie que l'entrée est valide.
 * Si l'entrée est incorrecte, elle demande à l'utilisateur de réessayer jusqu'à ce qu'une
 * valeur valide soit saisie. Une fois un choix valide obtenu, il est stocké dans la variable
 * pointée par `choix`.
 *
 * @param[out] choix Pointeur vers une variable entière où le choix de l'utilisateur sera stocké.
 *                   Les valeurs possibles sont :
 *                   - 0 : Quitter
 *                   - 1 : Chiffrer
 *                   - 2 : Déchiffrer
 * @return int Retourne toujours 1 pour indiquer que l'opération s'est terminée avec succès.
 */
int menu(int *choix);