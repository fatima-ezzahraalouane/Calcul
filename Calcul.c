#include <stdio.h>
#include <math.h>

int main(){
    int choix;
    double a, b, resultat;
    int n, i;
    double nombre, somme, moyenne;

    do {
        printf("\n****** Menu Calculatrice ******\n");
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
            printf("\nQuel est le nombre de valeurs que vous souhaitez additionner ? ");
            scanf("%d", &n);
            for(i=0; i<n; i++){
                printf("Entrez le nombre %d : ", i+1);
                scanf("%lf", &nombre);
                somme = somme + nombre;
            }
            printf("Resultat de l'addition est : %.2lf\n", somme);
            break;

        case 2:
            printf("\nEntrez le premier nombre : ");
            scanf("%lf", &a);
            printf("Entrez le deuxieme nombre : ");
            scanf("%lf", &b);
            resultat = a - b;
            printf("Resultat de la soustraction est : %.2lf\n", resultat);
            break;

        case 3:
            resultat = 1;
            //test github
            printf("\nQuel est le nombre de valeurs que vous souhaitez multiplier ? ");
            scanf("%d", &n);
            for (i=0; i<n; i++){
                printf("Entrez le nombre %d : ", i+1);
                scanf("%lf", &nombre);
                resultat = resultat * nombre;
            }
            printf("Resultat de la multiplication est : %.2lf\n", resultat);
            break;
        
        case 4:
            printf("\nEntrez le premier nombre : ");
            scanf("%lf", &a);
            printf("Entrez le deuxieme nombre : ");
            scanf("%lf", &b);
            if (b == 0) {
                printf("Impossible de diviser par zéro !\n");
            } else {
                resultat = a / b;
                printf("Resultat de la division est : %.2lf\n", resultat);
            }
            break;

        case 5:
            somme = 0;
            printf("\nQuel est le nombre de valeurs que vous souhaitez entrer pour la moyenne ? ");
            scanf("%d", &n);
            for (i = 0; i < n; i++) {
                printf("Entrez le nombre %d : ", i + 1);
                scanf("%lf", &nombre);
                somme = somme + nombre;
            }
            moyenne = somme / n;
            printf("Resultat de la moyenne est : %.2lf\n", moyenne);
            break;

        case 6: 
            printf("Entrez le nombre : ");
            scanf("%lf", &nombre);
            resultat = fabs(nombre);
            printf("Resultat de la valeur absolue est : %.2lf\n", resultat);
            break;
        
        case 7: 
            //resultat = 1.0;
            printf("Entrez la base : ");
            scanf("%lf", &a);
            printf("Entrez l'exposant : ");
            scanf("%lf", &b);
            resultat = pow(a, b);
            printf("Résultat de l'exponentiation %.2lf ^ %.2lf est : %.2lf\n", a, b, resultat);
            break;
        
        case 8: 
            
            printf("Entrez un nombre positif : ");
            scanf("%lf", &nombre);
            if (nombre < 0) {
                printf("La racine carree d'un nombre negatif n'est pas definie !\n");
            } else {
                resultat = sqrt(nombre);
                printf("Resultat de racine carree est : %.2lf\n", resultat);
            }
            break;

            case 9:
            printf("Au revoir !\n");
            break;
        default:
            printf("Option invalide. Veuillez choisir une option valide\n");

        }
    }while (choix != 9);
    
    return 0;
}
