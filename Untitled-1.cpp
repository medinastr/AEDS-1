/*
#include <stdio.h>

int main(int argc, char** argv) {

    int nota[] = {10,6,7,8,3,4,2,9,4,3};
    int i;
    float contanota = 0, media;

    for(i = 0; i < 10; i++) {
        printf("%d ", nota[i]);
        contanota+= nota[i];
    }
    
    media = contanota / i;
    printf("\nMedia da sala: %.2f\n", media);

    for(i = 0; i < 10; i++) {
        if(nota[i] > media){
            printf("%d ", nota[i]);
        }
    }
    
    return 0;
}
*/
#include <stdio.h>
#define tam 5

int main(int argc, char** argv) {
    int vetor[tam];
    int i;

    for(i = 0; i < tam; i++) {
        printf("Digite o valor: ");
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    return 0;
}