#include <stdio.h>
#include <string.h>
#include <time.h>
#include "ecrire_fichier.h"
#include "afficher.h"

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
int afficher(char *message, int type, char type_sortie)
{
    char prefixe[14];
    //[**:**:**] [*]
    // 14 caracteres de prefixe

    // affichage de l'heure
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    char timestamp[20];
    strftime(timestamp, sizeof(timestamp), "%H:%M:%S", t);

    strcpy(prefixe, "[");
    strcat(prefixe, timestamp);
    strcat(prefixe, "] ");

    char suffixe[3] = " >";

    if (type == 1)
    {
        strcat(prefixe, "[?]");
    }
    else if (type == 2)
    {
        strcat(prefixe, "[!]");
    }
    else if (type == 3)
    {
        strcat(prefixe, "[*]");
        strcpy(suffixe, "\n");
    }
    else if (type == 4)
    {
        strcpy(prefixe, "");
        strcpy(suffixe, "\n");
    }
    else
    {
        afficher("Type de message non reconnu", 2, 'o');
        return (0);
    }

    if (type_sortie == 's')
    {
        // affichage sur la sortie standard
        printf("%s %s %s", prefixe, message, suffixe);
    }
    else if (type_sortie == 'f')
    {
        // écriture dans le fichier output.txt
        char message_complet[1024];
        snprintf(message_complet, sizeof(message_complet), "%s %s %s", prefixe, message, suffixe);
        ecrire_fichier(message_complet);
    }
    return 1;
}
