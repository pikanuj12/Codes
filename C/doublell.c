#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 int data;
 struct node *next;
}node;
int main()
{
    node *p,*head,*q;
    int n,i=1,c=1,pos;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    head=(node*)malloc(sizeof(node));
    printf("Enter data for head node: ");
    scanf("%d",&(head->data));
    head->next=NULL;
    p=head;
    for(i=1;i<n;i++)
    {
     p->next=(node*)malloc(sizeof(node));
     p=p->next;
     printf("Enter data for node %d: ",i+1);
     scanf("%d",&(p->data));
     p->next=NULL;
    }
    p->next=head;
    p=head;
    //displaying circular linked list
    do{
        printf("%d\n",p->data);
        p=p->next;
    }while(p!=head);
    return 0;
}