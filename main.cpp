#include <bits/stdc++.h>
using namespace std;

class bank{
private:
    char name[100];
    char address[100];
    char type[100];
    int balance;
public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();

};

void bank:: open_account()
{
    cout<<"Enter your fullname"<<endl;
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your Address"<<endl;
    cin.ignore();
    cin.getline(address,100);
    cout<<"Enter Type of Account (Saving/Current)"<<endl;
    cin.ignore();
    cin.getline(type,100);
    cout<<"Enter amount to be deposited"<<endl;
    cin>>balance;
    cout<<"Your account has been created successfully"<<endl;
}

void bank:: deposit_money()
{
    int amount;
    cout<<"Enter the amount you want to deposit"<<endl;
    cin>>amount;
    balance = balance+amount;
    cout<<"Your amount has been deposited successfully"<<endl;
    cout<<"Total Balance is: "<<balance<<endl;
}
void bank::display_account()
{
    cout<<"Your Full Name: \t"<<name<<endl;
    cout<<"Your address :\t"<<address<<endl;
    cout<<"Type of Account: \t"<<type<<endl;
    cout<<"Total Balance is: \t"<<balance<<endl;
}
void bank::withdraw_money()
{
    int with;
    cout<<"Total Balance is: "<<balance<<endl;
    cout<<"Enter amount you want to withdraw "<<endl;
    cin>>with;
    if(with>balance)
    {
        cout<<"Please enter amount with in your balance"<<endl;
        return ;
    }
    else{
        balance= balance-with;
    }

    cout<<"Withdrawal amount is \t "<<with<<endl;
    cout<<"Total Remained Balance is: \t"<<balance<<endl;
    cout<<"Withdrawal Successful!"<<endl;

}
int main()
{
    int ch;
    char choice;
    bank obj;
    do
    {
        cout << "1) Open Account"<<endl;
        cout << "2) Deposit Money"<<endl;
        cout << "3) Withdraw Money"<<endl;
        cout << "4) Display Account"<<endl;
        cout << "5) Exit"<<endl;
        cout<<"Select the option from (1-5)"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:{
                    obj.open_account();
                    break;
            }
            case 2:{
                    obj.deposit_money();
                    break;
            }
            case 3:{
                    obj.withdraw_money();
                    break;
            }
            case 4:{
                    obj.display_account();
                    break;
            }
            case 5:{
                    exit(1);
            }
            default:{
                cout<<"Not a valid choice, try again.. "<<endl;

            }

        }
        cout<<"Do you want to proceed again...(y/n)"<<endl;
        cin>>choice;

    }while(choice=='y'|| choice=='Y');

    return 0;
}
