// 1038 정수 2개를 입력받아 합 출력하기1
/*
#include <stdio.h>
int main(void)
{
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%.0f", a+b);
    return 0;
}
*/

// 1039 정수 2개를 입력받아 합 출력하기2
/*
#include <stdio.h>

int main(void)
{
    long long int a, b;
    long long int sum;
    scanf("%lld %lld", &a, &b);
    sum = a + b;
    printf("%lld", sum);
    return 0;
}
*/

// 1040 정수 1개를 입력받아 부호 바꿔 출력하기
/*
#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d", -a);
    return 0;
}
*/

// 1041 문자 1개를 입력받아 다음 문자 출력하기
/*
#include <stdio.h>
int main(void)
{
    char a;
    scanf("%c", &a);
    printf("%c", a+1);
    return 0;
}
*/

// 1042 정수 2개를 입력받아 나눈 몫 출력하기
/*
#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.0f", float(a/b));
    return 0;
}
*/

// 1043 정수 2개를 입력받아 나눈 나머지 출력하기
/*
#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a%b);
    return 0;    
}
*/

// 정수 1개를 입력받아 1 더해 출력하기
/*
#include <stdio.h>
int main(void)
{
    long int a;
    scanf("%ld", &a);
    printf("%ld", a+1);
    return 0;
}
*/

// 1045 정수 2개를 입력받아 자동 계산하기
/*
#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a+b);
    printf("%d\n", a-b);
    printf("%d\n", a*b);
    printf("%d\n", a/b);
    printf("%d\n", a%b);
    printf("%.2f\n", double(a)/double(b)); //데이터를 입력하는 수에 모두 할당해야 됨

    return 0;
}
*/

// 1046 정수 3개 입력받아 합과 평균 출력하기

#include <stdio.h>
int main(void)
{
    int a, b, c;
    int sum;
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    printf("%d\n", sum);
    printf("%.1f\n", float(sum)/3);
}
