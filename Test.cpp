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
    test07();
    test08();
    test09();
    test10();
    test11();
}
void Test::test01()
{
  Queue myT;
  std::cout<<"Test 1: Newly created Queue is empty: ";
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
  std::cout<<"Test 2: Enqueing a value makes the Queue not empty: ";
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
  std::cout<<"Test 3: Enqueue 5 on empty queue then peekFront returns 5: ";
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
  std::cout<<"Test 4: Enqueing multiple values and checking if peekfront is correct: ";
  myT.enqueue(1);
  myT.enqueue(2);
  myT.enqueue(3);
  myT.enqueue(4);
  if(myT.peekFront() == 1)
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
  std::cout<<"Test 5: Checking if Queue is empty after dequeuing all items: ";
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
  std::cout<<"Test 6: Checking if dequeue throws an runtime error if passed in an empty queue: ";
  try{
    myT.dequeue();
    std::cout<<"FAILED\n";
  } catch(std::runtime_error& rte) {
    std::cout<<"PASSED\n";
  }
}
void Test::test07()
{
  Queue myT;
  std::cout<<"Test 7: Checking if peek front throws an runtime error if passed when queue is empty: ";
  try{
    myT.peekFront();
    std::cout<<"FAILED\n";
  } catch(std::runtime_error& rte) {
    std::cout<<"PASSED\n";
  }
}

void Test::test08(){
  Queue myT;
  std::cout<<"Test 8: Enqueue 2 on empty queue and checking if peekfront is 2 ";
  myT.enqueue(2);
  if(myT.peekFront()==2){
    std::cout<<"PASSED\n";
  } else {
    std::cout<<"FAILED\n";
  }
}
void Test::test09(){
  Queue myT;
  std::cout<<"Test 9: Enqueing multiple values and then dequeuing and checking if peekfront is correct: ";
  myT.enqueue(1);
  myT.enqueue(2);
  myT.enqueue(3);
  myT.dequeue();
  myT.dequeue();
  if(myT.peekFront()==3){
    std::cout<<"PASSED\n";
  } else {
    std::cout<<"FAILED\n";
  }
}
void Test::test10(){
  Queue myT;
  std::cout<<"Test 10: Enqueing 1 and 2 and checking if peek front returns 1: ";
  myT.enqueue(1);
  myT.enqueue(2);
  if(myT.peekFront()==1){
    std::cout<<"PASSED\n";
  } else {
    std::cout<<"FAILED\n";
  }
}
void Test::test11()
{
  Queue myT;
  std::cout<<"Test 11: Checking if Queue is not empty after enqueing multiple values ";
  myT.enqueue(1);
  myT.enqueue(2);
  myT.enqueue(3);
  if(myT.isEmpty() != true)
  {
    std::cout<<"PASSED";
  }
  else
  {
    std::cout<<"FAILED";
  }
  std::cout<<"\n";
}
