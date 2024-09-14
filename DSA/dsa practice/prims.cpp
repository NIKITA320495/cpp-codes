#include<iostream>
#include<queue>
#include<limits>
using namespace std;
struct graph
{
    int v;
    int e;
    int adj[100][100];
    int w[100][100];
};
void adj(graph *g,int v,int e)
{
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            g->adj[i][j]=0;
        }
    }
    int val1,val2,weight;
    for(int k=0;k<e;k++){
    cout<<"Which 2 vertices you want to join";
    cin>>val1>>val2;
    g->adj[val1][val2]=1;
    g->adj[val2][val1]=1;
    cout<<"write the weight between the edges";
    cin>>weight;
    g->w[val1][val2]=weight;
    g->w[val2][val1]=weight;
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cout<<g->adj[i][j];
        }
        cout<<endl;
    }
}
int *printadj(graph*g,int v,int ver,int &size)
{
    int count=0;
    int*adjver=new int[v];
    for(int i=0;i<v;i++)
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
    int inMST[v] = {0};
    for(int i=0;i<v;i++)
    {
        key[i]=INT_MAX;
    }
    key[0]=0;
    int u,vi;
    q.push(0);
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        inMST[u] = 1;
        int *arr;
        int arraysize;
        arr=printadj(g,v,u,arraysize);
        for(int i=0;i<arraysize;i++)
        {
            vi=arr[i];
            if(!inMST[vi]&&g->w[u][vi]<key[vi])
            {
                key[vi]=g->w[u][vi];
                q.push(vi);
            }
        }
    }
    for(int i=0;i<v;i++)
    {
        cout<<key[i]<<endl;
    }
}
int main()
{
    graph *g=new graph;
    g->v=6;
    g->e=6;
    adj(g,g->v,g->e);
    prims(g,g->v);
}


