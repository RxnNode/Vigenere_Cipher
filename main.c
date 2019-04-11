#include <stdio.h>
int main() {
        char messbuff[] = "THIS IS A TEST";
        char keybuff[] = "KEY";
        char cybuff[256] = "";
        char decbuff[256] = "";
        unsigned int ml =  sizeof(messbuff) /sizeof(messbuff[0]);
        unsigned int kc = 0 ,kl = sizeof(keybuff) / sizeof(keybuff[0]);
        for (int i = 0; i < ml - 1; i++) {
            if ( messbuff[i] != ' ') {
                if (kc < kl -1) {
                    cybuff[i] = ((messbuff[i] + keybuff[kc]) % 26) + 'A';
                } else {
                    kc = 0;
                    cybuff[i] = ((messbuff[i] + keybuff[kc]) % 26) + 'A';
                }
                kc++;
            } else{
                cybuff[i] = ' ';
            }
        }
        kc = 0;
        for (int j = 0; j <  ml - 1; ++j) {
            if ( cybuff[j] != ' ') {
                if (kc < kl -1) {
                    decbuff[j] = ((cybuff[j] - keybuff[kc] + 26)) % 26 + 'A';
                    printf("%c %c %c\n",messbuff[j],keybuff[kc],decbuff[j]);
                } else {
                    kc = 0;
                    decbuff[j] = ((cybuff[j] - keybuff[kc] + 26)) % 26 + 'A';
                    printf("*%c %c %c\n",messbuff[j],keybuff[kc],decbuff[j]);
                }
                kc++;
            } else{
                decbuff[j] = ' ';
            }
        }
        printf("Enc: %s\n",cybuff);
        printf("Dec: %s", decbuff);
    return 0;
}