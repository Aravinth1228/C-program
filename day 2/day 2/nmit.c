/*the newly appointed vc of NMIT wanted to create a
 automated grading system for the students to check their grade.
 when a student enter a mark,the grade system display the corresponding grade.*/

#include <stdio.h>

int main(){

    int mark;
    printf("Enter the mark: ");
    scanf("%d",&mark);

    if (mark==100){
        printf("S");
    }
    else if(mark>=90 && mark <100){
        printf("A");
    }
    else if(mark>=80 && mark <90){
        printf("B");
    }
    else if(mark>=70 && mark <80){
        printf("C");
    }
    else if(mark>=60 && mark <70){
        printf("D");
    }
    else if(mark>=50 && mark <60){
        printf("E");
    }else{
        printf("F");
    }
return 0;
}
