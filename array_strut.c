#include<stdio.h>
struct student{
    char *name;
    int age;
    float per;
};
int main (){
  struct student o[2];
  o[0].name="Aravinth";
  o[0].age=20;
  o[0].per=96;
  o[1].name="Shree";
  o[1].age=21;
  o[1].per=98;
  printf("\n-------------------------");
  printf("\nName :%s",o[0].name);
  printf("\nAge  :%d",o[0].age);
  printf("\nPer  :%0.2f",o[0].per);
  printf("\n-------------------------");
  printf("\nName :%s",o[1].name);
  printf("\nAge  :%d",o[1].age);
  printf("\nPer  :%0.2f",o[1].per);
 printf("\n-------------------------");
    return 0;
}