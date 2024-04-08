#include <iostream>

int main () {

    int num;

    printf("digite um numero:");
    scanf("%d", &num);

    if(num > 10){
        printf("o número digitado é maior que 10.\n");

    } else if (num < 10) {
        printf("o número é menor que 10.\n");
    } else {
        printf("o número é igual 10");
    }

return 0;
}