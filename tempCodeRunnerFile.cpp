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

double cust(string ID)
{
	fstream file;
	file.open("Cust_" + ID + ".dat", ios::in | ios::out);

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
	int option;
	string ID;
	double current_balance, deposit_amount, new_balance, withdraw_amount;
	display_menu();
	do 
	{
		cout << "Enter a 3-digit customer ID: ";
		cin >> ID;
		if (ID != "001" && ID != "007" && ID != "020" && ID !="400")
		{
			cout << "Input Invalidation. \n";
		}
	} while(ID != "001" && ID != "007" && ID != "020" && ID != "400");

	fstream file1;
	file1.open("Cust_" + ID + ".dat", ios::out | ios::app);

    if(!file1.is_open())
    {
        cout << "Failed to open the file." << endl;
		return 0;
    }
	

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
			if (ID == "001" || ID == "007" || ID == "020" || ID == "400")
			{
                current_balance = cust(ID);
                cout << "The account balance is: " << current_balance << endl;
			}
			else
			{
				cout << "Input Invalidation.";
			}
            
        break;

        case 2: // Deposit 
			if (ID == "001" || ID == "007" || ID == "020" || ID == "400")
			{
                current_balance = cust(ID);
                cout << "The account balance is: " << current_balance << endl;
                cout << "Please enter the deposit amount: ";
                cin >> deposit_amount;
                new_balance = current_balance + deposit_amount;
                cout << "The current balance is: " << new_balance;
				file1 << "The current balance is: " << new_balance;
			}
			else
			{
				cout << "Input Invalidation.";
			}
        break;

        case 3: // withdraw
			if (ID == "001" || ID == "007" || ID == "020" || ID == "400")
			{
                current_balance = cust(ID);
                cout << "The account balance is: " << current_balance << endl;
                cout << "Please enter the withdraw amount: ";
                cin >> withdraw_amount;
                new_balance = current_balance - withdraw_amount;
                if (current_balance >= withdraw_amount)
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
        default:
            cout << "Input Invalidation.";
	}
	/* fstream file;
	file.open("Cust_" + ID + ".dat", ios::in | ios::out);

    if(!file.is_open())
    {
        cout << "Failed to open the file." << endl;
		return 0;
    }
	file << "The current balance is: " << new_balance;
	file.close(); */
	file1.close();
    return 0;
}

