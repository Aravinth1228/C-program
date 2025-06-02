#include<stdio.h>
#include<stdlib.h>

struct student{
  char *name;
  int age;
  float per;
};
 void total(){
    struct  mark{
        int m1,m2,m3,total;
         }m;
   m.m1=90;
   m.m2=97;
   m.m3=60;
   m.total=m.m1+m.m2+m.m3;
   printf("\nMark1 :%d",m.m1);
   printf("\nMark2 :%d",m.m2);
   printf("\nMark3 :%d",m.m3);
   printf("\nTotal :%d",m.total);
 };

int main(){
    struct student o,o2;
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
   total();
    return 0;
}