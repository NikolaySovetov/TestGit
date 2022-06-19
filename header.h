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

class NewClass {
  private:
    float a;
    float b;
    float c;

  public:
    NewClass() { std::cout << "NewClass\n"; }
    ~NewClass() { std::cout << "~NewClass\n";}

    void DoSomething()  {}
};
