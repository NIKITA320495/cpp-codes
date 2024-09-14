#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class graph
{
    private:
    int e;
    vector<vector<int>>adj;
    public:
        int v;
        graph(int v, int e) : v(v), e(e), adj(v, vector<int>(v, 0)) {}
  void addEdge(int val1, int val2) {
        adj[val1][val2] = 1;
        adj[val2][val1] = 1;
    }
    void display(int v)
    {
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++)
            {
                cout<<adj[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void bfs(int start,vector<int>&vis)
{
    queue<int>q;
    q.push(start);
    vis[start]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<u;
        for(int i=0;i<v;i++)
        {
            if(vis[i]==0 && adj[u][i]==1)
            {
                q.push(i);
                vis[i]=1;
            }
        }
    }
}
void dfs(int u,vector<int>&vis)
{
    vis[u]=1;
    cout<<u;
    for(int i=0;i<v;i++)
    {
        if(vis[i]==0 && adj[u][i]==1)
        {
            dfs(i,vis);
        }
    }
}
};
void bfstraversal(graph &g)
{
    vector<int>vis(g.v, 0);
    for(int i=0;i<g.v;i++)
    {
        vis[i]=0;
    }
    for(int i=0;i<g.v;i++)
    {
        if(vis[i]==0)
        {
            g.bfs(i,vis);
        }
    }
}
void dfstraversal(graph &g)
{
    vector<int>vis(g.v, 0);
    for(int i=0;i<g.v;i++)
    {
        vis[i]=0;
    }
    for(int i=0;i<g.v;i++)
    {
        if(vis[i]==0)
        {
            g.dfs(i,vis);
        }
    }
}

int main()
{
    graph g(4,4);
    int val1,val2;
    for(int i=0;i<4;i++)
    {
        cout<<"Which vertices you want to join";
        cin>>val1>>val2;
        g.addEdge(val1,val2);
    }
    g.display(4);
    bfstraversal(g);
    dfstraversal(g);
}
