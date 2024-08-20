#include <stdio.h>
#include <string.h>
/*Contexto:
Código que fiz logo no início da faculdade para
testar os meus conhecimentos com programação
e testar se uma palavra é um palíndromo*/
void clasificarPalindromo(char palavra[]){
    int length = strlen(palavra);
    int j = length -1 ;
    int i =0;
    int isPalindrome = 1;
        do{
            if(palavra[i] == palavra[j]){
            j --;
            i++;
            }
            else{
            i = j +1;
            isPalindrome = 0;
            }

        }while(i<j);
        if(isPalindrome ==1){
            printf("SIM\n");
        }
        else{
            printf("NAO\n");
        }

}

int main(){
    char palavra[500];

    while(strcmp(palavra, "FIM")!= 0){
        scanf(" %[^\r\n]", palavra);
        clasificarPalindromo(palavra);
    }

    return 0;

}
