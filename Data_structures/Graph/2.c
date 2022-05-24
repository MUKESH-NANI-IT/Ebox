#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node ** convmattolist(int **,int,char *);
void printlist(struct node **,int);
void printadjmatrix(int **,int);
struct node* createnode(int,int );
struct node
{
	int nodeno;
	int edgeweight;
	struct node *link;
};



int main()
{
	int **A;
	int rows,edges,snode,enode,weight;
	int i;
	char directed[4];

	struct node **list;


	printf("Please enter the number of nodes in the graph\n");
	scanf("%d",&rows);

	printf("Please enter the number of edges in the graph\n");
	scanf("%d",&edges);

	printf("Is the graph directed\n");
	scanf("%s",directed);

	A = (int **)malloc(rows * sizeof(int *));
	for(i=0;i<rows;i++)
		*(A+i) = (int *) calloc(rows,sizeof(int));

	// Read the graph information and construct the adjacency matrix
	for(i=0;i<edges;i++){
	    
	printf("Enter the start node, end node and weight of edge no %d\n",i);
        scanf("%d%d%d",&snode,&enode,&weight);
	if(strcmp(directed,"yes")==0){
	     A[snode][enode] = weight;
	}
	else{A[snode][enode] = weight;
	    A[enode][snode] = weight;
	   
	}
	}
	list = convmattolist(A,rows,directed);
	printadjmatrix(A,rows);
	printlist(list,rows);
        return 0;

}


struct node ** convmattolist(int **A,int rows,char *dir)
{
	struct node **h = (struct node**)malloc(rows*(sizeof(struct node*)));
	int i,j;
	for(i=0;i<rows;i++){
	    *(h+i)=NULL;
	    for(j=0;j<rows;j++){
	        if(A[i][j]!=0){
	            if(*(h+i)==NULL){
	                *(h+i) = createnode(j,A[i][j]);
	            }
	            else{
	                struct node *t = *(h+i);
	                while(t->link!=NULL){
	                    t = t->link;
	                }
	                t->link = createnode(j,A[i][j]);
	            }
	        }
	    }
	}
	return h;
}

void printadjmatrix(int **A,int rows)
{
	printf("Adjacency Matrix Representation:\n");
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<rows;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
struct node* createnode(int ver,int w){
    struct node* nn = (struct node*)malloc(sizeof(struct node));
    nn->nodeno = ver;
    nn->edgeweight = w;
    nn->link = NULL;
    return nn;
}

void printlist(struct node **list,int rows)
{
	printf("Adjacency List Representation:\n");
    int i=0;
    for(i=0;i<rows;i++){
    int c=0;
    struct node *t=list[i];
    while(t!=NULL){
        if(c==0){
            printf("Node %d is connected to the following nodes:\n",i);
            c++;
        }
        if(t->edgeweight!=0){
                printf("Node %d with edge weight %d\n",t->nodeno,t->edgeweight);
        }t=t->link;
    }
}
}