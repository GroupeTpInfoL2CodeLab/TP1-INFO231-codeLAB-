#include <stdio.h>

int main() {
    int n, i ;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];
    
    // Saisie des valeurs
    for (i = 0; i < n; i++) {
        printf("Entrez la valeur de la case %d : ", i);
        scanf("%d", &tab[i]);
    }
    float mediane;
    if (n % 2 == 0) {
        mediane = (tab[n/2 - 1] + tab[n/2]) / 2.0;
    } else {
        mediane = tab[n/2];
    }

    printf("La médiane est : %.2f\n", mediane);

    return 0;
}

