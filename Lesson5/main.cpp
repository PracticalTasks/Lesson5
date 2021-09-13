#include<iostream>

using namespace std;

//TASK 1
template <class T>
class Pair1
{
	T var1;
	T var2;
public:
	Pair1(T _var1, T _var2) :var1(_var1), var2(_var2)
	{
	}

	T first()const
	{
		return var1;
	}

	T second()const
	{
		return var2;
	}
};

//TASK 2
template <class T1, class T2>
class Pair2
{
	T1 var1;
	T2 var2;
public:
	Pair2(T1 _var1, T2 _var2) : var1(_var1), var2(_var2)
	{
	}

	T1 first()const
	{
		return var1;
	}

	T2 second()const
	{
		return var2;
	}
};

//TASK 3
template <class T1, class T2>
class Pair
{
};

template <class T2>
class Pair<string, T2>
{
	string var1;
	T2 var2;
public:
	Pair()
	{

	}
	Pair(string _var1, T2 _var2) : var1(_var1), var2(_var2)
	{
	}

	string first()
	{
		return var1;
	}

	T2 second()
	{
		return var2;
	}

};

template <class T2>
class StringValuePair: public Pair<string, T2>
{
public:
	StringValuePair(string var1, T2 var2) : Pair <string, T2>(var1, var2)
	{

	}
};

int main()
{
	//Task 1
	{
		cout << "Task 1 \n";
		Pair1<int> p1(6, 9);
		cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

		const Pair1<double> p2(3.4, 7.8);
		cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
	}

	//Task 2
	{
		cout << "\n\nTask 2\n";
		Pair2<int, double> p1(6, 7.8);
		cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

		const Pair2<double, int> p2(3.4, 5);
		cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
	}

	//Task3
	{
		cout << "\n\nTask 3\n";
		StringValuePair<int> svp("Amazing", 7);
		std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
	}

	//Task 4
	{
		cout << "\n\nTask 4\n";
	}

}