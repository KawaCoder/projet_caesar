#include <stdio.h>
#include "obtenir_clef.h"
#include "afficher.h"

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
int obtenir_clef(int *clef)
{
    if (clef == NULL)
    {
        return (-1);
    }

    afficher("Entrez la valeur de la clef", 1, 's');
    while (scanf("%d", clef) != 1)
    {
        afficher("Entrée invalide", 2, 's');
        afficher(" Veuillez entrer un entier", 1, 's');
        while (getchar() != '\n')
            ; // Vider le buffer
    }
    return (1);
}