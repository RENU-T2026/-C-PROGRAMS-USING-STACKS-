#include <stdio.h>
#include <stdlib.h>
#define MAX 32
int stack[MAX];
int top=-1;
void push(int value) {
    if(top==MAX-1){
          printf("Stack overflow\n");
          return ;
    }
     stack[++top]=value;
}
int pop(){
   if(top==-1) {
      printf("Stack undeflow\n");
      return -1;
   }
}
return stack[top--];
}
void decimaltobinary(int num){
     if(num==0){
        printf("Binary equivalent: 0\n");
        return ;
     }
int temp=num;
while(temp>0){
  push(temp%2);
  temp=temp/2;
}
printf("Binary equivalent if %d is:",num);
while(top!=-1){
   printf("%d",pop());
}
printf("\n");
}
int main() {
   int decimalNum;
   printf("Enter a positive deciaml number:");
   if(scanf("%d",&decimalNum)!=1 || decimalNum<0){
      printf("Please enter a valid positive decimal number.\n");
      return 1;
}
   decimaltobinary(decimalNum);
   return 0;
}