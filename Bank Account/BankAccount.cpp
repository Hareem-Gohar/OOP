#include <iostream>
#include <string>
using namespace std;
class BankAccount{
private:
    int accountNum;
    double balance;
public:
    string accountHolder;
    BankAccount(){
        accountHolder ="";
        accountNum = 0;
        balance = 0.0;
    }
    void setAccountInfo(int accNum, double bal, string accHolder){
        accountHolder = accHolder;
         accountNum = accNum;
        if(bal > 0){
             balance = bal;
        }
        else if( bal < 0){
            cout<<"Balance cannot be negative. Setting balance to 0.0"<<endl;
            balance = 0.0;
        }
    }
    void getAccountInfo(){
        cout<<"Account Holder Name:\n"<<accountHolder<<endl;
        cout<<"Account Number:\n"<<accountNum<<endl;
        cout<<"Your Balance is:\n"<<balance<<endl;
    }
    void deposit(int amount){
        if(amount > 0){
            cout<<"You want to deposit "<<amount<<"to your acount? Choose Y to proceed. (Y/N)"<<endl;
            char process;
            cin >> process;
            if(process == 'Y' || process == 'y'){
                balance = balance + amount;
            cout<<"Deposit successful. New balance: "<< balance<<endl;
            }
            else{
                cout<<"Deposit Unsuccessful."<<endl;
            }
        }
        else{
             cout << "Deposit amount must be positive." << endl;
        }
    }
    void withdraw(int amount){
         if(amount > 0){
           if (amount > balance) {
                cout << "Insufficient funds. Your current balance is: " << balance << endl;
           } 
            else {
                cout << "You want to withdraw " << amount << " from your account? Choose Y to proceed. (Y/N)" << endl;
                char process;
                cin >> process;
                if (process == 'Y' || process == 'y') {
                    balance -= amount;
                    cout << "Withdraw successful. New balance: " << balance << endl;
                } 
                else {
                    cout << "Withdraw Unsuccessful. Your current balance: " << balance << endl;
                }
            }
         }
        else{
             cout << "Withdraw amount must be positive." << endl;
        }
    }
};
int main(){
  BankAccount account;
    string name;
    int accountNum;
    double balance;
    int depositAmount, withdrawAmount;

    cout << "Enter account holder's name: ";
    cin >> name;
    cout << "Enter account number: ";
    cin >> accountNum;
    cout << "Enter initial balance: ";
    cin >> balance;

    account.setAccountInfo(accountNum, balance, name);
    account.getAccountInfo(); 
    char proceed;
    cout << "Do you want to make a transaction? (Deposit/Withdraw)" << endl;
    cout << "Press D for Deposit and W for Withdrawal." << endl;
    cin >> proceed;
            if(proceed == 'D' || proceed == 'd'){
                cout << "Enter deposit amount: ";
                cin >> depositAmount;
                account.deposit(depositAmount); 
            }
            else if(proceed == 'W' || proceed == 'w'){
                cout << "Enter withdrawal amount: ";
                cin >> withdrawAmount;
                account.withdraw(withdrawAmount);  
            }
            else{
                 cout << "Invalid choice. Going back." << endl;
            }
    return 0;
}