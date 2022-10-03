#ifndef TENSOR_H
#define TENSOR_H
#include "Eigen/Dense"
#include <tuple>

using namespace std;

namespace taml{
    class Tensor{
        public:
            Eigen::MatrixXd data;
            tuple<int, int> shape;
            Tensor(Eigen::MatrixXd data);
    };
}

#endif