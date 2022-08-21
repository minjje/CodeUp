// 1047 정수 1개를 입력받아 2배 곱해 출력하기
/*
#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d\n", a<<1); // <<1: 2의 1제곱 곱하기, >>1: 2의 1제곱 나누기
    printf("%d\n", a<<2); // <<2: 2의 2제곱 곱하기, >>2: 2의 2제곱 나누기
    printf("%d\n", a<<3); // <<3: 2의 3제곱 곱하기, >>3: 2의 3제곱 나누기
    return 0;
}
*/

// 1048 한번에 2의 거듭제곱 배로 출력하기
/*
#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a<<b);
    return 0;
}
*/

#include <cmath>
#include <stdio.h>
int main()
{
    double result = pow(2, 3);
    printf("%.0lf\n", result);
    return 0;
}
