
// Name : Project2.cpp
// Author : Cody Sisson



#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	//Declare variables
	float initialInvestment;
	float monthlyDeposit;
	float annualInterest;
	float months;
	float years;
	float totalAmount;
	float interestAmount;
	float yearlyTotalInterest;


	//user input
	cout << "===================================" << endl;
	cout << "             Data Input            " << endl;
	cout << "Initial Investment Amount: $" << endl;
	cout << "===================================" << endl;
	cin >> initialInvestment;

	cout << "===================================" << endl;
	cout << "Monthly Deposit: $" << endl;
	cout << "===================================" << endl;
	cin >> monthlyDeposit;

	cout << "===================================" << endl;
	cout << "Annual Interest: %" << endl;
	cout << "===================================" << endl;
	cin >> annualInterest;

	cout << "===================================" << endl;
	cout << "Number of years: " << endl;
	cout << "===================================" << endl;
	cin >> years;

	months = years * 12;

	system("PAUSE");

	//Update total to initialInvestment
	totalAmount = initialInvestment;

	//Display year end data without monthly deposits
	cout << "================================================================" << endl;
	cout << endl << "Balance and Interest Without Monthly Deposits" << endl;
	cout << "================================================================" << endl;
	cout << "Year          Year End Balance          Year End Earned Interest" << endl;
	cout << "----------------------------------------------------------------" << endl;

	//Calculate yearly interest and year end total
	for (int i = 0; i < years; i++) {

		interestAmount = ((totalAmount) * (annualInterest / 100));
		totalAmount = totalAmount + interestAmount;
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << interestAmount << endl;
	}

	//Calculate monthly interest and end month total
	totalAmount = initialInvestment;

	//Display year end data with deposits
	cout << "================================================================" << endl;
	cout << endl << "Balance and Interest With Monthly Deposits" << endl;
	cout << "================================================================" << endl;
	cout << "Year          Year End Balance          Year End Earned Interest" << endl;
	cout << "----------------------------------------------------------------" << endl;

	//Calculate yearly interest and year end total
	for (int i = 0; i < years; i++) {

		yearlyTotalInterest = 0;

		for (int j = 0; j < 12; j++) {

			interestAmount = (((totalAmount + monthlyDeposit) * (annualInterest / 100)) / 12);

			yearlyTotalInterest = yearlyTotalInterest + interestAmount;

			totalAmount = totalAmount + monthlyDeposit + interestAmount;
		}

		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << yearlyTotalInterest << endl;
	}
	return 0;
}
