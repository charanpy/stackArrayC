#include <stdio.h>
#define N 5
int stack[N];
int top=-1;
void push(){

        int i=0,x;

        while(i<N){
        printf("enter data");
        scanf("%d",&x);
                if(top == N-1){
                        printf("Overflow");
        }
        else{
                top++;
                stack[top]=x;
        }
        i++;
        }
}

void pop(){
        int item;
        if(top==-1){printf("Underflow");}
        else{
                item=stack[top];
                top--;
        //        printf("%d",item);
        }
}
void show(){
        int i;
        for(i=top;i>=0;i--){
                printf("%d\n",stack[i]);
                
        }
}     
void peek(){
        if(top==-1){
                printf("Empty");
        }
        printf("%d",stack[top]);
}
int main() {
  push();
  show();
  printf("/n");
  pop();
   show();
   printf("Top stack value");
  peek();
 
  return 0;
}