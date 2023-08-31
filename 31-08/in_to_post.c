#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define stack_size 100
typedef struct stack{
	char arr[stack_size];
	int top;
	int cap;
}stack;
void init_stack(stack *s){
	s -> top = -1;
	s -> cap = stack_size;
}
void push(stack *s, char data){
	if(s -> top >= s -> cap - 1){
		printf("Stack Overflow\n");
		return;
	}
	s -> top = s -> top + 1;
	s -> arr[s -> top] = data;
}
void pop(stack *s){
	if(s -> top <= -1){
		printf("Stack Underflow\n");
		return;
	}
	s -> top = s -> top - 1;
}
char top(stack *s){
	if(s -> top <= -1) return -1;
	return s -> arr[s -> top];
}
bool empty(stack *s){
	return s -> top == -1;
}
int size(stack *s){
	return s -> top + 1;
}
bool is_alpnum(char ch){
	if(ch >= '0' && ch <= '9') return true;
	if(ch >= 'a' && ch <= 'z') return true;
	if(ch >= 'A' && ch <= 'Z') return true;
	return false;
}
int priority(char ch){
	switch(ch){
	case '+':
	case '-':
		return 1;
	case '*':
	case '/':
		return 2;
	case '^':
		return 3;
	}
	return -1;
}
void in_to_post(char arr[]){
	stack s;
	init_stack(&s);
	for(int i = 0; arr[i]; i++){
		if(is_alpnum(arr[i])){
			printf("%c", arr[i]);
		}
		else if(arr[i] == '('){
			push(&s, arr[i]);
		}
		else if(arr[i] == ')'){
			while(top(&s) != '('){
				printf("%c", top(&s));
				pop(&s);
			}
			pop(&s);
		}
		switch(arr[i]){
		case '+':
		case '-':
		case '*':
		case '/':
		case '^':
			while(!empty(&s) && priority(top(&s)) >= priority(arr[i])){
				printf("%c", top(&s));
				pop(&s);
			}
			push(&s, arr[i]);
		}
	}
	while(!empty(&s)){
		printf("%c", top(&s));
		pop(&s);
	}
	printf("\n");
}
int main(){
	char arr[] = "a+b*c/(d-e)"; 
	in_to_post(arr);
	return 0;
}