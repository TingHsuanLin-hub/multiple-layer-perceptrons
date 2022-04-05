#include <vector>
#include "Data.cpp"
#include "Variable.cpp"
#include <string>
#include "Add.cpp"
#include "multiply.cpp"
#include "sigmoid.cpp"

using namespace std;

class  ComputationalGraph
{
private:
    /* data */

public:
    vector<string> operation;
    
    vector<Data> input;
    vector<Variable> variables;
    ComputationalGraph(){

    };
//     ~ ComputationalGraph
// ();
    void add(string ope){
        operation.push_back(ope);
    }
    void add(Data x){
        input.push_back(x);
    }
    void add(Variable var){
        variables.push_back(var);
    }

    double run(){
        int count = 0;
        for(int i = 0; i < operation.size();i++){
            if(operation[i]=="multiply"){
                multiply mul(variables[count].value,variables[count+1].value);
                count = count + 1;
                Variable product(mul.forward());
                variables[count] = product;
            }
            else if (operation[i] == "add")
            {
                Add ad(variables[count].value,variables[count+1].value);
                count = count + 1;
                Variable sum(ad.forward());
                variables[count] = sum;
            }
            else if (operation[i] == "sigmoid")
            {
                sigmoid sig(variables[count].value);
                count = count + 1;
                Variable act_out(sig.forward());
                variables[count] = act_out;
            }       
                
        }
        return variables[count].value; 
    }
    vector<double> gradient(){
        int count = 0;
        for(int i = operation.size(); i > 0;i--){
            if(operation[i]=="multiply"){
                multiply mul(variables[count].value,variables[count+1].value);
                count = count + 1;
                Variable product(mul.forward());
                variables[count] = product;
            }
            else if (operation[i] == "add")
            {
                Add ad(variables[count].value,variables[count+1].value);
                count = count + 1;
                Variable sum(ad.forward());
                variables[count] = sum;
            }
            else if (operation[i] == "sigmoid")
            {
                sigmoid sig(variables[count].value);
                count = count + 1;
                Variable act_out(sig.forward());
                variables[count] = act_out;
            }       
                
        }
        // return variables; 
    }

};

