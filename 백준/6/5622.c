#include <stdio.h>
#include <string.h>
int main()
{

    char soohyun;
    int yoon=0;

    while((soohyun=getchar())!='\n'){
        switch (soohyun)
        {
        case 'A':
        case 'B':
        case 'C':{
           yoon=yoon+3;
           break;
        }
            
        case 'D':
        case 'E':
        case 'F':{
           yoon=yoon+4;
           break;
        }   

        case 'G':
        case 'H':
        case 'I':{
           yoon=yoon+5;
           break;
        }

        case 'J':
        case 'K':
        case 'L':{
           yoon=yoon+6;
           break;
        }

        case 'N':
        case 'M':
        case 'O':{
           yoon=yoon+7;
           break;
        }

        case 'P':
        case 'Q':
        case 'R':
        case 'S':{
           yoon=yoon+8;
           break;
        }

        case 'T':
        case 'U':
        case 'V':{
           yoon=yoon+9;
           break;
        }

        case 'W':
        case 'X':
        case 'Y':
        case 'Z':{
           yoon=yoon+10;
           break;
        }

        default:
            break;
        }
    }

    printf("%d",yoon);

}