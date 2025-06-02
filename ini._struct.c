#include<stdio.h>
#include<stdlib.h>

struct student{
  char *name;
  int age;
  float per;
};
int main(){
    struct student o={"shree",20,97};
   
   
   printf("\nEnter a Name:%s",o.name);
   printf("\nEnter a age:%d",o.age);
   printf("\nEnter a Percentage:%0.2f",o.per);
   

    return 0;
}