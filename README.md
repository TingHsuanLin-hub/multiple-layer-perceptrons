# multiple-layer-perceptrons  
## How to Train the MLP  
1. Download the project.
2. Put the directory "images" into the root directory.
3. Compile main.cpp file and run it.  
## Explanation of File  
* main.cpp is main program.  
* ComputationalGraph.cpp defines graph for storing operations, variables(requiring gradient), data(No need gradient) and computes loss, gradients.  
* Operator.cpp, Add.cpp, multiply.cpp, sigmoid.cpp defines some operations with forward() and backward() function.  
* Data.cpp defines data object.  
* Variable.cpp defines variables object.
---
[Reference 1: Deep Learning From Scratch](https://www.codingame.com/playgrounds/9487/deep-learning-from-scratch---theory-and-implementation/computational-graphs)
