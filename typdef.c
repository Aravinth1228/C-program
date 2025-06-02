#include<stdio.h>
#include<stdlib.h>

 typedef struct student{
  char *name;
  int age;
  float per;
}boys;
int main(){
    boys o,o2;
    o.name="Aravinth";
    o.age =20;
    o.per =98.4;
    o2.name="Shree";
    o2.age =20;
    o2.per =95.4;
   printf("\nEnter a Name:%s",o.name);
   printf("\nEnter a age:%d",o.age);
   printf("\nEnter a Percentage:%0.2f",o.per);
   printf("\n-------------------------");
   printf("\nEnter a Name:%s",o2.name);
   printf("\nEnter a age:%d",o2.age);
   printf("\nEnter a Percentage:%0.2f",o2.per);

    return 0;
}