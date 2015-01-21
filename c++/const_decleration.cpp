#include <iostream>


using namespace std;
class MyClass
{
private:
   mutable int counter;
public:

    MyClass() : counter(0) {}


  void Foo() 
    {
        counter++;
        std::cout << "Foo" << std::endl;
    }
    void Foo() const
    {
        counter++;
        std::cout << "Foo const" << std::endl;
    }

    int GetInvocations() const
    {
        return counter;
    }
};

int main(void)
{
    MyClass* cc = new MyClass();
    const MyClass* ccc = new MyClass();
    cc->Foo();
//    ccc->Foo();
    std::cout << "The MyClass instance has been invoked" << cc->GetInvocations() << " times" << endl; 
    delete cc;
    ccc = NULL;
    return 0;
}
