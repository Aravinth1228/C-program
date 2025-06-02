#include<stdio.h>
#include<stdlib.h>

struct student{
  char *name;
  int age;
  float per;
};
int main(){
    struct student o={"shree",20,97};
    struct student *ptr =&o;
   
   printf("\nEnter a Name      :%s",ptr ->name);
   printf("\nEnter a age       :%d",ptr->age);
   printf("\nEnter a Percentage:%0.2f",ptr->per);
   

    return 0;
}