
#include <iostream>
using namespace std;

class Bank
{
private:
    int accountNumber;
    string accountHolderName;
    float balance;

public:
    void setDetails(int accNumber, string accName, float accBalance)
    {
        this->accountNumber = accNumber;
        this->accountHolderName = accName;
        this->balance = accBalance;
    }

    int getAccountNumber()
    {
        return accountNumber;
    }

    float deposit()
    {
        float depositAmount;
        cout << "------------" << endl;
        cout << "Enter amount to deposit: ";
        cin >> depositAmount;
        this->balance += depositAmount;
        cout << "Deposit successful. New Balance: " << this->balance << endl;
        cout << "------------" << endl;
        return this->balance;
    }

    float withdraw()
    {
        float withdrawAmount;
        cout << "------------" << endl;
        cout << "Enter amount to withdraw: ";
        cin >> withdrawAmount;
        if (withdrawAmount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            this->balance -= withdrawAmount;
            cout << "Withdrawal successful. New Balance: " << this->balance << endl;
        }
        cout << "------------" << endl;
        return this->balance;
    }

    void displayDetails()
    {
        cout << "------------" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
        cout << "------------" << endl;
    }
};

int main()
{
    Bank accounts[5];
    int userChoice;
    int totalAccounts = 0;
    int searchAccountNumber;
    string accountName;
    float initialBalance;
    bool accountFound;

    while (true)
    {
        cout << endl;
        cout << "------------" << endl;
        cout << "     Bank Menu     " << endl;
        cout << "------------" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Check Balance" << endl;
        cout << "3. Deposit" << endl;
        cout << "4. Withdraw" << endl;
        cout << "5. Exit" << endl;
        cout << "------------" << endl;
        cout << "Enter your choice: ";
        cin >> userChoice;

        if (userChoice == 5)
        {
            cout << "------------" << endl;
            cout << "Thank you for using our banking system!" << endl;
            cout << "------------" << endl;
            break;
        }

        switch (userChoice)
        {
        case 1:
            if (totalAccounts >= 5)
            {
                cout << "------------" << endl;
                cout << "Cannot create more accounts. Limit reached." << endl;
                cout << "------------" << endl;
                break;
            }

            cout << "Enter Account Number: ";
            cin >> searchAccountNumber;
            cout << "Enter Account Name: ";
            cin >> accountName;
            cout << "Enter Initial Balance: ";
            cin >> initialBalance;
            accounts[totalAccounts].setDetails(searchAccountNumber, accountName, initialBalance);
            totalAccounts++;
            cout << "------------" << endl;
            cout << "Account successfully created!" << endl;
            cout << "------------" << endl;
            break;

        case 2:
            cout << "Enter Account Number: ";
            cin >> searchAccountNumber;
            accountFound = false;
            for (int index = 0; index < totalAccounts; index++)
            {
                if (accounts[index].getAccountNumber() == searchAccountNumber)
                {
                    accounts[index].displayDetails();
                    accountFound = true;
                    break;
                }
            }
            if (!accountFound)
            {
                cout << "------------" << endl;
                cout << "Account not found" << endl;
                cout << "------------" << endl;
            }
            break;

        case 3:
            cout << "Enter Account Number: ";
            cin >> searchAccountNumber;
            accountFound = false;
            for (int index = 0; index < totalAccounts; index++)
            {
                if (accounts[index].getAccountNumber() == searchAccountNumber)
                {
                    accounts[index].deposit();
                    accountFound = true;
                    break;
                }
            }
            if (!accountFound)
            {
                cout << "------------" << endl;
                cout << "Account not found" << endl;
                cout << "------------" << endl;
            }
            break;

        case 4:
            cout << "Enter Account Number: ";
            cin >> searchAccountNumber;
            accountFound = false;
            for (int index = 0; index < totalAccounts; index++)
            {
                if (accounts[index].getAccountNumber() == searchAccountNumber)
                {
                    accounts[index].withdraw();
                    accountFound = true;
                    break;
                }
            }
            if (!accountFound)
            {
                cout << "------------" << endl;
                cout << "Account not found" << endl;
                cout << "------------" << endl;
            }
            break;

        default:
            cout << "------------" << endl;
            cout << "Invalid choice. Please try again." << endl;
            cout << "------------" << endl;
            break;
        }
    }

    return 0;
}



// output:-

// ------------
//      Bank Menu     
// ------------
// 1. Create Account
// 2. Check Balance
// 3. Deposit
// 4. Withdraw
// 5. Exit
// ------------
// Enter your choice: 1
// Enter Account Number: 7290
// Enter Account Name: kamleshbhai
// Enter Initial Balance: 40000
// ------------
// Account successfully created!
// ------------

// ------------
//      Bank Menu     
// ------------
// 1. Create Account
// 2. Check Balance
// 3. Deposit
// 4. Withdraw
// 5. Exit
// ------------
// Enter your choice: 1
// Enter Account Number: 5006
// Enter Account Name: metha
// Enter Initial Balance: 30000
// ------------
// Account successfully created!
// ------------

// ------------
//      Bank Menu     
// ------------
// 1. Create Account
// 2. Check Balance
// 3. Deposit
// 4. Withdraw
// 5. Exit
// ------------
// Enter your choice: 3
// Enter Account Number: 5006
// ------------
// Enter amount to deposit: 4000
// Deposit successful. New Balance: 34000
// ------------

// ------------
//      Bank Menu     
// ------------
// 1. Create Account
// 2. Check Balance
// 3. Deposit
// 4. Withdraw
// 5. Exit
// ------------
// Enter your choice: 4
// Enter Account Number: 5006
// ------------
// Enter amount to withdraw: 1000
// Withdrawal successful. New Balance: 33000
// ------------

// ------------
//      Bank Menu     
// ------------
// 1. Create Account
// 2. Check Balance
// 3. Deposit
// 4. Withdraw
// 5. Exit
// ------------
// Enter your choice: 5
// ------------
// Thank you for using our banking system!
// ------------
