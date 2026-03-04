#include<iostream>
using namespace std;
template <typename T>
class Calculator
{
private:
	T a;
	T b;
public:
	Calculator(T a ,T b) 
	{
		this->a = a;
		this->b = b;
	}
	T add()
	{
		T c = a + b;
		return c;
	}
	T sub()
	{
		T c = a - b;
		return c;
	}
	T mul()
	{
		T c = a * b;
		return c;
	}
	T div()
	{
		if (b != 0)
		{
			T D = a / b;
			return D;
		}
		else
		{
			cout << "Denominator never be zero" << endl;
		}
	}
	void show()
	{
		
		cout <<endl<< "Add: " << add();
		cout << endl << "Subtract: " << sub();
		cout << endl << "Multiply: " << mul();
		cout << endl << "Divide: " << div()<<endl;
	}
};
int main()
{
	Calculator <int> c1(3,4);
	Calculator <double> c2(2.145, 0);

	cout << endl << "    ---Integer calculator---   " << endl;
	c1.show();
	cout << endl << "  ---Double calculator---" << endl;
	c2.show();
	cout << "------------------------";
}
