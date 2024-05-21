#include <stdio.h>

struct queue{
    int size;
    int data;
    int front, rear;
};
#define MONSTER_MAX 10

void enqueue(int data);
void dequeue(int data);

void witch(){}
void zombie(){}
void mummy(){}
void ghost(){}

int main(){

}

void enqueue(int data){
    struct queue * q= malloc(sizeof(struct queue)*10);
    q->size=0;
    q->front=q->size;
    q->rear= MONSTER_MAX-1;
}