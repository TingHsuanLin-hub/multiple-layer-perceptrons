
class multiply
{
private:
    double former;
    double later;
    double loss;
    double grad[];
public:
    multiply(double a, double b){
        former = a;
        later = b;
    };
    // ~multiply();
    double forward(){
        loss = former*later;
        return loss;
    }
    double * backward(double up){
        grad[0] = up*later;
        grad[1] = up*former;
        return grad;
    }
};
