#include <stdio.h>
#include <stdlib.h>
# define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;
void Push(int x){
    if(top==MAX_SIZE - 1){
        printf(":Stack Overflow:\n");
        return;
    }
    A[++top]=x;
}
void Pop(){
    if(top == -1){
        printf(":Underflow:\n");
        return;
    }
    top--;
}
int TOP(){
return A[top];
}

void Print(){
    printf("STACK:");
    for(int i=0;i<=top;i++){
            printf("%d",A[i]);
    }
    printf("\n");
}
int main(){
    Push(2);Print();
    Push(4);Print();
    Push(6);Print();
    Pop();Print();
    Push(5);Print();
}

