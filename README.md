# Mini-projet de C
## Chiffrement caesar

Table des matières:
- [Présentation du projet]()
- [Objectifs]()
- [Documentation du programme]()
- [Détail de la structure du programme]()

### Présentation du projet

Ce mini-projet de C consiste à réaliser un programme qui implémente le chiffrement césar ou cæsar, est un chiffrement par rotation de caractères de l'alphabet latin. Le principe est de décaler les lettres du mot à chiffrer dans un sens (chiffrer) ou dans l'autre (déchiffrer). La clef du message correspond au nombre de décalage à effectuer.

En C, nous avons implémenté cette méthode gràce au code ASCII, qui nous permet d'interpréter les lettres comme des nombres, et ainsi réaliser des opérations dessus.

### Objectifs

Voici les consignes de ce projet:

```
- Vérification du format au départ (plusieurs possibilités)

- Aucun affichage dans les fonctions (sauf en cours de dev pour debug)

- Valeur de retour des fonctions pour test de l'état après traitement

- Chaque rectangle est au minimum une fonction

- Découpage du code en plusieurs fichiers (Entête .h et source .c)

```

### Détail de la structure du programme

Le programme contient 8 fonctions:

#### main.c
Cette fonction 