#include "Test.h"
#include <iostream>
#include <stdexcept>
#include <string>

Test::Test()
{

}

void Test::runTests()
{
    test01();
}
void Test::test01()
{
  Queue myT;
  bool n = true;
  std::cout<<" Test 1: size of empty list is zero: ";
  myT.isEmpty();
  if(myT.isEmpty() != n)
  {
    std::cout<<"Failed\n";
  }
  else
  {
    std::cout<<"Passed\n ";
  }
}
