#include <stdio.h>
#include <math.h>

double addition(int, int);

double soustraction(int, int);

double multiplication(int , int );

double division(int, int);

double modulo(int, int);

double puissance(int , int);

double factoriel(int);

double pgcd(int, int);

double ppcd(int, int);


int main(void) {
    printf("\n\nBienvenue sur \"StackCalc\",\n" 
            "une calculatrice en console qui vous permet de faire différentes opérations, tel que :\n\n"
            "1 - l'addition de deux nombres, opérateur symbolisé par : +\n"
            "2 - la soustraction de deux nombres, opérateur symbolisé par : -\n"
            "3 - la multiplication de deux nombres, opérateur symbolisé par : *\n"
            "4 - la division de deux nombres, opérateur symbolisé par : /\n"
            "5 - le reste de la division entière de deux nombres, opérateur symbolisé par : %%\n"
            "6 - la puissance d'un nombre, opérateur symbolisé par : ^\n"
            "7 - le factorielle d'un nombre, opérateur symbolisé par : !\n"
            "8 - le PGCD de deux nombres, opérateur symbolisé par : g\n"
            "9 - le PPCD de deux nombres, opérateur symbolisé par : p\n\n"
            "Enfin si vous voulez sortir de la calculatrice il vous suffit juste taper la lettre « q » avec ou sans opérande.\n\n"
            "Comment sa fonctionne ?\n\n"
            "Il suffit d'entrer les opérandes du calcul avant l’opérateur.\nPar exemple comme ceci pour la somme de quatre et cinq: 4 5 +.\n"
            "Et c'est ainsi pour les autres opérateurs, sauf pour le factoriel qui sera lui sous forme normal, ex : 5!. \n\n");


            double number = 0;
            char operator;
            do {
            int a, b;
            printf("Entrez votre opération en respectant la logique : \n");
            int conversions = scanf("%d %d %c", &a, &b, &operator);
            if (conversions == 0) {
                scanf("%c", &operator);
                a = number;
                b = number;
            } else if (conversions == 1) {
                scanf("%c", &operator);
                b = number;
            }

            switch (operator)
            {
            case '+':
                number = addition(a, b);
                printf("%lf\n", number);
                break;
            
            case '-': 
                number =  soustraction(a, b);
                printf("%lf\n", number);
                break;
            
            case '*': 
            number = multiplication(a, b);
                printf("%lf\n", number);
                break;

            case '/': 
                number = division(a, b);
                printf("%lf\n", number);
                break;

            case '%': 
                number = modulo(a, b);
                printf("%lf\n", number);
                break;

            case '^': 
                number = puissance(a, b);
                printf("%lf\n", number);
                break;

            case '!': 
                number = factoriel(a);
                printf("%lf\n", number);
                break;

            case 'g': 
                number = pgcd(a, b);
                printf("%lf\n", number);
                break;

            case 'p': 
                number = ppcd(a, b);
                printf("%lf\n", number);
                break;
            }
            } while(operator != 'q');

            
    return 0;
}

double addition(int a, int b) {
    double result = a + b;
    return result;
}

double soustraction(int a, int b) {
    double result = a - b;
    return result;
}

double multiplication(int a, int b) {
    double result = a * b;
    return result;
}

double division(int a, int b) {
    double result = a / b;
    return result;
}

double modulo(int a, int b) {
    double result = a % b;
    return result;
}

double puissance(int  a, int b) {
    return pow(a, b);
}

double factoriel(int a) {
    double result = a;
    if (result == 0) {
        return result + 1;
    } else if (result == 1) {
        return result;
    }
    for(int i  = a - 1; i >= 1; i--) {
        result = result * i;
    }
    return result;
}

double pgcd(int a, int b) {
    double result;
    if (a != 0 && b == 0) {
        return (double)a;
    } else if (a == 0 && b != 0) {
        return (double)b;
    } else if (a == 0 && b == 0) {
        return 0;
    }
    int min = (a < b) ? a : b;
    for(int i = min; i >= 1; i--) {
        if((a % i == 0) && (b % i == 0)) {
            result = i;
            return result;
        }
    }
    return 1;
}

double ppcd(int a, int b) {
    double result;
    if(a == 0 || b == 0) {
        return 0;
    }
    int ppcm = (a * b) / pgcd(a, b);
    result = ppcm;
    return result;
}



