#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3];
    int i, j;

    // Saisie des éléments de la matrice A
    printf("Entrez les éléments de la matrice A (3x3) :\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Saisie des éléments de la matrice B
    printf("\nEntrez les éléments de la matrice B (3x3) :\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Calcul de la somme des matrices A et B
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Affichage de la matrice résultat C
    printf("\nLa matrice somme C est :\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}