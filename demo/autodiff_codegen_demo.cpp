#include <iostream>
#include <vector>
#include <cmath>
#include <numbers> // C++20 引入
#include <Eigen/Dense>
#include <Eigen/Sparse>
#include <cppad/cppad.hpp>
#include <cppad/cg/cppadcg.hpp>

using namespace Eigen; // 习惯上使用 Eigen 命名空间