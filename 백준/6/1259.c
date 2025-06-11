#include <stdio.h>
#include <string.h>
int main()
{

    int arr[99999];
    int i=0;
    int s=0;
    char c;
    int tf[99999];

    while(1){
     while ((c=getchar())!='\n')
    {
        arr[i]=c;
        i++;
    }
    i--;
    
    if(arr[0]=='0'){
        break;
    }

    for (int j = 0; j < i/2; j++)
    {
        if(arr[j]!=arr[i-j]){
            tf[s]=1;
        }
    }
    i=0;
    s++;
    }

    for (int j = 0; j < s; j++)
    {
        if(tf[j]==1){
            printf("no");
        }else{
            printf("yes");
        }
        printf("\n");

    }
}