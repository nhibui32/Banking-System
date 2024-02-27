/*
Homework 2
Team: 7 
Team Members:
	- Member - Collin Mendoza: 33.3%
	- Member - Zaria Richards: 33.3%
	- Member - Ngoc Anh Nhi Bui: 33.3%

*/

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
		return 1;
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

double cust_007()
{
	fstream file;
	file.open("Cust_007.dat", ios::in | ios::out);

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

double cust_020()
{
	fstream file;
	file.open("Cust_020.dat", ios::in | ios::out);

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

double cust_400()
{
	fstream file;
	file.open("Cust_400.dat", ios::in | ios::out);

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
	// Variables:
	int option, sum;
	string ID;
	display_menu();

	// Processing
	do
	{
		cout << "Enter your option: ";
		cin >> option;
		if (option >4 || option < 1)
		{
			cout << "Input Invalidation. PLease enter again a number in range from 1 to 4. " << endl;
		}
	} while (option >4 || option < 1);

	switch(option)
	{
		case 1: // Account summary 
			cout << "Enter a 3-digit customer ID: ";
			cin >> ID;
			if (ID == "001")
			{
                sum = cust_001();
                cout << "The account balance is: " << sum << endl;
				
			}
			else if (ID == "007")
			{
				sum = cust_007();
                cout << "The account balance is: " << sum << endl;
			}
			else if (ID == "020")
			{
				sum = cust_020();
                cout << "The account balance is: " << sum << endl;
			}
			else if (ID == "400")
			{
				sum = cust_400();
                cout << "The account balance is: " << sum << endl;
			}
			else
			{
				cout << "Input Invalidation.";
			}
        break;

        case 2: // Deposit 
            cout << "Enter a 3-digit customer ID: ";
			cin >> ID;
			if (ID == "001")
			{
                double sum, deposit_amount, new_balance;
                sum = cust_001();
                cout << "The account balance is: " << sum << endl;
                cout << "Please enter the deposit amount: ";
                cin >> deposit_amount;
                new_balance = sum + deposit_amount;
                cout << "The current balance is: " << new_balance;
			}
			else if (ID == "007")
			{
                double sum, deposit_amount, new_balance;
                sum = cust_007();
                cout << "The account balance is: " << sum << endl;
                cout << "Please enter the deposit amount: ";
                cin >> deposit_amount;
                new_balance = sum + deposit_amount;
                cout << "The current balance is: " << new_balance;

			}
			else if (ID == "020")
			{
                double sum, deposit_amount, new_balance;
                sum = cust_020();
                cout << "The account balance is: " << sum << endl;
                cout << "Please enter the deposit amount: ";
                cin >> deposit_amount;
                new_balance = sum + deposit_amount;
                cout << "The current balance is: " << new_balance;

			}
			else if (ID == "400")
			{
                double sum, deposit_amount, new_balance;
                sum = cust_400();
                cout << "The account balance is: " << sum << endl;
                cout << "Please enter the deposit amount: ";
                cin >> deposit_amount;
                new_balance = sum + deposit_amount;
                cout << "The current balance is: " << new_balance;

			}
			else
			{
				cout << "Input Invalidation.";
			}
        break;

        case 3: // withdraw
			cout << "Enter a 3-digit customer ID: ";
			cin >> ID;
			if (ID == "001")
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
			}
			else if (ID == "007")
			{
                double sum, withdraw_amount, new_balance;
                sum = cust_007();
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
			}
			else if (ID == "020")
			{
                double sum, withdraw_amount, new_balance;
                sum = cust_020();
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
			}
			else if (ID == "400")
			{
                double sum, withdraw_amount, new_balance;
                sum = cust_400();
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
			}
			else
			{
				cout << "Input Invalidation.";
			}
        break;
        case 4:
        cout << "Thank you.";
	}
    return 0;
}


