

#include <iostream>


using namespace std;


class cents
{
private:
int num;

public:
cents(int num_)
{
num = num_;
}

int getNum()
{
return num;
}

bool operator>(cents &b)
{
return (num > b.getNum() ) ? true : false;
}
};

int main()
{
int temp;

cout << "enter a: " << endl;
cin >>  temp;
cents a(temp);

cout << "enter b: " << endl;
cin >>  temp;
cents b(temp);


if ( a > b)
{
cout << "a > b" << endl;
}

else
{
cout << "b > a" << endl;
}

return 0;
}

