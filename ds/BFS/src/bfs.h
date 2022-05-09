#pragma once

#include<bits/stdc++.h>

using namespace std;

class Graph
{
    private:
        int v;
        vector <list<int>> adj;
    public:
        Graph( int v)
        {
            this->v = v;
            adj.resize(v);
        }

        void addEdge(int v, int w);
        void bfs(int s);
};