#include <iostream>
#include <random>
using namespace std;
#include "Main.h"
int main()
{
    //ex6(6);
	ex10();
    return 0;
}
void ex2()
{

    //std::cout << "Hello World!\n";
    int year;
	cout << "Enter a year: ";
    cin >> year;

	cout << "Year entered: " << year << endl;

}
void ex3() 
{
    int num1, num2;
	cout << "Enter first number: ";
    cin >> num1;
	cout << "Enter second number: ";
    cin >> num2;
    cout << "Sum = " << num1 + num2 << " Difference = " << num1 - num2 <<" Product = " << num1 * num2 << " Quotient" << num1/num2 <<" Remainder = " << num1%num2;
}
void ex4()
{
	double fahrenheit, celsius;
	std::cout << "Enter Temperature in Faranheit: ";
	std::cin >> fahrenheit;

	celsius = (fahrenheit - 32) * 1.8;
	cout << "Temperature in Celsius: " << celsius;
	

}
void ex5()
{
	double pounds, kg;
	cout << "Enter pounds: ";
	cin >> pounds;
	cout << "kg: " << pounds / 2.205;
}
int ex6(int max) 
{
	int min = 1;
	// Initialize a random number generator
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distrib(min, max);

	// Generate random number in the range [min, max]
	int randomValue = distrib(gen);
	cout << "Random number between " << min << " and "
		<< max << " is " << randomValue << endl;
	return randomValue;
	
}
void ex7()
{
	int numSidedDice;
	cout << "Enter numnber sided Dice ";
	cin >> numSidedDice;
	cout << "output roll of a six sided dice " << rand() % numSidedDice;
}
void ex8()
{
	int total = 0;
	for (int i = 0; i < 10; i++) 
	{

		int roll1 = ex6(6);
		int roll2 = ex6(6);
		cout << "--------------------------------------\n";
		if ((roll1 + roll2)==7)
		{
			total++;
		}
	}
	cout << "number of times a total of 7 is rolled from a pair of 6 sided dice: " << total;

	
}

void ex9()
{
	int age;
	string name;
	cout << "Enter name: ";
	cin >> name;

	

	do
	{
		cout << "Enter Age: ";
		cin >> age;
	} while (age < 2 || age>150);

}

void ex10() 
{
	int num[3];
	int temp;
	bool flag;
	
	for (int i = 0; i < 3; i++)
	{
		
		do {

			flag = true;
			cout << "Enter number: \n";
			cin >> temp;
			if (temp > 9 || temp < 0)
			{
				cout << "number must be between 0 and 9 \n";
				flag = false;
			}
			else
			{
				for (int j = 0; j < i; j++)
				{
					if (temp == num[j])
					{
						cout << "input must not be a repeated value.\n";
						flag = false;
						break;
					}
				}
			}
		} while (!flag);
		num[i] = temp;
	}
	cout << "Numbers: " << num[0] << ", " << num[1] << ", " << num[2] << endl;
	

}