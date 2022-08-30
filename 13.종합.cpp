// 1078 짝수 합 구하기
/*
#include <stdio.h>
int main(void)
{
    int sum=0; // sum 초기화
    int a, n;
    scanf("%d", &n);
    for(a=1; a<=n; a++)
    {
        if(a%2==0)
        {
            sum = sum + a;
        }
    }
    printf("%d\n", sum);
    return 0;
}
*/

// 1079 원하는 문자가 입력될 때까지 반복 출력하기
/*
#include <stdio.h>

int main(void)
{
    char n;
    scanf("%c", &n);
    
    while(n!='q')
    {
        printf("%c\n", n);
        scanf(" %c", &n);
    }
    printf("%s\n", "q");

   return 0;
}
*/

// 1080 언제까지 더해야 할까?
/*
#include <stdio.h>

int main(void)
{
    int sum;
    int a = 0;
    int n;
    scanf("%d", &n);
    for(sum=0; sum<n; a++)
    {
        sum = sum + a;
    }
    printf("%d\n", a-1);
    return 0;
}
*/

// 1081 주사위를 2개 던지면?
/*
#include <stdio.h>

int main(void)
{
    int a, b;
    int n, m;
    scanf("%d %d", &n, &m);
    for(a=1; a<=n; a++)
    {
        for(b=1; b<=m; b++)
        {
            printf("%d %d\n", a, b);
        }
    }
    return 0;
}
*/

// 1082 16진수 구구단?
/*
#include <stdio.h>

int main(void)
{
    int a, i;
    scanf("%X", &a);
    for(i=1; i<16; i++)
    {
       printf("%X*%X=%X\n", a, i, a*i);
    }
    return 0;
}
*/

// 1083 3 6 9 게임의 왕이 되자!
/*
#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d", &a);
    for(b=1;b<=a;b++)
    {
        if(b%3==0||b%6==0||b%9==0)
        {
            printf("X\n");
        }
        else
        printf("%d\n", b);
    }
    return 0;
}
*/

// 1084 빛 섞어 색 만들기
/*
#include <stdio.h>

int main(void)
{
    int i, j, k, c=0;
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);

    for(i=0; i<r; i++)
     for(j=0; j<g; j++)
      for(k=0; k<b; k++)
      {
          printf("%d %d %d\n", i, j, k);
          c++;
      }
      printf("%d\n", c);
      return 0;
}
*/

// 1085 소리 파일 저장용량 계산하기
/*
#include <stdio.h>
int main(void)
{
    float h, b, c, s;
    float Storage;
    scanf("%f %f %f %f", &h, &b, &c, &s);
    Storage = (h*b*c*s)/8388608;
    printf("%.1f MB\n", Storage);
    
    return 0;
}
*/

// 1086 그림 파일 저장용량 계산하기
/*
#include <stdio.h>
int main(void)
{
    float w, h, b;
    float Storage;
    scanf("%f %f %f", &w, &h, &b);
    Storage = (w*h*b)/8388608;
    printf("%.2f MB\n", Storage);
    
    return 0;
}
*/

// 1087 여기까지! 이제 그만~
/*
#include <stdio.h>
int main(void)
{
    int a ,b; 
    int c=0;
    scanf("%d", &a);
    for(b=1; ;b++)
    {
        c+=b;
        if(c>=a)
        break;
    }
    printf("%d\n", c);
    return 0;
}
*/

// 1088 3의 배수는 통과?
/*
#include <stdio.h>
int main(void)
{
    int a, n;
    scanf("%d", &a);

    for(n=1; n<=a; n++)
    {
        if(n%3==0)
         continue;
        printf("%d\n", n); 
    }
    return 0;
}
*/

// 1089 수 나열하기 1
/*
#include <stdio.h>
int main(){
    int i, j, a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    for(i=a, j=1; ;j++, i+=b)
    
        if(j==c) 
        break;
    printf("%d\n", i);
    
    return 0;
}
*/

// 1090 수 나열하기 2
/*
#include <stdio.h>
int main(void)
{
    long long int a, r, n, i;
    scanf("%lld %lld %lld", &a, &r, &n);
    for (i = 1; i <= n - 1; i++)
    {
        a *= r; // a = a * r
    }
    printf("%lld", a);
    return 0;
}
*/
