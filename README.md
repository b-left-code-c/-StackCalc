# StackCalc

Une calculatrice en console en langage C utilisant la **notation polonaise inverse (NPI)**.

## Comment ça fonctionne ?

Les opérandes sont entrés **avant** l'opérateur.

```
4 5 + → 9
10 2 / → 5
5 ! → 120
```

Si une opération est omis, la calculatrice utilise l'automatisation le **résultat de l'opération précédente**.

```
4 5 + → 9
3 * → 27 (résultat précédent × 3)
```

## Opérations disponibles

| Opérateur | Opération |
|-----------|------------------------------|
| `+`       | Ajout |
| `-`       | Soustraction |
| `*`       | Multiplication |
| `/`       | Division |
| `%`       | Reste de la division entière |
| `^`       | Puissance |
| `!`       | Factorielle |
| `g`       | PGCD |
| `p`       | PPCD |
| `q`       | Quitter |

## Compilation

```bash
gcc -Wall -Wextra -pedantic -std=c11 main.c -lm -o StackCalc
```

## Utilisation

```bash
. . . ./StackCalc
```

## À propos

Projet réaliste dans le cadre de l'apprentissage du langage C, suivant le cours [Le langage C](https://zestedesavoir.com/tutoriels/755/le-langage-c-1/) sur Zeste de Savoir.
