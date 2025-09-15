#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  char *name;
  name = malloc(100);
  realloc(name,1000);
  name = strcpy(name,"Hello World");
  printf("%s\n",name);
  printf("%d",sizeof(name));
}
