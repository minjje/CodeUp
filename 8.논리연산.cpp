// 1053 참 거짓 바꾸기
/*
#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d", !a); // NOT
    return 0;
}
*/

// 1054 둘 다 참일 경우만 참 출력하기
/*
#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a&&b); // AND

    return 0;
}
*/

// 1055 하나라도 참이면 참 출력하기
/*
#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a||b); // OR
    return 0;
}
*/

// 1056 참/거짓이 서로 다를 때에만 참 출력하기
/*
#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", (!a&&b)||(a&&!b)); // XOR
    return 0;
}
*/

// 1057 참/거짓이 서로 같을 때에만 참 출력하기
/*
#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", (!a&&!b)||(a&&b)); EQV
    return 0;
}
*/

// 1058 둘 다 거짓일 경우만 참 출력하기

#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", !a&&!b);
    return 0;
}
