#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char soohyun[10000][20];
    int SH=0;
    int i=0;

    while(SH==0){
        scanf("%s", soohyun[i]);
        
    if(strcmp(soohyun[i],"end")==0){
         SH=1;
    }else{
        i++;
    }

    }

    printf("입력된 단어들:\n");
    for (int j = 0; j < i; j++) {
        printf("%s\n", soohyun[j]);
    }
  
}