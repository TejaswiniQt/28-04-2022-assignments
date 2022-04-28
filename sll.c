/* Create a list with 3 nodes having int data in single Linked list data : 100,200,300 */


#include<stdio.h>
#include<stdlib.h>
 
typedef struct node
{
        int data;
        struct node *link;
}sll;


void create_list(sll **head,int data);
void display(sll **head);


int main()
{
    sll *head=NULL;
    int option,data;
    while(1)
    {
        printf("Enter option\n1.create_list\n2.display\n3.exit\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            printf("Enter the data:");
            scanf("%d",&data);
            create_list(&head,data);
            break;
            case 2:
            display(&head);
            break;
            case 3:
            exit(0);
            break;
            
        }
    }
    return 0;
}


void create_list(sll **head,int data)
{
    sll *new=(sll *)malloc(sizeof(sll));
    if(new==NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        new->data=data;
        new->link=NULL;
        if(*head==NULL)
        {
            *head=new;
        }
        else
        {
            sll *temp=*head;
            while(temp->link != NULL)
            {
                temp=temp->link;
            }
            temp->link=new;
        }
    }
}


void display(sll **head)
{
    sll *temp=*head;
    if(*head==NULL)
    {
        printf("List isempty\n");
    }
    else
    {
        printf("List contains:\n");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
        printf("\n");
    }
}