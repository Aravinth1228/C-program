#include<stdio.h>
struct student{
   char *name;
   int age;
   float per;
   } ;

  void display(struct student o){
  printf("\nName :%s",o.name);
  printf("\nAge :%d",o.age);
  printf("\nPer :%0.2f",o.per);

  };
  int main (){
    struct student o={"Shree",20,98.5};
    display(o);
    return 0;
  }
