#include "math.h"
class sigmoid{
    private:
        double former;
        double loss;
        double grad[];
    public:
        sigmoid(double a){
            former = a;
        };
        // ~sigmoid();
        double forward(){
            loss = 1/(1+exp(-former));
            return loss;
        }
        double * backward(double up){
            grad[0] = up*(1-loss)*loss;
            return grad;
        }
};