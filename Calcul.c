#include <stdio.h>
#include <math.h>

int main(){
    int choix;
    double a, b, resultat;
    int n, i;
    double nombre, somme, moyenne;

    do {
        printf("\n*****Menu Calculatrice*****\n");
        printf("1- Addition \n");
        printf("2- Soustraction \n");
        printf("3- Multiplication \n");
        printf("4- Division \n");
        printf("5- Moyenne \n");
        printf("6- Valeur absolue \n");
        printf("7- Exponentiation \n");
        printf("8- Racine caree \n");
        printf("9- Quitter \n");
        printf("Choisir option : ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            somme = 0;
            printf("Quel est le nombre de valeurs que vous souhaitez additionner ? ");
            scanf("%d", &n);
            for(i=0; i<n; i++){
                printf("Entrez le nombre %d : ", i + 1);
                scanf("%lf", &nombre);
                somme = somme + nombre;
            }
            printf("Resultat de l'addition est : %.2lf\n", somme);
            break;

        case 2:
            printf("Entrez le premier nombre : ");
            scanf("%lf", &a);
            printf("Entrez le deuxieme nombre : ");
            scanf("%lf", &b);
            resultat = a - b;
            printf("Resultat de la soustraction est : %.2lf\n", resultat);
            break;

        case 3:
            resultat = 1;
            // just a comment
            printf("\nQuel est le nombre de valeur que vous souhaitez multiplier ?");
            scanf("%d", &n);
            for (i=0; i<n; i++){
                printf("Entrez le nombre %d : ", i+1);
                scanf("%lf", &nombre);
                resultat = resultat * nombre;
            }
            printf("Resultat de la multiplication :%.2lf\n", resultat);
            break;
        
        case 4:
            printf("Entrez le premier nombre: ");
            scanf("%lf", &a);
            printf("Entrez le deuxieme nombre: ");
            scanf("%lf", &b);
            if (b == 0) {
                printf("Erreur: Division par zéro!\n");
            } else {
                resultat = a / b;
                printf("Résultat de la division: %.2lf\n", resultat);
            }
            break;

        case 5:
            somme = 0;
            printf("Quel est le nombre de valeurs que vous souhaitez entrer pour la moyenne ? ");
            scanf("%d", &n);
            for (i = 0; i < n; i++) {
                printf("Entrez le nombre %d: ", i + 1);
                scanf("%lf", &nombre);
                somme += nombre;
            }
            moyenne = somme / n;
            printf("Moyenne: %.2lf\n", moyenne);
            break;

        case 6: 
            printf("Entrez le nombre: ");
            scanf("%lf", &nombre);
            resultat = fabs(nombre);
            printf("Valeur absolue: %.2lf\n", resultat);
            break;
        
        case 7: 
            printf("Entrez la base: ");
            scanf("%lf", &a);
            printf("Entrez l'exposant: ");
            scanf("%lf", &b);
            resultat = pow(a, b);
            printf("Résultat de l'exponentiation: %.2lf\n", resultat);
            break;
        
        case 8: 
            printf("Entrez un nombre positif: ");
            scanf("%lf", &nombre);
            if (nombre < 0) {
                printf("Erreur: La racine carrée d'un nombre négatif n'est pas définie!\n");
            } else {
                resultat = sqrt(nombre);
                printf("Racine carrée: %.2lf\n", resultat);
            }
            break;

            case 9:
            printf("Au revoir!\n");
            break;
        default:
            printf("Option invalide. Veuillez choisir une option valide.\n");

        }
    }while (choix != 9);
    
    return 0;
}