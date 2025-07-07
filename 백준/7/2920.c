#include <stdio.h>
#include <string.h>

int main()
{
    int arr[8];
    int ascending[8]={1,2,3,4,5,6,7,8};
    int descending[8]={8,7,6,5,4,3,2,1};

    int countA=0, countD=0;

    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        if(arr[i]==ascending[i]){
        countA++;
        }else if(arr[i]==descending[i]){
        countD++;
        }
    }

    if(countA==8){
        printf("ascending");
    }
    else if (countD==8){
        printf("descending");
    }
    else{
        printf("mixed");
    }
    
}