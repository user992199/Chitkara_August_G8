#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
#define queue_size 5
typedef struct queue{
	int arr[queue_size];
	int cap;
	int cs;
	int front;
	int back;
}queue;
void init_queue(queue * q){
	q -> cap = queue_size;
	q -> cs = 0;
	q -> front = q -> back = -1;
}
void push(queue * q, int data){
	if(q -> cs == q -> cap){
		printf("Queue Overflow\n");
		return;
	}
	if(q -> cs == 0) q -> front = 0;
	q -> back = (q -> back + 1) % q -> cap;
	q -> arr[q -> back] = data;
	(q -> cs)++;
}
void pop(queue * q){
	if(q -> cs == 0) return;
	(q -> cs)--;
	q -> front = (q -> front + 1) % q -> cap;
	if(q -> cs == 0){
		q -> front = q -> back = -1;
	}
}
int front(queue * q){
	if(q -> cs == 0) return INT_MIN;
	return q -> arr[q -> front];
}
bool empty(queue * q){
	return q -> cs == 0;
}
int size(queue * q){
	return q -> cs;
}
int main(){
	queue q;
	init_queue(&q);
	int i;
	for(i = 0; i < 3; i++){
		push(&q, i + 1);
	}
	while(!empty(&q)){
		printf("%d ", front(&q));
		pop(&q);
	}
	printf("\n");
	for(; i < 10; i++){
		push(&q, i + 1);
	}
	while(!empty(&q)){
		printf("%d ", front(&q));
		pop(&q);
	}
	printf("\n");
	return 0;
}