
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,ans;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    if(c=='+') ans=a+b;
    else if(c=='-') ans=a-b;
    else if(c=='*') ans=a*b;
    else if(c=='/' && b!=0) ans=a/b;
    else if(c=='%') ans=a%b;
    else if(c=='^') ans=pow(a,b);
    else { printf("Not valid"); return 0; }
    
    printf("%d", ans);
}
