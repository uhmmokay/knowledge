#include "sum.h"

int main()
{
  std::string str1 = "123";
  std::string str2 = "456";
  std::string str3 = "789";

  std::cout << str1 << " + " << str2 << " + " << str3 << " = " << getsum(str1, str2, str3) << '\n';
  return 0;
}
