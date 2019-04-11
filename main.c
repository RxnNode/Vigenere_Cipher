#include <stdio.h>

int main() {
    printf("=================================\n");
    printf("Vigenere_Cipher\n");
    printf("1. Encryption 2. Decryption\n");
    printf("=================================\n");

    int a = 0;
    char c;

    while((c = getchar()) != EOF){
        char messbuff[256];
        char keybuff[256];
        char cybuff[256];
        if ( c == '1'){
            fflush(stdin);
            printf("Please enter message:");
            fgets(messbuff, sizeof(messbuff), stdin);
            printf("your: %s\n", messbuff);
            //fflush(stdin);
            printf("Please enter key;");
            //fgets(keybuff, sizeof(keybuff), stdin);
            fflush(stdin);
            fscanf(stdin, " %s", keybuff);
            printf("your: %s\n", keybuff);




        } else if ( c == '2'){

        } else{
            printf("1 or 2\n");
        }
    }

    return 0;
}