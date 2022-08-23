// 1063 두 정수를 입력받아 큰 수 출력하기
/*
#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", (a>b)?a:b); //(조건문)?(참):(거짓)
    return 0;
}
*/

// 1064 정수 3개를 입력받아 가장 작은 수 출력하기

#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", (a<b?a:b)<c?(a<b?a:b):c); // 작은 값 출력
  //printf("%d", (a>b?a:b)>c?(a<b?a:b):c); // 큰 값 출력
    return 0;
}
