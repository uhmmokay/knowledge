#include "funcs.h"

int main()
{
    double x {getDouble()}, y {getDouble()};
    char z {getOperator()};
    printResult(x, y, z);
}