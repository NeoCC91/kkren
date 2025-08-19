#include <iostream>
#include <Eigen/Core>
#include <clipper2/clipper.h>

int main()
{
    std::cout << "hello world" << std::endl;
    Eigen::Vector3d v(1, 2, 3);
    Eigen::Vector3d v2(1, 2, 3);
    //v2.normalize();
    std::cout << v2.norm() << std::endl;
    Eigen::Matrix3d v3;
    v3.setZero();
    std::cout << v3 << std::endl;
    v3.col(0) = v;
    std::cout << v3 << std::endl;
    return 0;
}
