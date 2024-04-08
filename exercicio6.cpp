#include <iostream>

int main () {

    int num;

    printf("digite um numero de 1 a 7, sendo cada um seu respectivo dia da semana:\n");
    scanf("%d", &num);
    
    if(num == 1){
    printf("é domingo\n");
    } else if(num == 2){
    printf(" é segunda\n");
    } else if(num == 3){
    printf("é terça\n");
    } else if(num == 4){
    printf("é quarta\n");
    } else if(num == 5){
    printf("é quinta\n");
    } else if(num == 6){
    printf("é sexta\n");
    } else if (num == 7) {
    printf("é sabado\n");
    } else {
    printf("esse número não corresponde a um dia da semana.\n");
    }

return 0;
}