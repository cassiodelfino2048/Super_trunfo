#include <stdio.h>

int main(){
    
    int num;

    printf("Entre com um número: \n");
    scanf("%c", &num);

    num = num+num%3;

    printf("o numero é: %d\n", num);

    return 0;  
    
    
    
    /*
    char letra;
    int a = 3, b = 2, c;
    printf("Entre com uma letra minuscula: \n");
    scanf("%c", &letra);
    letra = letra + ('A' - 'a');
    c =a!=b;

    printf("Caractere: %c\n", letra);
    printf("o valor de a é: %d\n", a);
    printf("o valor de b é: %d\n", b);
    printf("o valor de c é: %d\n", c);
    return 0;
    */
}