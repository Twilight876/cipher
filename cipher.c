#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int *shift = malloc(sizeof(int));
    char *ques = malloc(12 * sizeof(char));
    
    printf("Encrypt or Decrypt: ");
    scanf("%s", ques);

    while (getchar() != '\n');
    // i know i know i can make shift global (declare) thanks critic i am memory leaker i dont have time 

    if (strcmp(ques, "Encrypt") == 0 || strcmp(ques, "encrypt") == 0) {
        printf("Shift: ");
        scanf("%d", shift);

        while (getchar() != '\n');

        char *Encryption = malloc(1000000 * sizeof(char));
        printf("Message: ");
        fgets(Encryption, 1000000, stdin);

        for (int i = 0, n = strlen(Encryption); i < n; i++) {
            if (Encryption[i] >= 'A' && Encryption[i] <= 'Z') {
                Encryption[i] = ((Encryption[i] - 'A' + *shift) % 26) + 'A';
            } else if (Encryption[i] >= 'a' && Encryption[i] <= 'z') {
                Encryption[i] = ((Encryption[i] - 'a' + *shift) % 26) + 'a';
            }
            printf("%c", Encryption[i]);
        }
        printf("\n");

    } else if (strcmp(ques, "Decrypt") == 0 || strcmp(ques, "decrypt") == 0) {
        printf("Shift: ");
        scanf("%d", shift);

        while (getchar() != '\n');

        char *Decryption = malloc(1000000 * sizeof(char));
        printf("Message: ");
        fgets(Decryption, 1000000, stdin);

        for (int i = 0, n = strlen(Decryption); i < n; i++) {
            if (Decryption[i] >= 'A' && Decryption[i] <= 'Z') {
                Decryption[i] = ((Decryption[i] - 'A' - *shift + 26) % 26) + 'A';
            } else if (Decryption[i] >= 'a' && Decryption[i] <= 'z') {
                Decryption[i] = ((Decryption[i] - 'a' - *shift + 26) % 26) + 'a';
            }
            printf("%c", Decryption[i]);
        }
        printf("\n");

    } else {
        printf("Sorry, wrong input\n");
        return 1;
    }

    free(shift);
    free(ques);
    return 0;
}
//Agggh finally i solved the  bug. it was bec shift is read as string silly mistake Ali do better
//project by Ali
// what's your review 
