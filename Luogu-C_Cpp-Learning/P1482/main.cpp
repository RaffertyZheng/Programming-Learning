#include<iostream>
#include<cstdio>
#include<algorithm> 
#include<string>
#include<cstring>

using namespace std;

int a1,a2,b1,b2;
char spc;

int main()
{
    scanf("%d",&a1); spc=getchar(); scanf("%d",&b1); 
    //spc用于读掉除号
    scanf("%d",&a2); spc=getchar(); scanf("%d",&b2);
    int c1=a1*a2,c2=b2*b1;
    printf("%d %d\n",c2 / __gcd(c1,c2),c1 / __gcd(c1,c2)); 
    //约分
    return 0;
}

// __gcd(x,y) 可用于求x,y的最大公约数