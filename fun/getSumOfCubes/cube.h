#pragma once
#include <iostream>

namespace gSOC {

  int cube (int x)
  {
    if (x % 2 != 0)
    {
      
      return x*x*x;
    }else {
      return 0;
    }
  }


  int calc()
  {
    int y {0};
    for (int i {1}; i <= 100; ++i)
    {
      y += cube(i);
    } return y;

  }
}
