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
void relax(graph *g,int u,int vi,int w,int d[])
{
 if(d[vi]>d[w]+g->w[u][vi])
 {
     d[vi]=d[u]+g->w[u][vi];
 }
}
void dijkastra(graph *g, int v, int s) {
  queue<int> q;
  int d[v];
  bool visited[v];
  int u, vi;
  int w = s;

  for (int i = 0; i < v; ++i) {
    d[i] = INT_MAX;
    visited[i] = false;
  }

  d[s] = 0;
  q.push(s);

  while (!q.empty()) {
    u = q.front();
    q.pop();
    visited[u] = true;

    int *arr;
    int arraysize;
    arr = printadj(g, v, u, arraysize);

    for (int i = 0; i < arraysize; ++i) {
      vi = arr[i];

      if (!visited[vi]) {
        relax(g, u, vi, w, d);
        w = vi;
        q.push(vi);
      }
    }
  }

  for (int i = 0; i < v; ++i) {
    if (d[i] != INT_MAX) {
      cout << d[i] << endl;
    } else {
      cout << "UNREACHABLE" << endl;
    }
  }
}

int main()
{
    graph* g=new graph();
    g->v=8;
    g->e=11;
    adj(g,8,11);
    dijkastra(g,8,4);
}
