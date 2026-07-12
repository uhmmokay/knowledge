#include <iostream>
#include <string>

void doit(int x);
void printstatus(int x, int y, std::string func);

int main()
{
    int x {3}, y {4};
    printstatus(x, y, "main");
    doit(x);
    printstatus(x, y, "main");
}

void doit(int x)
{
    int y {3};
    printstatus(x, y, "doit");
    x = x*2;
    printstatus(x, y, "doit");

}

void printstatus(int x, int y, std::string func)
{
    std::cout << func << ": int x = " << x << ", int y = " << y << std::endl;
}
// lol, now i see how functions works.