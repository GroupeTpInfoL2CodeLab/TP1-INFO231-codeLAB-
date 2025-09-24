#include<stdio.h>
#include<stdlib.h>
#define Max 1000

int main() {
    int n, i;
    int croissant = 1, decroissant = 1;

    printf("Veuillez entrez la taille de votre tableau : ");
    scanf("%d", &n);

    int tab[n];
    for (i = 0; i < n; i++) {
        printf("Entrez la valeur de la case Nº%d :\n", i);
        scanf("%d", &tab[i]);
    }

    for (i = 0; i < n - 1; i++) {
        if (tab[i] > tab[i + 1]) { // On vérifie que le tableau est trié dans l'ordre croissant 
            croissant = 0; 
        }
        if (tab[i] < tab[i + 1]) {
            decroissant = 0; // On vérifie que le tableau est trié dans l'ordre décroissant 
        }
    }

    if (croissant == 1) {
        printf(" Le tableau est trié en ordre croissant.\n");
    } else if (decroissant == 1) {
        printf(" Le tableau est trié en ordre décroissant.\n");
    } else {
        printf(" Le tableau n'est pas trié.\n");
    }
    for (i = 0; i <= n - 1; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}