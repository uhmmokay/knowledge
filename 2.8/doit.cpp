#include <iostream>
#include <string>

void printresult(int x, int y, std::string func);

void doit(int x, int y)
{
    y = y*2;
    printresult(x, y, "doit");
    x = x*3, y = y-1;
    printresult(x, y, "doit");

}