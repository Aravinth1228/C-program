int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,n,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(s=1;s<=i-1;s++){
            printf(" ");
        }for(j=0;j<=2*n-i-s;j++){
            printf("*");
        }printf("\n");
    }
    return 0;
}
/*
*********
 *******
  *****
   ***
    *
    */
