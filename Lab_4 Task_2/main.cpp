#include <iostream>
#include <string>


struct BankAccount {
    int accountNumber;
    std::string accountHolderName;
    double accountBalance;


    void createAccount() {
        std::cout << "Enter Account Number: ";
        std::cin >> accountNumber;
        std::cin.ignore();  // Clear the newline character from the buffer
        std::cout << "Enter Account Holder's Name: ";
        std::getline(std::cin, accountHolderName);
        std::cout << "Enter Initial Account Balance: ";
        std::cin >> accountBalance;
    }

    void deposit() {
        double amount;
        std::cout << "Enter the deposit amount: ";
        std::cin >> amount;
        accountBalance += amount;
        std::cout << "Deposit successful. New balance: " << accountBalance << std::endl;
    }

        void withdraw() {
        double amount;
        std::cout << "Enter the withdrawal amount: ";
        std::cin >> amount;
        if (amount <= accountBalance) {
            accountBalance -= amount;
            std::cout << "Withdrawal successful. New balance: " << accountBalance << std::endl;
        } else {
            std::cout << "Insufficient funds. Withdrawal failed." << std::endl;
        }
    }


    void displayAccount() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder's Name: " << accountHolderName << std::endl;
        std::cout << "Account Balance: " << accountBalance << std::endl;
    }
};

int main() {
    BankAccount account;

    int choice;

    do {
        std::cout << "\n      MENU:\n";
        std::cout << "1. Create Account\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Account Details\n";
        std::cout << "5. Exit\n";
        std::cout << "Select Option: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                account.createAccount();
                break;
            case 2:
                account.deposit();
                break;
            case 3:
                account.withdraw();
                break;
            case 4:
                account.displayAccount();
                break;
            case 5:
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
