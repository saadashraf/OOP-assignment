#include<iostream>
#include<cstdio>

using namespace std;

class base
{
private:
	int i;
public:
	base()
	{
		this->i = 0;
		cout << "Base: i = " << i << endl;
	}
	base(int _i)
	{
		this->i = _i;
		cout << "Base: i = " << i << endl;
	}
	void print()
	{
		cout << "i at base : " << i << endl;
	}
};

class derived1 : virtual public base
{
public:
	derived1(int _i) :base(_i)
	{
		cout << "In derived 1" << endl;
	}
};

class derived2 : virtual public base
{
public:
	derived2(int _i) :base(_i)
	{
		cout << "In derived 2" << endl;
	}
};

class derived3 : public derived1
{
public:
	derived3(int _i) : derived1(_i)
	{
		cout << "In derived 3" << endl;
	}
};

class derived4 : public derived2
{
public:
	derived4(int _i) : derived2(_i)
	{
		cout << "In derived 4" << endl;
	}
};

class derived : public derived3, public derived4
{
public:
	derived(int _i) :derived4(10), derived3(20)
	{

	}
};

int main()
{
	derived1 ob1(10);
	derived2 ob2(20);
	derived3 ob3(30);
	derived4 ob4(40);
	derived ob(50);
}