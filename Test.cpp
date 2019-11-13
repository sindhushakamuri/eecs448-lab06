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
    test02();
    test03();
    test04();
    test05();
    test06();
}
void Test::test01()
{
  Queue myT;
  std::cout<<" Test 1: Newly created Queue is empty: ";
  if(myT.isEmpty() != true)
  {
    std::cout<<"FAILED";
  }
  else
  {
    std::cout<<"PASSED";
  }
  std::cout<<"\n";
}
void Test::test02()
{
  Queue myT;
  std::cout<<" Test 2: Enqueing a value makes the Queue not empty: ";
  myT.enqueue(1);
  if(myT.isEmpty() != false)
  {
    std::cout<<"FAILED";
  }
  else
  {
    std::cout<<"PASSED";
  }
  std::cout<<"\n";
}
void Test::test03()
{
  Queue myT;
  std::cout<<" Test 3: Enqueue 5 on empty queue then peekFront returns 5: ";
  if(myT.isEmpty())
  {
      myT.enqueue(5);
  }
  if(myT.peekFront() == 5)
  {
    std::cout<<"PASSED";
  }
  else
  {
    std::cout<<"FAILED";
  }
  std::cout<<"\n";
}
void Test::test04()
{
  Queue myT;
  std::cout<<" Test 4: Enqueing multiple values and checking if peekfront is correct: ";
  myT.enqueue(1);
  myT.enqueue(2);
  myT.enqueue(3);
  myT.enqueue(4);
  if(myT.peekFront() == 4)
  {
    std::cout<<"PASSED";
  }
  else
  {
    std::cout<<"FAILED";
  }
  std::cout<<"\n";
}
void Test::test05()
{
  Queue myT;
  std::cout<<" Test 5: Checking if Queue is empty after dequeuing: ";
  myT.enqueue(1);
  myT.enqueue(2);
  myT.dequeue();
  myT.dequeue();
  if(myT.isEmpty() != true)
  {
    std::cout<<"FAILED";
  }
  else
  {
    std::cout<<"PASSED";
  }
  std::cout<<"\n";
}
void Test::test06()
{
  Queue myT;
  std::cout<<" Test 6: Checking if peekfront returns correct value after enqueuing and dequeuing: ";
  myT.enqueue(1);
  myT.enqueue(3);
  myT.enqueue(5);
  myT.dequeue();
  myT.dequeue();
  if(myT.peekFront() == 5)
  {
    std::cout<<"PASSED";
  }
  else
  {
    std::cout<<"FAILED";
  }
  std::cout<<"\n";
}
