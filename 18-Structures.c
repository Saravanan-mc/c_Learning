#include<stdio.h>
#include<string.h>

struct Book{
  int No;
  char Arthor[1000];
  float Price;
};

int main(){
  
  struct Book thiru;
  thiru.No = 133;
  strcpy(thiru.Arthor,"Thiruvalluvar");
  thiru.Price = 50.00;
  
  printf("%d\n",thiru.No);
  printf("%s\n",thiru.Arthor);
  printf("%.2f\n",thiru.Price);
  
  return 0;
}
