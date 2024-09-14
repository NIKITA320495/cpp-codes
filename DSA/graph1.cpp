#include<iostream>
using namespace std;

struct graph
{
    int v;
    int e;
    int adj[100][100];
};

void adjmatrix(graph *g, int v, int e)
{
    for(int i = 0; i < v; i++)
    {
        for(int j = 0; j < v; j++)
        {
            g->adj[i][j] = 0;
        }
    }
    int val1,val2;
    for(int i=0;i<e;i++)
    {
        cout<<"which two vertices you want to join";
        cin>>val1;
        cin>>val2;
        g->adj[val1][val2]=1;
        g->adj[val2][val1]=1;
    }

    for(int i = 0; i < v; i++)
    {
        for(int j = 0; j < v; j++)
        {
            cout << g->adj[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    graph *g = new graph; // Allocate memory for the graph structure
    adjmatrix(g, 4, 4);
    delete g; // Deallocate memory
}
