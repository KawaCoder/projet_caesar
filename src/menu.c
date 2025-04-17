#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "afficher.h"
#include "menu.h"

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
int menu(int *choix)
{
    int input;
    afficher("/__________________________________\\", 4, 's');
    afficher("|               MENU               |", 4, 's');
    afficher("|__________________________________|", 4, 's');
    afficher("|      0. Quitter                  |", 4, 's');
    afficher("|                                  |", 4, 's');
    afficher("|      1. Chiffrer caesar          |", 4, 's');
    afficher("|      2. Déchiffrer caesar        |", 4, 's');
    afficher("|                                  |", 4, 's');
    afficher("\\_________________________________/", 4, 's');
    afficher("Entrez votre choix", 1, 's');
    while (scanf("%d", &input) != 1 || (input != 0 && input != 1 && input != 2))
    {
        while (getchar() != '\n')
            ;
        afficher("Entrez un choix valide", 2, 's');
    }

    // Effacer le buffer d'entrée
    while (getchar() != '\n')
        ;
    // Effacer le terminal
    printf("\033[H\033[J");
    *choix = input;
    return 1;
}
