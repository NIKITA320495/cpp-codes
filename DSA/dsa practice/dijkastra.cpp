#include<iostream>
#include<queue>
#include<limits>
using namespace std;

struct graph {
    int v;
    int e;
    int adj[100][100];
    int w[100][100];
};

void adj(graph *g, int v, int e) {
    for(int i = 0; i < v; i++) {
        for(int j = 0; j < v; j++) {
            g->adj[i][j] = 0;
        }
    }
    int val1, val2, weight;
    for(int k = 0; k < e; k++) {
        cout << "Which 2 vertices you want to join: ";
        cin >> val1 >> val2;
        g->adj[val1][val2] = 1;
        g->adj[val2][val1] = 1;
        cout << "Write the weight between the edges: ";
        cin >> weight;
        g->w[val1][val2] = weight;
        g->w[val2][val1] = weight;
    }
    for(int i = 0; i < v; i++) {
        for(int j = 0; j < v; j++) {
            cout << g->adj[i][j];
        }
        cout << endl;
    }
}

int* printadj(graph* g, int v, int ver, int& size) {
    int count = 0;
    int* adjver = new int[v];
    for(int i = 0; i < v; i++) {
        if(g->adj[i][ver] == 1) {
            adjver[count++] = i;
        }
    }
    size = count;
    return adjver;
}

void relax(graph* g, int u, int vi, int w, int d[]) {
    if(d[vi] > d[w] + g->w[u][vi]) {
        d[vi] = d[w] + g->w[u][vi];
    }
}

void dijkstra(graph* g, int v, int s) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int d[v];
    bool visited[v];
    for(int i = 0; i < v; i++) {
        d[i] = INT_MAX;
        visited[i] = false;
    }
    d[s] = 0;
    pq.push({0, s});
    while(!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        if(visited[u]) continue;
        visited[u] = true;
        int* arr;
        int arraysize;
        arr = printadj(g, v, u, arraysize);
        for(int i = 0; i < arraysize; i++) {
            int vi = arr[i];
            if(!visited[vi]) {
                relax(g, u, vi, u, d);
                pq.push({d[vi], vi});
            }
        }
    }
    for(int i = 0; i < v; i++) {
        if(d[i] != INT_MAX) {
            cout << d[i] << endl;
        }
    }
}

int main() {
    graph* g = new graph;
    g->v = 4;
    g->e = 4;
    adj(g, g->v, g->e);
    dijkstra(g, g->v, 0);
    delete g; // Deallocate memory
    return 0;
}
