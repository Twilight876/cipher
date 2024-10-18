#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void){     
       int *shift = malloc(6 * sizeof(int));
    char *ques = malloc(12 * sizeof(char));
    printf("Encrypt or Decrypt : ");
    scanf("%s",ques);
    if(strcmp(ques,"Encrypt") == 0 || strcmp(ques,"encrypt") == 0 ) {
        // i know i know i can make shift global (declare) thanks critic i am memory leaker i dont have time 

        printf("Shift : ");
       scanf("%i",shift);
       char * Encryption = malloc(1000000 * sizeof(char));
            printf("message : ");
          fgets(Encryptipn,10000000,stdin);
       for(int i = 0,n = strlen(Encryption); i <= n ;i++){
        
       Encryption[i] =  *shift;
       printf("%c",Encryption[i]);

       }
    }
    else if (strcmp(ques,"Decrypt") == 0 || strcmp(ques,"decrypt") == 0 ) {
        printf("Shift : ");
       scanf("%s",shift);
       char * Decryption = malloc(1000000 * sizeof(char));
        printf("message : ");
       fgets(Encryptipn,10000000,stdin);
              for(int i = 0,n = strlen(Decryption);i <= n ;i++){
                Decryption[i] -= *shift;
              printf("%c",Decryption[i]);
        
       }
    }
    else{
        printf("Sorry wrong input");
        return 1;
    }
     free(shift);
    free(ques);
    return 0;

}
//Agggh finally i solved it a bug was bec shift is read as string silly mistake Ali
//project by Ali