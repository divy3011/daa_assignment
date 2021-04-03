#include <bits/stdc++.h>
using namespace std;

int vertices;
int getMinWeight(vector<int> min_weight, bool flag[]);
vector<int> Prim_Min_spanning_Tree(vector<vector<int>> graph);

int main()
{
    cout<<"***WE HAVE ASSUMED 1-BASED INDEXING***\n";
    cout<<"Enter the number of vertices in the graph: ";
    cin>>vertices;
	vector<vector<int>> graph(vertices,vector<int>(vertices,0));
    int edges;
    cout<<"Enter the number of edges in the graph: ";
    cin>>edges;
    for(int i=0; i<edges; i++){
        cout<<"Enter edge no: "<<i+1<<" joining as u v weight: ";
        int u,v,weight;
        cin>>u>>v>>weight;
        graph[u-1][v-1]=weight;
        graph[v-1][u-1]=weight;
    }
	vector<int> min_spanning_tree=Prim_Min_spanning_Tree(graph);
    cout<<"\n\n***The minimum Spanning Tree is based on 1-based indexing***\nEdge\t--->  Weight\n";
	for (int i = 1; i<vertices; i++)
		cout<<"("<<min_spanning_tree[i]+1<<" , "<<i+1<<")\t--->  "<<graph[i][min_spanning_tree[i]]<<endl;
	return 0;
}

int getMinWeight(vector<int> min_weight, bool flag[]){
	int min = INT_MAX, min_index;

	for(int v=0; v<vertices; v++)
		if (flag[v] == false && min_weight[v] < min){
			min = min_weight[v];
			min_index = v;
		}

	return min_index;
}

vector<int> Prim_Min_spanning_Tree(vector<vector<int>> graph){
	vector<int> min_spanning_tree(vertices),min_weight(vertices);
	bool flag[vertices];

	for(int i=0; i<vertices; i++){
		min_weight[i] = INT_MAX;
        flag[i] = false;
    }

	min_weight[0]=0;
	min_spanning_tree[0]=-1;

	for(int i=0; i<vertices-1; i++)
	{
		int u=getMinWeight(min_weight,flag);

		flag[u]=true;

		for(int v=0; v<vertices; v++)
			if (graph[u][v] && flag[v]==false && graph[u][v]<min_weight[v]){
				min_spanning_tree[v]=u;
                min_weight[v]=graph[u][v];
            }
	}
    return min_spanning_tree;
}