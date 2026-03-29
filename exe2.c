#include <stdio.h>

int main(){

int vet[5];

for(int i = 0; i < 5; i++){
    scanf("%d", &vet[i]);
}

for(int i = 0; i < 5; i++){
    printf("%d ", vet[i]);
}
printf("\nVetor invertido\n")
for(int i = 5; i >= 0; i--){
    printf("%d ", vet[i]);
}
return 0;
}
