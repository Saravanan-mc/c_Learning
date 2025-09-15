#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  char *name;
  name = calloc(100,1);
  strcpy(name, "Hello World");
  printf("%s",name);
}
