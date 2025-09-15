#include<stdio.h>
#include<string.h>

union Book{
  int No;
  char Arthor[1000];
  float Price;
};

int main(){
  union Book thiru;
  strcpy(thiru.Arthor,"Thiruvalluvar");
  
  printf("%s\n",thiru.Arthor);
  
  return 0;
}
