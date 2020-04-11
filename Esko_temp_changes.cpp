#include<bits/stdc++.h>

using namespace std;

void addEdge(vector< pair<int , int> > adj[], int u , int v, int wt)
{
    adj[u].push_back(make_pair(v,wt));
}

//imp part
void printGraph(vector< pair<int , int> > adj[], int v)
{
    int i ,j,name,wt;

    for(i=0 ;i< v;i++)
    {
        ;
        for(vector< pair<int,int> >::iterator it = adj[i].begin() ; it != adj[i].end() ; it++)
        {
            wt = it->second;  //VVIP STEP
            cout<<wt<<"  " ;
        }

        cout<<endl;
    }
}
void display(vector<int> &p)
{
    int i;

    for(i=1;i<=p.size()-1;i++){
      i!=p.size()-1?cout<<p[i-1]<<"->": cout<<p[i-1];
    }

    cout<<"  "<<"cost of trip "<<p[p.size()-1]<<endl;
}

void traverse(int source , int destination , int visited[] , vector< pair<int , int> > adj[],vector<int> &p,vector< vector<int> > &allpaths,int sum)
{
    int i;
    visited[source] = 1;
    p.push_back(source);

    for(vector< pair<int , int> >::iterator it = adj[source].begin() ; it != adj[source].end() ; it++ )
    {
        if(it->first == destination)
        {
            sum = sum + it->second;
            p.push_back(it->first);
            p.push_back(sum);
            allpaths.push_back(p);
                        //allpaths.push_back(sum);
            p.pop_back();
            p.pop_back();
        }
        else if(visited[it->first]!=1)
        {

            sum = sum + it->second;
            traverse(it->first,destination,visited,adj,p,allpaths,sum);
            sum = sum - it->second;
        }
    }

    p.pop_back();
    visited[source] = 0;
}
bool comp(vector<int> &p1,vector<int> &p2)
{
    if(p1[p1.size()-1]!=p2[p2.size()-1])
    {
        return p1[p1.size()-1]<p2[p2.size()-1];
    }

    return p1.size()<p2.size();
}
int main()
{
    //u can define any Number Of veritices
    int v=5,i;

    vector< pair<int , int> > adj[v];
    int visited[v],sum=0;
    vector<int> p;
    vector< vector<int> > allpaths;

    addEdge(adj, 0, 1, 10);
    addEdge(adj, 0, 4, 20);
    addEdge(adj, 1, 2, 30);
    addEdge(adj, 1, 3, 40);
    addEdge(adj, 1, 4, 50);
    addEdge(adj, 2, 3, 60);
    addEdge(adj, 3, 4, 70);
    addEdge(adj, 2, 4, 80);

    fill(visited,visited+v,0);
    //printGraph(adj, v);

    traverse(0,4,visited,adj,p,allpaths,sum);

  sort(allpaths.begin(),allpaths.end(),comp);

    for(i=0;i<allpaths.size();i++)
        display(allpaths[i]);

    return 0;
}
