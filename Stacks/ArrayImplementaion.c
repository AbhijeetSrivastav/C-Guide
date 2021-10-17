// Array Implementation of Stack

#include <stdio.h>
#include <stdlib.h>
#define size 10

int Stack[size];
int top = -1;
int data;


int push(int data){
    if (top == size - 1){
        printf("Stack Overflow!");
    }   
    else{
        top = top + 1;
        Stack[top] =  data;
    }

}


int pop(){
    if (top == -1){
        printf("Stack Undeflow!");
    }
    else{
        data = Stack[top];
        top = top - 1;
    }
    return data;
}


int peek(){
    if (top == -1){
        printf("Stack Underflow!");
    }
    else{
        data = Stack[top];
        return data;
    }
}


void main(){
    //ENTER FUNCTIONS HERE TO USE THEM AS YOUR WISH
}