#include <iostream>

int main () {

    int idade;

    printf("digite sua idade:");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("você é maior de idade\n");
    } else {
        printf("você é menor de idade\n");
    }

return 0;
}
