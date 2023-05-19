//selectionSort in-place

#include <stdio.h>
#include <stdlib.h>
//Função troca utilizada recursivamente na função selectionSort
void troca ( int *v, int i, int j){
    int aux = v[i];
        v[i]= v[j];
        v[j]=aux;
}

void selectionSort( int *v, int tam ){
    for (int i = 0; i < tam-1 ; i++){
        int iMenor=i;
        for(int j=i; j < tam ; j++){
            if( v[j] < v[iMenor]){
                iMenor = j;
                }
            }
           troca ( v, iMenor,i) ;
       }
   }
   
 void ImprimeVetor(int V[], int n) {
    printf("[%d", V[0]);
    int i;
        for (i = 1; i < n; i++) {
            printf(", %d",V[i]);
        }
    printf("]\n");
}

int main(){

    int v[] = {5,31,4,8,1,0,7,11,23,3};
    int n = 10;
        
        selectionSort ( v, n);
        ImprimeVetor ( v , n);
        
         return 0;

}


