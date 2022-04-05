#include "ComputationalGraph.cpp"
#include <iostream>

using namespace std;


int main(){
    Variable a(1);
    Variable b(1);
    Variable c(0);
    // Generate Computational Graph
    ComputationalGraph graph;
    string str("multiply");
    graph.add(str);
    str = "add";
    graph.add(str);
    str = "sigmoid";
    graph.add(str);
    graph.add(a);
    graph.add(b);
    graph.add(c);
    cout << graph.run() << endl;

    // graph.operation.push_back();
    return 0;
}