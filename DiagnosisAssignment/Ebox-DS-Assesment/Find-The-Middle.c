#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
  int id;
  char name[10];
  char gender[10];
  struct student * link;
};
void append ( struct student **, struct student ) ;
void display ( struct student * ) ;
int count ( struct student *);
void findmid (struct student *);


int main() {
	struct student *p ;
	p=NULL;
	struct student s;
  	char ch[10];
	do {
		printf("Enter the id\n");
		scanf("%d",&s.id);
    		printf("Enter the name\n");
		scanf("%s",s.name); 
		printf("Enter the gender\n");
		scanf("%s",s.gender);
		s.link=NULL;
		append(&p,s);
    		printf("Do you want to add details of another student? Type Yes/No\n");
		scanf("%s",ch);
	} while(!strcmp(ch,"Yes"));
	printf("The details of the students are\n");
	printf("%4s %10s %7s\n","ID","Name","Gender");
	display(p);
	printf("The middle student in the list is \n");
	printf("%4s %10s %7s\n","ID","Name","Gender");
  	findmid(p);
  	printf("\n");
	return 0;
}

void append ( struct student **q, struct student s ) {
	struct student *temp =  *q, *nn = (struct student *)malloc(sizeof(struct student));
	nn->id = s.id;
	strcpy(nn->name,s.name);
	strcpy(nn->gender,s.gender);
	nn->link = NULL;
	
	if(!(*q)){
	     *q = nn;
	     return;
	}
	
	while(temp->link)   
	    temp = temp->link;
	temp->link = nn;
  }

void display ( struct student *q ) {
  struct student * temp=q;
  if(temp!=NULL)
  {

    printf("%4d ",temp->id);
    printf("%10s ",temp->name);
    printf("%7s ",temp->gender);
    printf("\n");      
    display(temp->link);
  }
}

int count ( struct student *q ) {
  struct student *temp=q;
  int c=0;
  while(temp!=NULL)
  {
    c=c+1;
    temp=temp->link;
  }
  return c;
}

void findmid ( struct student *q) {
  	int i = 1, count_ = count(q);
  	count_ += count_ & 1;
  	while(i < count_/2){
  	    q = q->link;
  	    i++;
  	}
  	printf("%4d %10s %7s \n",q->id,q->name,q->gender);
  }