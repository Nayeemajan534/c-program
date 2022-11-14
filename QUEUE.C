#include<stdio.h>
#include<stdlib.h>

#include<conio.h>
#define MAX  5
int queue[MAX];
int rear=-1;
int front=-1;
int ch,i;
void enqueue();
void dequeue();
void main()
{
clrscr();

 printf("press 1 for enqueue():\n");
 printf("enter 2 for deqeue():\n");
 printf("enter 3 for exit():\n");
 do{
   printf("enter your choice\n");
   scanf("%d",&ch);
   switch(ch)
   {
   case 1: enqueue();
	break;
   case 2: dequeue();
	break;
   case 3: exit(0);
	break;
   default:
   printf("invalid choice\n");
   }
  }

 while(ch!=4);
 getch();
}
 void enqueue()
 {
 if(rear==MAX-1)
 {
 printf("queue is full \n");
 }
 else{
 printf("enqueue element\n");
 rear++;
 }
 }
 void dequeue()
 {

   if(rear==-1||front>rear){
   printf("queue is empty\n");
   }
   else
   {
   printf("%d is sucessfully dequeued\n",queue[front]);
   }
}