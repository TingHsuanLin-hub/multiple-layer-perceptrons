#include <iostream>
#include "math.h"

class Operator
{
private:
    /* data */
public:

    Operator(){
    }

    ~Operator(){
        //delete pointer;
    }
    
    virtual double forward();
    virtual double  * backward();

};

