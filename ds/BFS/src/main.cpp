#include <iostream>
#include "bfs.h"

int main() {
    // std::cout << "Hello Easy C++ project!" << std::endl;
    Graph g(4); // example has 4 nodes (example is from geeksofgeeks.org)
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    std::cout<<"starting from vertex (2) - ";
    g.bfs(2);

}