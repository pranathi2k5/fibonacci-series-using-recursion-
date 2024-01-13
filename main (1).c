/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void fib_rec(int n,int f1,int f2);
void main(){
   int n,f1=0,f2=1;
   scanf("%d",&n);
   if(n<=0)
   printf("enter a valid number\n");
  else if(n==1)
  printf("%d",f1);
  else if(n==2)
  printf("%d %d",f1,f2);
  else{
     printf("%d %d",f1,f2);
   fib_rec(n-2,f1,f2);
   printf("\n\n");
  }
}
void fib_rec(int n,int f1,int f2){
    int f3;
    if(n==0){
    return;
            }
    f3=f1+f2;
    printf(" %d",f3);
    fib_rec(n-1,f2,f3);
}