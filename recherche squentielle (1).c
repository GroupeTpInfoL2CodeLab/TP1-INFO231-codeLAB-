#include<stdio.h>
#include<stdlib.h>
int main() {
    int T[1000];
    int n,i,val ;
    printf("entrer le nombre d'elements");
    scanf("%d", &n);
    printf("entrer les elements du tableau");
    for(i=1; i<=n ; i++) {
        scanf ("%d", &T[i]);
    }
    printf("entrer l'element a rechercher");
    scanf("%d", &val);
    i=1;
    while(val!=T[i]&&i<n) {
        i= i+1;
    }
    if(T[i]==val) {
        printf("l'element recherche trouve");
    }
    else {
        printf("l'element non trouvé");
    }
    return 0;
}