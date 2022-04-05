
class Add{
    private:
        double former;
        double later;
        double loss;
        double grad[];
    public:
        Add(double a, double b){
            former = a;
            later = b;
        }
        double forward(){
            loss = former+later;
            return loss;
        }
        double * backward(double up){
            for(int i = 1;i < 2; i++){
                grad[i] = up;
            }
            return grad;
        }
};
