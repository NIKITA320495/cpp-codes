#include<iostream>
#include<queue>
using namespace std;
struct graph
{
    int v;
    int e;
    int adj[100][100];
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
    int val1,val2;
    for(int k=0;k<e;k++){
    cout<<"Which 2 vertices you want to join";
    cin>>val1>>val2;
    g->adj[val1][val2]=1;
    g->adj[val2][val1]=1;
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
void bfs(graph *g,int start,int v,int *vis)
{
    queue<int>q;
    q.push(start);
    vis[start]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<u;
        for(int i=0;i<g->v;i++)
        {
            if(vis[i]==0 && g->adj[u][i]==1)
            {
                q.push(i);
                vis[i]=1;
            }
        }
    }
}
void bfstraversal(graph *g,int v)
{
    int *vis=new int[v];
    for(int i=0;i<g->v;i++)
   {
       vis[i]=0;
   }
   for(int i=0;i<g->v;i++)
   {
       if(vis[i]==0)
       {
           bfs(g,i,v,vis);
       }
   }
}
int main()
{
    graph *g=new graph;
    g->v=4;
    g->e=4;
    adj(g,g->v,g->e);
    bfstraversal(g,g->v);
}
