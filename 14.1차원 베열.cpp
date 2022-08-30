// 1093 이상한 출석 번호 부르기1
/*
#include <stdio.h>

int main(void)
{
    int a[24]={}; //a[0]~a[23]
    int n, i, t;
    scanf("%d", &n); //개수 입력받기
    for(i=1; i<=n; i++)
    {
        scanf("%d", &t); //읽어서
        a[t]=a[t]+1; //들어있던 값에 1만큼 더해 다시 저장
    }
    for(i=1; i<=23; i++)
    {
        printf("%d\n", a[i]); // 1~23번 배열에 저장되어있는 값 출력하기
    }
    return 0;
}
*/

//int a[24]={}; //0번부터 23번까지 모두 0으로 초기화된다.
//int a[24]={1,2,3}; //1,2,3 이 순서대로 들어가고 나머지는 모두 0으로 초기화된다.
//int a[3]={1,2,3}; //1,2,3 이 순서대로 저장된다.
//int a[3]={1,2,3,4}; //방을 3개 만들고 값을 4개를 집어넣어라? 오류 발생!

// 1094 이상한 출석 번호 부르기2
/*
#include <stdio.h>

int main(void)
{
    int n, i;
    int a[10000]={};
    scanf("%d", &n); // 개수 입력받기
    for(i=1; i<=n; i++) // 개수만큼 입력받기
       scanf("%d", &a[i]); // 읽어서 순서대로 배열에 넣는다.

    for(i=n; i>=1; i--)
    printf("%d\n", a[i]); // i번 배열에 저장되어 있는 값 출력하기   
    return 0;
}
*/

// 1095 이상한 출석 번호 부르기3

#include <stdio.h>

int main(void)
{
    int n, i;
    int min=10;
    int a[10000]={};
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]<min)
        {   
        min = a[i];
        }
    }
    printf("%d\n", min);
    return 0;
}
