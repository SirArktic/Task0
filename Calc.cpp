#include <stdio.h>
#include <iostream>
#include <math.h>	

using namespace std;

int main()
{
    double a, b, c;
	setlocale(0, "");
    int p =1;
    while (p != 0)
    {
		cout << "1 - Addition\n2 - Subtraction\n3 - Involution\n0 - Exit\n";
		cin >> p;
		switch(p)
		{
		case 0: break;
		case 1: 
			cout <<"Enter first number:\n";
			cin >> a;
			cout <<"Enter second number:\n";
			cin >> b;
			c = a + b; break;
		case 2: 
			cout <<"Enter first number:\n";
			cin >> a;
			cout <<"Enter second number:\n";
			cin >> b;
			c = a - b; break;
		case 3: 
			cout <<"Enter first number:\n";
			cin >> a;
			cout <<"Enter second number:\n";
			cin >> b;
			c = pow(a,b); break;
		default:
			cout <<"\nU did something wrong :ñ\nTry it again!\n\n";
            continue;
        }
		cout <<"Answer: "<< c << endl;
    }
}