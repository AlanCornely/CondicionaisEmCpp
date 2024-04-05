#include <iostream>

int main () {

    int num;

    printf("digite um numero:");
    scanf("%d", &num);

    if(num >= 0){
        printf("o número digitado é positivo ou 0.\n");

    } else {
        printf("o Número digitado é negativo\n");
    }

return 0;
}