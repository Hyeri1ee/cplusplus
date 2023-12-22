/*
* finding the future value of a fixed investment
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//declaration of top-level functions
void input(double& invest, double& rate, double& term);
void process(double invest, double rate, double term,
	double& multiplier, double& futureValue);
void output(double invest, double rate, double term,
	double multiplier, double futureValue);

//declaration of low-level functions
double getInput(string message);
double findMultiplier(double rate, double period);
void printData(double invest, double rate, double term);
void printResult(double multiplier, double value);

int main() {
	//value declaration
	double invest, rate, term; //for input
	double multiplier, futureValue; //for result

	//call first level functions
	input(invest, rate, term);
	process(invest, rate, term, multiplier, futureValue);
	output(invest, rate, term, multiplier, futureValue);

	return 0;
}


void input(double& invest, double& rate, double& term)
{
	invest = getInput("Enter the value of investment:");
	rate = getInput("Enter the interest rate per year:");
	term = getInput("Enter the term (number of years:");
}

void process(double invest, double rate, double term,
	double& multiplier, double& futureValue)
{
	multiplier = findMultiplier(rate, term);
	futureValue = multiplier * invest;
}


void output(double invest, double rate, double term,
	double multiplier, double futureValue)
{
	printData(invest, rate, term);
	printResult(multiplier, futureValue);
}
//inside functions

double getInput(string message)
{
	double input;
	do
	{
		cout << message;
		cin >> input;
	} while (input < 0.0);
	return input;
}

double findMultiplier(double rate, double term)
{
	double factor = 1 + rate / 100;
	return pow(factor, term);
}

void printData(double invest, double rate, double term)
{
	cout << "\nInformation about investment" << endl;
	cout << "Investment:" << fixed << setprecision(2) << invest << endl;
	cout << "Interest rate:" << rate << fixed << setprecision(2);
	cout << "percent per year" << endl;
	cout << "Term:" << term << "years" << endl<<endl;
}

void printResult(double multiplier, double futureValue)
{
	cout << "Investment is multiplied by:" << fixed << setprecision(8);
	cout << multiplier << endl;
	cout << "Future value:" << fixed << setprecision(2);
	cout << futureValue << endl;
}
