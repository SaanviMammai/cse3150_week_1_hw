#include <iostream>
#include <string>
#include "MathUtils.h"
#include "AdvancedMath.h"
using namespace MathUtils;
using namespace AdvancedMath;


int main(){


    int a = 3;
    int b = 4;

    int c = add(a, b);
    std::cout << " a + b = " << c << " " << std::endl;

    int d = multiply(a, b);
    std::cout << " a * b = " << d << " " << std::endl;

    int e = square(a);
    std::cout << " square(a) = " << e << " " << std::endl;
    return 0;
}