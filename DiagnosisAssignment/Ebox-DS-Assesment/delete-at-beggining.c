#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
	int data;
	struct node * link;
};
void append ( struct node **, int ) ;
void display ( struct node * ) ;
void delete (struct node **);

int main() {
	struct node *p ;
	p=NULL;
	int n;
	char ch[10];
	do {
		printf("Enter the value\n");
		scanf("%d",&n);
		append(&p,n);
		printf("Do you want to add another node? Type Yes/No\n");
		scanf("%s",ch);
	} while(!strcmp(ch,"Yes"));
	printf("The elements in the linked list are");
	display(p);
	printf("\n");
	delete(&p);
	printf("The elements in the linked list after deleting the element are");
	display(p);
	printf("\n");
    delete(&p);
    printf("The elements in the linked list after deleting the element are");
	display(p);
    printf("\n");
	return 0;
}

void append ( struct node **q, int num ) {
	struct node *pp=(struct node *)malloc(sizeof(struct node));
	pp->data=num;
	pp->link=NULL;
	if(*q==NULL)
	{
	    *q=pp;
	}
	else
	{
	    struct node *temp=*q;
	    while(temp->link!=NULL)
	    {
	        temp=temp->link;
	    }
	    temp->link=pp;
	}
}

void display ( struct node *q ) {
	    while(q!=NULL)
	    {
	        printf(" %d",q->data);
	        q=q->link;
	    }
	    
}


void delete ( struct node **q ) 
{
	    struct node *temp=*q;
	    if(*q == NULL){
        printf("Linked List Empty, nothing to delete");
        return;
    }
	     *q = (*q)->link;
    
    free(temp);
}