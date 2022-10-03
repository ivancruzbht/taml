#include "tensor.hpp"
#include <tuple>
#include "Eigen/Dense"

using namespace std;

namespace taml{
    Tensor::Tensor(Eigen::MatrixXd data){
        this->data = data;
    }
}
