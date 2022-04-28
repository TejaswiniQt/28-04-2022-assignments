/* Create a circular LL with 5 nodes having char data - vowels - a,e,i,o,u */

#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>

#define NODES 5

typedef struct node
{
    char data;
    struct node *link;
}clist;



void insert(clist **head,char data)
{
    clist *temp;
    clist *new=(clist *)malloc(sizeof(clist));
    if(new==NULL)
    {
        printf("Memory is not allocated\n");
    }
    else
    {
        new->data=data;
        new->link=NULL;
    if(*head==NULL)
    {
        *head=new;
         temp=new;
    }
    else
    {
       temp->link = new;
       temp = new;
    }
    temp->link = *head;
  }
}

void display(clist **head)
{
    clist *temp=*head;
    if(*head==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("List contains:\n");
        while(temp->link != *head)
        {
            printf("%c ",temp->data);
            temp = temp->link;
        }
        printf("%c ",temp->data);
        printf("\n");
    }
}


int main()
{
    clist *head=NULL;
    char data;
    int i=0;
    while(i++<NODES)
    {
    printf("Enter the character:");
    __fpurge(stdin);
    scanf("%c",&data);
    insert(&head,data);
    }
    display(&head);
    
    return 0;
}





