//#include<iostream>
//using namespace std;
//int Max(int, int, int);
//int main()
//{
//	int  a, b, c, g;
//	cout << "a=";
//	cin >> a;//从键盘输入45
//	cout << "b=";
//	cin >> b;//从键盘输入67
//	cout << "c=";
//	cin >> c;//从键盘输入89
//
//	if (a == b && b == c)
//		cout << "the three numbers are eauql" << endl;
//	else
//	{
//		g = Max(a, b, c);
//		cout << "the greatest number is:" << g << endl;
//	}
//	return 0;
//
//}
//int Max(int x, int y, int z)
//{
//	int m;
//	if (x > y && x > z)
//		m = x;
//	else  if (y > x && y > z)
//		m = y;
//	else
//		m = z;
//	return m;
//}


//#include<iostream>
//using namespace std;
//class A
//{
//private:
//	int x, y, sum, product;
//public:
//	void fun(int i, int j)
//	{
//		x = i;
//		y = j;
//		sum = x + y;
//		product = x * y;
//	}
//	void show()
//	{
//		cout << x << "+" << y << "=" << sum << endl;
//		cout << x << "*" << y << "=" << product << endl;
//	}
//};
//int main()
//{
//	A a1;
//	a1.fun(20,30);
//	a1.show();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Test
//{
//private:
//	int n;
//public:
//	Test(int i=16)
//	{
//		n = --i;
//	}
//	int Get()
//	{
//		return n;
//	}
//	int Get() 
//		const {
//		return (n - 2);
//	}
//};
//int main()
//{
//	Test a;
//	const Test b(27);
//	cout << "The first number is" << a.Get() << endl;
//	cout << "The second number is" << b.Get() << endl;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//class A
//{
//protected:
//	int a;
//public:
//	A(int x) :a(x)
//	{
//		cout << "构造函数" << endl;
//	}
//	void show()
//		const {
//		cout << a << endl;
//	}
//};
//class B :public A
//{
//protected:
//	int b;
//public:
//	B(int x, int y) :A(x), b(y)
//	{
//		cout << "类的继承" << endl;
//	}
//	void show()
//		const {
//		cout << b << endl;
//	}
//};
//int main()
//{
//	B obj(18, 5);
//	obj.show();
//	obj.A::show();
//	return 0;
//}

//class A {
//	int_______________________;
//public:
//	int  a, b;
//	int funcl();
//private:
//	int  c, d;
//	_____________________;
//public:
//	char e;
//	int f;
//	int  func3();
//};




//#include <iostream>
//using namespace std;
//class A
//{
//	int a;
//public:
//	A(int n)
//	{
//		a = n;
//		cout << "A::a=" << a << endl;
//	}
//	~A() 
//	{
//		cout << "A的对象在消亡" << endl;
//	}
//};
//class B
//{
//	int b;
//public:
//	B(int nl, int n2)
//	{
//		b = nl;
//		cout << "B::b=" << b << endl;
//	}
//	~B()
//	{
//		cout << "B的对象在消亡" << endl;
//	}
//};
//class C :public A, public B
//{
//	int c;
//public:
//	C(int nl, int n2, int n3, int n4) :B(n3, n4), A(n2)
//	{
//		c = nl;
//		cout << "C::c=" << c << endl;
//	}
//		~C()
//		{
//			cout << "C的对象在消亡" << endl;
//		}
//	};
//	int main()
//	{
//		C Cobj(1, 3, 5, 7);
//		return 0;
//	}