#include <stdio.h>
#include <stdlib.h>

// Fonction utilitaire pour saisir un entier positif
int saisir_entier(const char *message) {
    int x;
    do {
        printf("%s", message);
        if (scanf("%d", &x) != 1 || x <= 0) {
            printf("Erreur: veuillez entrer un entier positif.\n");
            while (getchar() != '\n'); // vider le buffer
            x = -1;
        }
    } while (x <= 0);
    return x;
}

int main(void) {
    int n, m;

    // Dimensions
    n = saisir_entier("Entrez le nombre de colonnes du vecteur (n) : ");
    m = saisir_entier("Entrez le nombre de colonnes de la matrice (m) : ");

    // Allocation dynamique
    double *vecteur = malloc(n * sizeof(double));
    double **matrice = malloc(n * sizeof(double *));
    double *resultat = malloc(m * sizeof(double));

    if (!vecteur || !matrice || !resultat) {
        fprintf(stderr, "Erreur d'allocation mémoire.\n");
        return EXIT_FAILURE;
    }
    for (int i = 0; i < n; i++) {
        matrice[i] = malloc(m * sizeof(double));
        if (!matrice[i]) {
            fprintf(stderr, "Erreur d'allocation mémoire.\n");
            return EXIT_FAILURE;
        }
    }

    // Saisie du vecteur
    printf("\n=== Saisie du vecteur (%d elements) ===\n", n);
    for (int i = 0; i < n; i++) {
        printf("v[%d] = ", i);
        scanf("%lf", &vecteur[i]);
    }

    // Saisie de la matrice
    printf("\n=== Saisie de la matrice (%d x %d) ===\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%lf", &matrice[i][j]);
        }
    }

    // Calcul du produit
    for (int j = 0; j < m; j++) {
        resultat[j] = 0.0;
        for (int i = 0; i < n; i++) {
            resultat[j] += vecteur[i] * matrice[i][j];
        }
    }

    // Affichage du résultat
    printf("\n=== Résultat du produit V x M ===\n");
    printf("[ ");
    for (int j = 0; j < m; j++) {
        printf("%.2f ", resultat[j]);
    }
    printf("]\n");

    // Libération mémoire
    free(vecteur);
    for (int i = 0; i < n; i++) free(matrice[i]);
    free(matrice);
    free(resultat);

    return EXIT_SUCCESS;
}