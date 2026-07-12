#include <iostream>
#include <string>

void printresult(int x, int y, std::string func);
void doit(int x, int y);

int main()
{
    int x {3}, y {4};
    printresult(x, y, "main");
    doit(x, y);
    printresult(x, y, "main");
}