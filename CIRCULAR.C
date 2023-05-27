#define MAX 10
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct Queue_struct{
    int a[MAX];
    int front,rear;
}queue;
void main(){
    queue q;

    int choice,item;

    void enqueue(queue *,int);
    int dequeue(queue *);
    void display(queue);
    int is_underflow(queue);
    int is_overflow(queue);
      clrscr();
    q.front=-1;
    q.rear=-1;
    while(1){
    printf("\nQueue\n");
    printf("------------------------\n");
    printf("1- Enqueue\n2- Dequeue 3- Display\n4- Exit\n");
    printf("Enter the index of your choice\n");
    scanf("%d",&choice);

	switch(choice){
	    case 1:if(is_overflow(q)){
		       printf("Queue is Full\n");
		   }
		   else{
		       printf("Enter the element\n");
		       scanf("%d",&item);
		       enqueue(&q,item);
		   }
		   break;
	    case 2:if(is_underflow(q)){
		       printf("Queue is Empty\n");
		   }
		   else{
		      item= dequeue(&q);
		      printf("%d is dequeued\n",item);

		   }
		   break;
	    case 3:display(q);
		   break;
	    case 4:exit(0);
	    default: printf("Invalid Input\n");
	}
    }
}

void enqueue(queue *q,int item){
    int i;
    if(q->front==-1){
	q->front=0;
	q->rear=0;
	q->a[q->rear]=item;
    }
    else{
       ( q->rear)++;
       q->rear=q->rear%MAX;
       q->a[q->rear]=item;
    }

}
int is_underflow(queue q){
    if(q.front==-1){
	return 1;
    }
    return 0;
}
int is_overflow(queue q){
    if((q.front==0 && q.rear==MAX-1) || (q.rear==q.front-1)){
	return 1;
    }
    return 0;
}
int dequeue(queue *q){
    int item;
    item =q->a[q->front];
    if(q->front==q->rear){
	q->front=q->rear=-1;
    }
    else if(q->front==MAX-1){
	q->front=0;
    }
    else{
	q->front = (q->front)+1;
    }
    return item;

}
void display(queue q){
   int i;
   for(i=q.front;i!=q.rear;i=(i+1)%10){
       printf("%d ",q.a[i]);
   }
   printf("%d ",q.a[i]);
}
