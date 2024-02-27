/* Test code to run files*/
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
void display_menu()
{
	cout << "***Banking System***" << endl << endl;
	cout << "\t Select one option below:" << endl;
	cout << "\t 1. Account summary" << endl;
	cout << "\t 2. Deposit" << endl;
	cout << "\t 3. Withdraw" << endl;
	cout << "\t 4. Quit" << endl;
}
double cust_001()
{
	fstream file;
	file.open("Cust_001.dat", ios::in | ios::out);

    if(!file.is_open())
    {
        cout << "Failed to open the file." << endl;
		return 0;
    }

    string name;
    getline(file,name); //Read the name from the first line

    cout << "Bank User: " << name << endl;

    string line;
    int sum = 0;
    while (getline(file,line)) // Reads a line from the input stream 'file' store it in the string variable 'line'. Return true if the operation was sucessful and have more lines to read. 
    {
        stringstream ss(line);
        string date;
        int amount;
        // Read each line from the file
        ss >> date >> amount;
        //Display the data and amount
        cout << "Date: " << date << ", Amount: " << amount << endl;
        // Add the amount to the sum
        sum += amount; 
    }
	file.close();
    return sum;
}
int main ()
{
    double sum, withdraw_amount, new_balance;
    sum = cust_001();
    cout << "The account balance is: " << sum << endl;
    cout << "Please enter the withdraw amount: ";
    cin >> withdraw_amount;
    new_balance = sum - withdraw_amount;
    if (sum >= withdraw_amount)
    {
        cout << "The current balance is: " << new_balance;
    }
    else 
    cout << "Not enough money for the withdraw";
    return 0;
}