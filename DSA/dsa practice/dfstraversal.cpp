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
void dfs(graph* g,int u,int v,int *vis)
{
    vis[u]=1;
    cout<<u;
    for(int i=0;i<g->v;i++)
    {
        if(vis[i]==0)
        {
            dfs(g,i,v,vis);
        }
    }
}
void dfstraversal(graph *g,int v)
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
            dfs(g,i,v,vis);
        }
    }

}
int main()
{
    graph *g=new graph;
    g->v=4;
    g->e=4;
    dfstraversal(g,g->v);
}
