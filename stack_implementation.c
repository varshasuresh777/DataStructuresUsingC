#include<stdio.h>
# define SIZE 10

typedef struct {
	int item[SIZE];
	int top;
  }stack;

// prototype of push and pop operation
void init(stack*);
void push(stack *,int);// address of stack which it has to push , integer is value 
int pop(stack *);

void push(stack *sp, int value)
{
    if (sp ->top ==SIZE -1){ // check overflow size-1,,,, -> is used to access the member of stack
		printf("stack overflow\n");
		return;
	}
	sp->top++;// incrementing by 1
	sp->item[sp->top]=value;// using top as index 	

}
int pop(stack *sp){
	if (sp->top==-1){
		printf("stack underflow\n");
		return -9999; 
	}
	int value;
	value = sp->item[sp->top];
	sp->top--;
	return value; 
}
 void init(stack *sp){
	 sp->top=-1;
 }
int main()
{ 
stack s1,s2;
init(&s1);
init(&s2);
//s1.top=-1;//initializing 
//s2.top=-1;// initializing the stack 
push(&s1,100);
push(&s1,200);

push(&s2,10);
push(&s2,20);

printf("delete from s1:%d\n",pop(&s1));//200
printf("delete from s1:%d\n",pop(&s1));//100


printf("delete from s1:%d\n",pop(&s2));//20
printf("delete from s1:%d\n",pop(&s2));//10
return 0;
}



/***
delete from s1:200

delete from s1:100

delete from s1:20

delete from s1:10


***/