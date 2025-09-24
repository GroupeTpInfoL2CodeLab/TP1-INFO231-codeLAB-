#include <stdio.h>

int main() {
    int n;
    printf("Entrez la taille du tableau :");
    scanf("%d", &n);

    int arr[n];
    

    for(int i = 0; i < n; i++) {
        printf("Entrez l'element %d du tableau :",i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n\tLe tableau avant inversion :\n");
    for(int i = 0; i < n; i++) {
        printf("\t%d", arr[i]);
    }

    for(int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("\n\tLe tableau apres inversion :\n");
    for(int i = 0; i < n; i++) {
        printf("\t%d", arr[i]);
    }

    return 0;
}
