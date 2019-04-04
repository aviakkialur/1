#include<iostream>

using namespace std;
class A
{
public:
    virtual const char* getName() { return "A"; }

};

class B: public A
{
public:
    virtual const char* getName() { return "B"; }
private:
    int number;
};

class C: public B
{
public:
    virtual const char* getName() { return "C"; }
};

class D: public C
{
public:
    virtual const char* getName() { return "D"; }
};
class F
{
public:

};
int main()
{
    C c;
    A &rBase = c;
    std::cout << "rBase is a " << rBase.getName() << '\n';

    return 0;
}
