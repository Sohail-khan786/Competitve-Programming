#include<bits/stdc++.h>

using namespace std;

void addEdge(vector< pair<int , int> > adj[], int u , int v, int wt)
{
    adj[u].push_back(make_pair(v,wt));
    adj[v].push_back(make_pair(u,wt));
}

void printGraph(vector< pair<int , int> > adj[], int v)
{
    int i ,j,name,wt;

    for(i=0 ;i< v;i++)
    {
        ;
        for(vector< pair<int,int> >::iterator it = adj[i].begin() ; it != adj[i].end() ; it++)
        {
            wt = it->second;
            cout<<wt<<"  " ;
        }

        cout<<endl;
    }
}
int main()
{
    //u can define any Number Of veritices
    int v=5;

    vector< pair<int , int> > adj[v];

    addEdge(adj, 0, 1, 10);
    addEdge(adj, 0, 4, 20);
    addEdge(adj, 1, 2, 30);
    addEdge(adj, 1, 3, 40);
    addEdge(adj, 1, 4, 50);
    addEdge(adj, 2, 3, 60);
    addEdge(adj, 3, 4, 70);
    printGraph(adj, v);


    return 0;
}
