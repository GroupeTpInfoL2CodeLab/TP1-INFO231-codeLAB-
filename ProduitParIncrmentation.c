#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, i, j, Som;
    
    printf("Entrez la valeur de a: \n");
    scanf("%d", &a);
    while(a <= 0){
        printf("Entrez une autre valeur de a: \n");
        scanf("%d", &a);
    }
    printf("Entrez la valeur de b: \n");
    scanf("%d", &b);
    while(b <= 0){
        printf("Entrez une autre valeur de b: \n");
        scanf("%d", &b);
    }
    
    Som = 0;
    for(i = 1; i <= a; i++){
        for(j = 1; j <= b; j++){
            Som++;
        }
    }
    
    printf("Le produit de %d par %d est : %d \n", a, b, Som);
    
    return 0;
}