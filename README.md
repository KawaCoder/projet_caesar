# Mini-projet de C
## Chiffrement caesar

Table des matières:
- [Présentation du projet](https://github.com/KawaCoder/projet_caesar/tree/main?tab=readme-ov-file#Pr%C3%A9sentation-du-projet)
- [Objectifs](https://github.com/KawaCoder/projet_caesar/tree/main?tab=readme-ov-file#Objectifs)
- [Utilisation du programme](https://github.com/KawaCoder/projet_caesar/tree/main?tab=readme-ov-file#Utilisation-du-programme)
- [Détail de la structure du programme](https://github.com/KawaCoder/projet_caesar/tree/main?tab=readme-ov-file#d%C3%A9tail-de-la-structure-du-programme)
- [Exemples de sorties](https://github.com/KawaCoder/projet_caesar/tree/main?tab=readme-ov-file#Exemples-de-sorties)


## Présentation du projet

Ce mini-projet de C consiste à réaliser un programme qui implémente le chiffrement césar ou cæsar, est un chiffrement par rotation de caractères de l'alphabet latin. Le principe est de décaler les lettres du mot à chiffrer dans un sens (chiffrer) ou dans l'autre (déchiffrer). La clef du message correspond au nombre de décalage à effectuer.

En C, nous avons implémenté cette méthode gràce au code ASCII, qui nous permet d'interpréter les lettres comme des nombres, et ainsi réaliser des opérations dessus.

## Objectifs

Voici les consignes de ce projet:

```
- Vérification du format au départ (plusieurs possibilités)

- Aucun affichage dans les fonctions (sauf en cours de dev pour debug)

- Valeur de retour des fonctions pour test de l'état après traitement

- Chaque rectangle est au minimum une fonction

- Découpage du code en plusieurs fichiers (Entête .h et source .c)

```

## Utilisation du programme

Pour lancer le programme, il faut compiler et exécuter le programme grâce à ligne de commande:

`$ make`
`$ ./caesar`

## Détail de la structure du programme

- `src/main.c` : Fonction principale qui appelle les fonctions ci-dessus pour réaliser le programme
  - Affiche un menu et récupère le choix de l'utilisateur
  - Selon le choix, appelle `caesar` pour chiffrer ou déchiffrer le message

- `src/caesar.c` : Fonction qui réalise le chiffrement césar
  - Prend en paramètre une chaîne de caractère, un entier pour la clé et un booléen pour choisir le sens du chiffrement (true pour chiffrer, false pour déchiffrer) et modifie la chaîne directement.

- `src/convertir_accents.c` : Fonction qui convertit les caractères accentués en non accentués
  - Prend en paramètre une chaîne de caractère et la modifie directement.

- `src/ecrire_fichier.c` : Fonction qui écrit un texte dans un fichier
  - Prend en paramètre une chaîne de caractère et écrit dans un fichier nommé "output.txt".

- `src/afficher.c` : Fonction qui affiche des messages avec des préfixes et suffixes
  - Prend en paramètre une chaîne de caractère, un entier pour le type de message et un char pour le type de sortie (s pour la sortie standard, f pour un fichier) et affiche le message avec le préfixe et le suffixe adaptés.

- `src/obtenir_clef.c` : Fonction qui obtient une clé entière saisie par l'utilisateur
  - Prend en paramètre un pointeur vers un entier et obtient une valeur entière saisie par l'utilisateur, puis la stocke dans l'entier pointé.

- `src/menu.c` : Fonction qui affiche un menu et récupère le choix de l'utilisateur
  - Prend en paramètre un pointeur vers un entier et affiche un menu, puis stocke le choix de l'utilisateur dans l'entier pointé.

- `src/verifier_alphanum.c` : Fonction qui vérifie si une chaîne contient uniquement des caractères alphanumériques
  - Prend en paramètre une chaîne de caractère et renvoie un booléen indiquant si la chaîne contient uniquement des caractères alphanumériques et des espaces.




## Exemples de sortie
Chiffrer
```
[16:34:31] [?] Entrez votre message  >cacatoès
[16:34:48] [?] Entrez la valeur de la clef  >10
[16:34:50] [*] mkmkdyoc 
```

Déchiffrer
```
[16:36:30] [?] Entrez votre message  >mkmkdyoc
[16:36:41] [?] Entrez la valeur de la clef  >10
[16:36:42] [*] cacatoes 
```

Menu
```
 /__________________________________\ 
 |               MENU               | 
 |__________________________________| 
 |      0. Quitter                  | 
 |                                  | 
 |      1. Chiffrer caesar          | 
 |      2. Déchiffrer caesar        | 
 |                                  | 
 \_________________________________/ 
[16:36:42] [?] Entrez votre choix  >
```

Contenu de 'output.txt'
```
 ________________________ 
[15:55:19] [*] Message d'origine: 
 caca 
[15:55:19] [*] Message chiffré: 
 kiki 
[15:55:19] [*] Clef utilisée: 
 8 
 ________________________ 
[16:34:50] [*] Message d'origine: 
 cacatoes 
[16:34:50] [*] Message chiffré: 
 mkmkdyoc 
[16:34:50] [*] Clef utilisée: 
 10 
```
