# include <stdio.h>

    // fonction qui prend un tableau en reference et le remplis

    void remplir_Vecteur(int u[3]){

        for (int i = 0; i < 3; i++){

            printf("entrer l'element %d : ",i+1);
            scanf("%d",&u[i]);
        }
    }
    // fonction qui prend un tableau en reference et l'affiche

    void afficher_Vecteur(int vecteur[3]){

        for (int i = 0; i < 3; i++){

            printf("%d\t",vecteur[i]);
        }

    }

    // fonction qui prend deux tableaux en reference, caulcule et affiche leur produit vectoriel

    void produit_vectoriel(int u[3], int v[3]){
        
        int w[3];

        w[0] = u[1]*v[2] - u[2]*v[1];
        printf("(%d,\t",w[0]);

        w[1] = u[2]*v[0] - u[0]*v[2];
        printf("%d,\t",w[1]);

        w[2] = u[0]*v[1] - u[1]*v[0];
        printf("%d)",w[2]);

    }

int main (){

    int u[3];
    int v[3];

    //remplissage du premier vecteur 

    printf("\tentrer les elements du premier vecteur\n");
    remplir_Vecteur(u);
    afficher_Vecteur(u);

    //remplissage du second vecteur 

    printf("\n\tentrer les elements du second vecteur\n");
    remplir_Vecteur(v);
    afficher_Vecteur(v);

    //calcul du produit vectoriel 
    printf("\nProduit vectoriel Vecteur1 et Vecteur2 : ");
    produit_vectoriel(u,v);

    return 0;
}