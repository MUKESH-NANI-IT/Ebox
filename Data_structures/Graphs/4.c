#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*Queue has five properties. capacity stands for the maximum number of elements Queue can hold.
  Size stands for the current size of the Queue and elements is the array of elements. front is the
 index of first element (the index at which we remove the element) and rear is the index of last element
 (the index at which we insert the element) */
typedef struct Queue
{
	int capacity;
	int size;
	int front;
	int rear;
	int *elements;
}Queue;
/* crateQueue function takes argument the maximum number of elements the Queue can hold, creates
   a Queue according to it and returns a pointer to the Queue. */
Queue * CreateQueue(int maxElements)
{
	/* Create a Queue */
	Queue *Q;
	Q = (Queue *)malloc(sizeof(Queue));
	/* Initialise its properties */
	Q->elements = (int *)malloc(sizeof(int)*maxElements);
	Q->size = 0;
	Q->capacity = maxElements;
	Q->front = 0;
	Q->rear = -1;
	/* Return the pointer */
	return Q;
}
void Dequeue(Queue *Q)
{
	/* If Queue size is zero then it is empty. So we cannot pop */
	if(Q->size==0)
	{
		printf("Queue is Empty\n");
		return;
	}
	/* Removing an element is equivalent to incrementing index of front by one */
	else
	{
		Q->size--;
		Q->front++;
		/* As we fill elements in circular fashion */
		if(Q->front==Q->capacity)
		{
			Q->front=0;
		}
	}
	return;
}
int Front(Queue *Q)
{
	if(Q->size==0)
	{
		printf("Queue is Empty\n");
		exit(0);
	}
	/* Return the element which is at the front*/
	return Q->elements[Q->front];
}
void Enqueue(Queue *Q,int element)
{
	/* If the Queue is full, we cannot push an element into it as there is no space for it.*/
	if(Q->size == Q->capacity)
	{
		printf("Queue is Full\n");
	}
	else
	{
		Q->size++;
		Q->rear = Q->rear + 1;
		/* As we fill the queue in circular fashion */
		if(Q->rear == Q->capacity)
		{
			Q->rear = 0;
		}
		/* Insert the element in its rear side */ 
		Q->elements[Q->rear] = element;
	}
	return;
}



void Bfs(int **graph, int *size, int presentVertex,int *visited, int V)
{
    /*---------Fill your code here ---------------*/
    int j,s;
    Queue *a=CreateQueue(V);
    visited[presentVertex]=1;
    Enqueue(a,presentVertex);
    while(a->size)
    {
        s=Front(a);
        Dequeue(a);
        printf("%d ",s);
        visited[s]=1;
        for(j=0;j<size[s];j++)
        {
            if(visited[graph[s][j]]==0)
            {
                visited[graph[s][j]]=1;
                Enqueue(a,graph[s][j]);
            }
        }
    }
}
int main()
{
	int **graph,*size,*visited;
	int vertices,edges,i;
	int snode,enode;
	char directed[4];
	/* vertices represent number of vertices and edges represent number of edges in the graph. */
	printf("Enter the number of nodes in the graph\n");
	scanf("%d",&vertices);
	
	printf("Enter the number of edges in the graph\n");
	scanf("%d",&edges);
	
	printf("Is the graph directed(yes/no)\n");
	scanf("%s",directed);
	
	graph = (int **)malloc(vertices * sizeof(int *));
	for(i=0;i<vertices;i++)
		*(graph+i) = (int *) calloc(vertices,sizeof(int));
	
	size = (int*)calloc(vertices,sizeof(int));
	visited = (int*)calloc(vertices,sizeof(int));
	for(i = 0;i<edges;i++)
	{
		printf("Enter the start node and end node of edge no %d\n",i);
		scanf("%d%d",&snode,&enode);
		if(strcmp(directed,"yes") == 0){
			graph[snode][size[snode]++] = enode;
		}
		else{
			graph[snode][size[snode]++] = enode;
			graph[enode][size[enode]++] = snode;
		}
	}
	int presentVertex;
	printf("Enter the starting node / vertex for breadth first traversal\n");
	scanf("%d",&presentVertex);
	printf("Breadth First Traversal starting from node %d\n",presentVertex);
	Bfs(graph,size,presentVertex,visited,vertices);
	for(presentVertex=0;presentVertex<vertices;presentVertex++)
	{
		if(!visited[presentVertex])
		{
			Bfs(graph,size,presentVertex,visited,vertices);
		}
	}
	return 0;
}ś