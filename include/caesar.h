#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

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
int caesar(char *message_user, int cle, bool operation);