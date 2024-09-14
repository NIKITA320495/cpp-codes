#include<iostream>
#include<queue>
#include<limits>
using namespace std;
struct graph
{
    int v;
    int e;
    int adj[100][100];
    int w[100][100];//w[0][1]=12 w[1][0]=12
};
void adj(graph *g,int v,int e)
{
    int val1,weight,val2;
    for(int i=0;i<v;i++)
    {
        for (int j=0;j<v;j++)
        {
            g->adj[i][j]=0;
            g->w[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
    cout<<"which two vertices you want to join?";
    cin>>val1;
    cin>>val2;
    g->adj[val1][val2]=1;
    g->adj[val2][val1]=1;
    cout<<"enter the weight between"<<val1<<"and"<<val2;
    cin>>weight;
    g->w[val1][val2]=weight;
    g->w[val2][val1]=weight;
    }
    for(int i=0;i<v;i++)
    {
        for (int j=0;j<v;j++)
        {
            cout<<g->adj[i][j]<<" ";
        }

        cout<<endl;
    }

}
int* printadj(graph *g,int v,int ver,int &size)
{
    int count=0;
    int *adjver=new int[v];
    for (int i=0;i<v;i++)
        {
            if(g->adj[i][ver]==1)
            {
                adjver[count++]=i;
            }
        }
        size=count;
        return adjver;
}

void prims(graph *g,int v)
{
    queue<int>q;
    int count=0;
    int key[v];
    for (int i = 0; i<v; ++i) {
        key[i] = numeric_limits<int>::max();
    }
    key[0]=0;
    int u,vi;
    q.push(0);
    while(!q.empty()){
    int u=q.front();
    q.pop();
    int *arr;
    int arraysize;
    arr=printadj(g,v,u,arraysize);
    for(int i=0;i<arraysize;i++)
    {
        vi=arr[i];
        if(g->w[u][vi]<key[vi])
        {
            key[vi]=g->w[u][vi];
            q.push(vi);
        }
    }
    }
    cout<<"minimum cost"<<endl;
    for(int i=0;i<v;i++)
    {
        cout<<key[i]<<endl;
    }

}
int main()
{
    graph *g=new graph;
    g->v=4;
    g->e=4;
    adj(g,5,7);
    prims(g,5);
}
