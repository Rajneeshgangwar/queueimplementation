#include<stdio.h>
#include<conio.h>
#define max 5
void insertion();
void deletion();
void display();
int a[10];
int rear=-1,front=-1;
void main()
{
    int ch;

    while(1)
    {
        printf("1. insertion\n2.deletion\n3. display\n 4.exit\n ");
        printf("enter the choice\n");
        scanf("%d",&ch);
    switch(ch)
            {
            case 1:
                insertion();
                break;
            case 2:
                deletion();
                break;
            case 3:
                display();
                break;

            case 4:
                exit(0);
                break;
            default:
                printf("invalid choice");
            }
   }
}
void insertion()
  {
      int data;
      if(rear==max-1)
        printf("the queue is under overflow condition");
      else
      {
          if(front==-1)
            front=0;
          rear=rear+1;
          printf("enter the element to insert");
          scanf("%d",&data);
          a[rear]=data;
      }
  }
 void deletion()
  {
      if(front==-1)
        printf("the queue is empty");
      else
      {
         printf("the deleted item is %d:\n",a[front]);
         front++;
         if(front>rear)
            front=rear=-1;
      }
  }
void display()
 {
     int i;
     if(rear==-1)
        printf("queue is empty\n");
      else
      {
                  printf("the queue is.........\n");
      for(i=front;i<=rear;i++)
            printf("%d\t",a[i]);
      }
 }
