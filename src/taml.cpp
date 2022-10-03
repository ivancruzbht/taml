#include <stdexcept>
#include <vector>
#include <iostream>
#include "taco/tensor.h"

#include "tensor.hpp"
#include "taml.hpp"

using namespace std;

// Get Xd tensor from vector of vectors
template <typename T>
taml::Tensor taml::rand(string name, std::vector<int> shape, std::vector<int> format){
    taco::Tensor<T> tt(shape, taco::Format(format));



    tt.pack();
}
