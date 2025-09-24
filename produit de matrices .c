#include <stdio.h>

int main() {
    int m, n, p;
    printf("Entrez les dimensions de la matrice A (lignes colonnes): ");
    scanf("%d %d", &m, &n);
    printf("Entrez le nombre de colonnes de la matrice B: ");
    scanf("%d", &p);
    int A[m][n], B[n][p], C[m][p];

    printf("\nEntrez les elements de la matrice A (%dx%d):\n", m, n);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEntrez les elements de la matrice B (%dx%d):\n", n, p);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatrice resultante C (%dx%d):\n", m, p);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}