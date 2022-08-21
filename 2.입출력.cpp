// 1010 정수 1개를 입력받아 그대로 출력하기
/*
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", n);
    return 0;
}
*/

// 1011 문자 1개를 입력받아 그래도 출력하기
/*
#include <stdio.h>
int main(void)
{
    char x;
    scanf("%c", &x);
    printf("%c", x);
    return 0;
}
*/

// 1012 실수 1개를 입력받아 그대로 출력하기
/*
#include <stdio.h>
int main(void)
{
    float x;
    scanf("%f", &x);
    printf("%f", x);
    return 0;
}
*/

// 1013 정수 2개를 입력받아 그대로 출력하기
/*
#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d", a, b);
    return 0;
}
*/

// 1014 문자 2개를 입력받아 그대로 출력하기
/*
#include <stdio.h>
int main(void)
{
    char x, y;
    scanf("%c %c", &x, &y);
    printf("%c %c", y, x);
    return 0;
}
*/

// 1015 실수를 입력받아 둘째자리까지 출력하기
/*
#include <stdio.h>

int main(void)
{
    float x;
    scanf("%f", &x);
    printf("%.2f", x);
    return 0;
}
*/

// 1016 정수 1개를 입력받아 3번 출력하기
/*
#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d %d %d", a, a, a);
    return 0;
}
*/

// 1017 시간 입력받아 그대로 출력하기
/*
#include <stdio.h>
int main(void)
{
    int h, m;
    scanf("%d:%d", &h, &m);
    printf("%d:%d", h, m);
    return 0;
}
*/

// 1018 연월일 입력받아 그대로 출력하기
/*
#include <stdio.h>
int main(void)
{
    int yyyy, mm, dd;
    scanf("%d.%d.%d", &yyyy, &mm, &dd);
    printf("%04d.%02d.%02d", yyyy, mm, dd);
    return 0;
}
*/

// 1020 주민번호 입력받아 형태 바꿔 출력하기
/*
#include <stdio.h>

int main(void)
{
    int yymmdd, data;
    scanf("%d-%d", &yymmdd, &data);
    printf("%06d%07d", yymmdd, data);
    return 0;
}
*/

// 1021 단어 1개를 입력받아 그대로 출력하기
/*
#include <stdio.h>
int main(void)
{
    char data[51]="";
    scanf("%s", data); // %d와 다르게 문자열은 &를 사용하지 않음
    printf("%s", data);
    return 0;
}
*/

// 1022 문장 1개를 입력받아 그대로 출력하기
/*
#include <stdio.h>

int main(void)
{
    char data[2001];
    fgets(data, 2000, stdin); //표준 입력 버퍼에서 문자열을 가져온다
    printf("%s", data);
    return 0;
}
*/

// 1023 실수 1개를 입력받아 부분별로 출력하기
/*
#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d.%d", &a, &b);
    printf("%d\n%d", a, b);
    return 0;
}
*/

// 1024 단어 1개를 입력받아 나누어 출력하기
/*
#include <stdio.h>
int main(void)
{
    char d[30];
    scanf("%s", d);
    for(int i=0; d[i]!='\0'; i++)
    {
        printf("\'%c\'\n", d[i]);
    }
    return 0;
}
*/

// 1025 정수 1개를 입력받아 나누어 출력하기
/*
#include <stdio.h>
int main(void)
{
    int a, b, c, d, e;
    scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
    printf("[%d]\n", a*10000);
    printf("[%d]\n", b*1000);
    printf("[%d]\n", c*100);
    printf("[%d]\n", d*10);
    printf("[%d]\n", e);
    return 0;
}
*/

// 1026 시분초를 입력받아 분만 출력하기
/*
#include <stdio.h>
int main(void)
{
    int h, m, s;
    scanf("%d:%d:%d", &h, &m, &s);
    printf("%d", m);
    return 0;
}
*/

// 1027 년월일 입력받아 형식 바꿔 출력하기

#include <stdio.h>
int main(void)
{
    int yyyy, mm, dd;
    scanf("%d.%d.%d", &yyyy, &mm, &dd);
    printf("%02d-%02d-%04d", dd, mm, yyyy);
    return 0;
}

