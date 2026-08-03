#pragma once 
#include <iostream>
#include <cstdint>
#include <string>

std::int16_t getsum(std::string x, std::string y, std::string z)
{
  return std::stoi(x)+std::stoi(y)+std::stoi(z);
}
