
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
     int value;
	struct node*next;
};
typedef struct node snode;
snode* create_node(int);
void insert_first();
void insert_last();
void insert_pos();
void delete_pos();
void display();

snode *newnode,*ptr,*prev,*temp;
snode *first=NULL,*last=NULL;

int main()
{
	int ch;

     while(1)
	{
		printf("\n 1.Insert node at first");
		printf("\n 2.Insert node at last");
		printf("\n 3.Insert node at given position");
		printf("\n 4.Delete node at given position");
		printf("\n 5.Display linked list");
		printf("\n 6.Exit");
		printf("\n-------------------------------------");
		printf("\n enter your choice : ");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1:
			insert_first();
			break;
		case 2:
			insert_last();
			break;
		case 3:
			insert_pos();
			break;
		case 4:
			delete_pos();
			break;
		case 5:
			display();
			break;
		case 6:
			exit(0);
		default:
			printf("\n wrong choice");
			break;
		}
      }
	return 0;
}

snode* create_node(int val)
{
   newnode=(snode *)malloc(sizeof(snode));
	if(newnode==NULL)
	{
	printf("\n memory is not allocated");
	return 0;
	}
	else
	{
	newnode->value=val;
	newnode->next=NULL;
	return newnode;
	}
}

void insert_first()
{
	int val;
     printf("\n Enter the value for node : ");
	scanf("%d",&val);

	newnode=create_node(val);
     if(first==last && first==NULL)
	{
		first=last=newnode;
		first->next=NULL;
		last->next=NULL;
	}
	else
	{
		temp=first;
		first=newnode;
		first->next=temp;
	}
	printf("\n node inserted..........");
}

void insert_last()
{
	int val;
     printf("\n Enter the value for node : ");
	scanf("%d",&val);

	newnode=create_node(val);
     if(first==last && last==NULL)
	{
		first=last=newnode;
		first->next=NULL;
		last->next=NULL;
	}
	else
	{
		temp=last;
		last=newnode;
		last->next=NULL;
		temp->next=last;
	}
	printf("\n node inserted...........");
}

void insert_pos()
{
	int pos,val,c=0,i;
     printf("\n enter the value of the node : ");
	scanf("%d",&val);
	newnode=create_node(val);
	printf("\n enter the position : ");
	scanf("%d",&pos);

	ptr=first;
     while(ptr -> next!=NULL)
	{
		ptr=ptr->next;
		c++;
	}
	if(pos==1)
	{
	if(first==last && first==NULL)
	{
		first=last=newnode;
		first->next=NULL;
		last->next=NULL;
	}
	else
	{
		temp=first;
		first=newnode;
		first->next=temp;
	}
	printf("\n inserted...............");
	}
	else if(pos>1 && pos<=c)
	{
		ptr=first;
		for(i=1;i<pos;i++)
		{
			prev=ptr;
			ptr=ptr->next;
		}
		prev->next=newnode;
		newnode->next=ptr;
		printf("\n node is inserted at position %d",pos);
	}
	else
	{
		printf("\n position is out of range");
	}
}

void delete_pos()
{
	int pos,val,c=0,i;

	if(first==NULL)
	{

		printf("\n NO node deleted linked list is empty");
	}
	else
	{
	printf("\n enter the position");
	scanf("%d",&pos);

	ptr=first;

		if(pos==1)
		{
			first=ptr->next;
			printf("\n element deleted");
		}
		else
		{
		while(ptr!=NULL)
		{
			ptr=ptr->next;
			c++;
		}
		if(pos>0 && pos<=c)
		{
			ptr=first;
			for(i=1;i<pos;i++)
			{
					prev=ptr;
					ptr=ptr->next;
			}
		  prev->next=ptr->next;
            printf("\n node is deleted at position %d",pos);
		}
		else
		{
			printf("\n position is out of range");
		}
		free(ptr);
		}
	}
}
void display()
{
	int val;
	if(first==NULL)
	{
        printf("\n NO node to display list is empty");
	}
	else
	{
        for(ptr=first ; ptr!=NULL ; ptr=ptr->next)
		{
             printf("%d\t", ptr->value);
		}
	}
}
