#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ddaenggu(char soohyun[][20],int i){
    int value[26];
    int arr[20];
    int firstkey=0;
    for (int j = 0; j < 26; j++) {
        value[j]=3;
    }
    
    //모음
    value['a'-'a'] = 1;
    value['i'-'a'] = 1;
    value['u'-'a'] = 1;

    value['e'-'a'] = 1;
    value['o'-'a'] = 1;

    for (int j = 0; j < i; j++) {
        for (int k = 0; k < 20; k++) {
            arr[k]=soohyun[j][k]-'a';
            if(value[arr[k]]==1){
                if(value[arr[k]]==value[arr[k+1]]&&value[arr[k]]==value[arr[k+2]]){
                    if(arr[k]!=arr[k+1]){
                        firstkey=0;
                    }
                }
            }else{
                firstkey=1;
               
            }
        }
    }

    if(firstkey==1){
    printf("안돼");
    }else{
    printf("돼돼");
    }
}


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
  
    ddaenggu(soohyun, i);
}