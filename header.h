#pragma once
#include <iostream>

class MyClass {
  private:
    int a;
    int b;
    int c;

  public:
    MyClass() { std::cout << "MyClass\n"; }
    ~MyClass() { std::cout << "~MyClass\n";}

    void DoSomething()  {}
};

