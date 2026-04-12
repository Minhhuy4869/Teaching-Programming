#include <iostream>
#include <vector>
using namespace std;

const int Max = 100;
bool visit[Max];
vector<int> edge[Max];
int V, E, start;

void DFS(int u) 
{
    visit[u] = true;
    cout<<u<<" ";
    for(int i=0; i<edge[u].size(); ++i) 
    {
        int v = edge[u][i];
        if(!visit[v]) 
        {
            DFS(v);
        }
    }
}

void print() 
{
    cin>>V>>E>>start;
    for(int i=0; i<E; ++i) 
    {
        int u, v;
        cin>>u>>v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    // Sắp xếp thủ công các danh sách kề
    for(int u=0; u<V; ++u) 
    {
        for(int i=0; i<edge[u].size(); ++i) 
        {
            for(int j=i+1; j<edge[u].size(); ++j) 
            {
                if(edge[u][i] > edge[u][j]) 
                {
                    swap(edge[u][i], edge[u][j]);
                }
            }
        }
    }
}

int main() 
{
    print();
    DFS(start);
    return 0;
}
