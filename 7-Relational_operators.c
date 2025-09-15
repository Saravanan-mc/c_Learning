#include<stdio.h>
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  if(a==b) printf("Equal\n");
  if(a!=b) printf("Not Equal\n");
  if(a>b) printf("a is Greater\n");
  if(a<b) printf("a is smaller\n");
  if(a>=b) printf("a is Greater or Equal\n");
  if(a<=b) printf("a is smaller or Equal\n");
  return 0;
}
