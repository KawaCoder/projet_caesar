/**
 * @brief Écrit un texte donné dans un fichier nommé "output.txt".
 *
 * Cette fonction ouvre un fichier nommé "output.txt" en mode écriture. Si le fichier
 * ne peut pas être ouvert, elle affiche un message d'erreur et termine le programme.
 * Le texte fourni en paramètre est ensuite écrit dans le fichier, qui est fermé
 * après l'écriture.
 *
 * @param texte Le texte à écrire dans le fichier.
 *
 * @note Si le fichier "output.txt" existe déjà, son contenu sera écrasé.
 * @note En cas d'erreur lors de l'ouverture du fichier, la fonction appelle exit(EXIT_FAILURE).
 */
int ecrire_fichier(const char *texte);
