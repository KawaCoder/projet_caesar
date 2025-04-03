#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "caesar.h"

/**
 * @brief Chiffre ou déchiffre un message en utilisant le chiffrement de César.
 *
 * Cette fonction applique le chiffrement de César à un message donné. Selon le
 * paramètre operation, elle chiffre ou déchiffre le message en utilisant la clé
 * fournie.
 *
 * @param message_user Le message à chiffrer ou déchiffrer. Cette chaîne est
 *                     modifiée directement.
 * @param cle La clé utilisée pour le chiffrement de César. Elle détermine le
 *            décalage pour le chiffrement ou le déchiffrement.
 * @param operation Un booléen indiquant l'opération à effectuer :
 *                  - true : Chiffrer
 *                  - false : Déchiffrer
 * @return Un entier indiquant le succès de l'opération :
 *         - 1 : Succès.
 *         - -1 : Échec (entrée invalide).
 */
int caesar(char *message_user, int cle, bool operation)
{
    if (message_user == NULL)
    {
        return -1; // Failure
    }

    // false: dechiffrer
    // true: chiffrer
    if (operation == false)
    {
        cle = -cle;
    }

    int longueur = strlen(message_user);
    for (int i = 0; i < longueur; i++)
    {
        // minuscules
        if (message_user[i] >= 'a' && message_user[i] <= 'z')
        {
            message_user[i] =
                (message_user[i] - 'a' + cle % 26 + 26) % 26 + 'a';
        }
        // majuscules
        else if (message_user[i] >= 'A' && message_user[i] <= 'Z')
        {
            message_user[i] =
                (message_user[i] - 'A' + cle % 26 + 26) % 26 + 'A';
            // chiffres
        }
        else if (message_user[i] >= '0' && message_user[i] <= '9')
        {
            message_user[i] =
                (message_user[i] - '0' + cle % 10 + 10) % 10 + '0';
        }
    }
    return 1;
}