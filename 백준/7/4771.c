// C언어에 안맞는 문제 -> 파이썬으로 풀자

#include <stdio.h>
#include <math.h>

#define EPSILON 1e-6

int main(){
    double x1, y1, x2, y2, x3, y3;
    double a, b, c;

    while(1){
    scanf("%lf", &x1);
    if(x1==-1){
        return 0;
    }
    scanf("%lf %lf %lf %lf %lf", &y1, &x2, &y2, &x3, &y3);
    // printf("%.3f %.3f %.3f %.3f %.3f %.3f", x1, y1, x2, y2, x3, y3);

    a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));

    printf("%.3f %.3f %.3f", a,b,c);

    if(a==b && b==c && c==a){
        printf("Equilateral ");
    }else if(a!=b&&b!=c&&c!=a){
        printf("Scalene ");
    }else{
      printf("Isosceles ");  
    } 
    }
}