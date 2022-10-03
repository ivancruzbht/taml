#include <iostream>
#include <vector>
//#include "taml.hpp"
//#include "tensor.hpp"
#include "taco/tensor.h"

using namespace std;
using namespace taco;

int main()
{
    // Tensorial tn = Tensorial();
    //vector<vector<double>> v = {{1,2},{3,4}};
    // Tensor t = tn.getTensor(v);
    Tensor<double> A("A", {512,64,2048}, Format({Dense,Sparse,Sparse}));
    return 0;
}
