#include "bfs.h"

void Graph :: addEdge(int v, int w)
{
    adj[v].push_back(w); // adding w to v's list
}

void Graph :: bfs(int s)
{
    vector <bool> visited;
    visited.resize(v, false);

    // creating the queue
    list<int> queue;

    // making the current node visited
    visited[s] = true;
    queue.push_back(s);

    while(!queue.empty())
    {
        // dequeueing a vertex from the queue
        s = queue.front();

        // removing the front element
        queue.pop_front();

        // printing the popped element
        cout<< s << " ";

        for(auto adjecent : adj[s])
        {
            if(!visited[adjecent])
            {
                visited[adjecent] = true;
                queue.push_back(adjecent);
            }
        }
    }
}
