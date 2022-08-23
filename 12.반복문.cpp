// 1071 0이 입력될 때까지 무한 출력하기1
// goto 반복문
/*
#include <stdio.h>

int main(void)
{
    int a;
    reload: // 레이블은 :(콜론)으로 끝냄
    scanf("%d", &a);
    a != 0 ? printf("%d\n", a) : printf("");
    if(a!=0) 
    {
        goto reload; //reload라고 적혀있는 레이블로 이동
    }       
    return 0; 
}
*/

// 1072 정수를 입력받아 계속 출력하기
/*
#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d", &a);
    reget: // 레이블은 :(콜론)으로 끝냄
    scanf("%d", &b);
    printf("%d\n", b);
    if(--a != 0) 
        goto reget; // reget 레이블로 이동
    
    return 0;
}
*/

// 1073 0이 입력될 때까지 무한 출력하기2
/* while문
#include <stdio.h>
int main(void)
{
    int a=1; // 초기화, 처음 조건 검사를 넘어가기 위해(a!=0)
    
    while(a!=0)
    {
        scanf("%d", &a);
        a != 0 ? printf("%d\n", a) : printf("");
    }
    
    return 0;
}
*/

// 1074 정수 1개를 입력받아 카운트다운 출력하기1
/*
#include <stdio.h>
int main(void)
{
    int a=1;
    scanf("%d", &a);
    while(a!=0)
    {
        printf("%d\n", a--);
    }
    return 0;
}
*/

// 1075 정수 1개를 입력받아 카운트다운 출력하기2
/*
#include <stdio.h>
int main(void)
{
    int a=1;
    scanf("%d", &a);
    while(a!=0)
    {
        printf("%d\n", --a);
    }
    return 0;
}
*/

// 1076 문자 1개를 입력받아 알파벳 출력하기
//do~while 문
/*
#include <stdio.h>
int main(void)
{
    char x, t='a';
    scanf("%c", &x);

    do
    {
        printf("%c\n", t);
        t+=1;
    }while(t<=x);
    return 0;
}
*/

// 1077 정수 1개를 입력받아 그 수까지 출력하기

#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d", &b);
    for(a=0; a<=b; a++)
    {
        printf("%d\n", a);
    }
    return 0;
}
