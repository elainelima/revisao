#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void divisivel(int num){
    if(num%5==0){
        printf("O número é diviśivel por 5");
    }
    else    
        printf("Não é divisível por 5");
    if(num%11==0){
        printf("O número é diviśivel por 11");
    }
    else    
        printf("Não é divisível por 11");
    
}
void somatorio(int num){
    int soma=0;
    for(int i=0; i<num;i++){
        soma=soma++;
    }
}

int maior_numero(int vetor[5]){
    int maior;
    for(int i=0; i<5;i++){
        if(i==0){
            maior=vetor[i];
        }
        for(int j=0;j<5;j++){
            if(vetor[j]>maior){
                maior=vetor[j];
            }

        }
    }
    return maior;
}

int naturais(int num_1, int num_2){
    if(num_1 != num_2){
        if(num_1>num_2){
            num_2++;
            printf("%d ",num_2);
        }
        if(num_2>num_1){
            num_1++;
            printf("%d ",num_1);
        }
        naturais(num_1,num_2);

    }
}

int ponteiro(int *ponteiro_1, int *ponteiro_2){
    int temporario= *ponteiro_1;
    *ponteiro_1 = *ponteiro_2;
    *ponteiro_2 = temporario;
}

int main() {
    int vetor[5] = {-59, 60, 100, -1, 0};
    int num_1 =-70, num_2 = 80;
    int valor_1 = 10, valor_2 = 40;
    if(num_1>=0 && num_2>=0){
        naturais(num_1,num_2);
    }
    else
        printf("digite um número maior que zero");
    maior_numero(vetor);
    ponteiro(&valor_1, &valor_2);

    return 0;
}