#include<iostream>
using namespace std;
#define MAX 100
#define initial 1
#define waiting 2
#define visited 3

int n;
int adj[MAX][MAX];
int state[MAX];
int queue[MAX], front = -1, rear = -1;

void create_graph();
void BF_traversal();
void bfs(int v);
void insert_queue(int vertex);
int delete_queue();
int isempty_queue();

int main() {
    create_graph();
    BF_traversal();
    return 0;
}

void create_graph() 
{
    int i, max_edges, origin, destin, isDirected;
    cout << "Enter number of vertices: ";
    cin >> n;
    cout << "Is the graph directed? (1 for Yes, 0 for No): ";
    cin >> isDirected;

    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            adj[i][j] = 0; 
        }
    }

    max_edges = isDirected ? n * (n - 1) : n * (n - 1) / 2;
    for (i = 0; i < max_edges; i++) {
        cout << "Enter edge (-1 -1 to quit): ";
        cin >> origin >> destin;
        
        if ((origin == -1) && (destin == -1))
            break;
            
        if (origin >= n || destin >= n || origin < 0 || destin < 0) 
		{
            cout << "Invalid edge!\n";
            i--;
            
        } 
		
		else 
		{
            adj[origin][destin] = 1; // Marking the adjacency for directed graph
            if (!isDirected) 
			{
                adj[destin][origin] = 1; // For undirected graph, mark both pairs
            }
        }
    }
}

void BF_traversal()
{
    int v;
    cout << "Enter starting vertex for breadth-first search: ";
    cin >> v;

    if (v < 0 || v >= n) 
	{
        cout << "Invalid starting vertex!" << endl;
        return;
    }

    for (int i = 0; i < n; i++)
        state[i] = initial;

    bfs(v);
}

void bfs(int v) {
    int i;
    insert_queue(v);
    state[v] = waiting;
    while (!isempty_queue()) 
	{
        v = delete_queue();
        cout << v << " ";
        state[v] = visited;
        for (i = 0; i < n; i++) 
		{
            if (adj[v][i] == 1 && state[i] == initial) 
			{
                insert_queue(i);
                state[i] = waiting;
            }
        }
    }
    cout << endl;
}

void insert_queue(int vertex) 
{
    if (rear == MAX - 1) 
	{
        cout << "Queue Overflow\n";
    } else
	{
        if (front == -1)
		{
            front = 0;
        }
        rear++;
        queue[rear] = vertex;
    }
}

int isempty_queue()
{
    return (front == -1 || front > rear);
}

int delete_queue()
 {
    int del_item;
    if (front == -1 || front > rear)
	 {
        cout << "Queue Underflow\n";
        exit(1);
    }
    del_item = queue[front];
    front++;
    if (front > rear) 
	{ 
        front = -1;
        rear = -1;
    }
    return del_item;
}

