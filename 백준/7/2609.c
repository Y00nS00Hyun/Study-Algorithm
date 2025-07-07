#include <stdio.h>

int main()
{
    int S, H, mod, quotient, small, big;
    scanf("%d %d", &S, &H);
    int SS=S, HH=H;

    // 최대공약수
    while(H!=0){
        mod=S%H;
        quotient=S/H;
        S=H;
        H=mod; 
        small=S;     
    }

    printf("최대공약수: %d\n", small);

    // 최소공배수
    int i=1;
    while(1){
        if((SS*i)%HH==0){
            big=SS*i;
            break;
        }
        i++;
    }
    printf("최소공배수: %d\n", big);
}