#include<iostream>
using namespace std;
class bank{
    string name;
    int account_no;
    string account_type;
    int amount;
    float balance;
    public :
    bank();
    bank(string a,int b,string c,float d);
    void deposit(float a);
    void witdraw(float b);
    void display();
};
bank :: bank(){
    name="xyz";
    account_no=0;
    account_type="xyz";
    amount=0;
}
bank :: bank(string a,int b,string c,float d){
    name=a;
    account_no=b;
    account_type=c;
    amount=d;
}
void bank :: deposit(float a){
    cout << "Added amount " << amount << " Rs to the account" << endl;
    balance = balance + amount;
    cout << "Total Account Balance is " << balance << " Rs." << endl;
}
void bank :: witdraw(float a){
    if(balance < amount){
        cout<<"Insufficient balance "<<endl;
    }
    else{
        cout << "Withdrawn amount " << amount << " Rs from the account" << endl;
        balance = balance - amount;
        cout << "Total Account Balance is " << balance << " Rs." << endl;
    }
}
 void bank::display()
{
    cout << "Name of Customer : " << name << endl
         << "Account Number : " << account_no << endl
         << "Type of Account : " << account_type << endl
         << "Balance : " << balance << " Rs." << endl;
}
int main(){
    bank coustomer[100];
    int i=0;
    int choice;
    int a;
    float b;
    string c;
    string d;
    cout<<"1.Register a customer\n2.Display account no\n3.Deposite amount\n4.Witdrawamount\n5.exit"<<endl;
    cout<<"Enter your choice : "<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Enter name :"<<endl;
            cin>>c;
            cout<<"Enter type of account"<<endl;
            cin>>d;
            cout<<"Enter initial deposite"<<endl;
            cin>>b;
            coustomer[i]=bank(c,a,d,b);
            cout<<"Account number assigned to customer is : "<<i<<endl;
            i++;
            break;
        case 2:
            cout << "Enter customer account number to display: ";
            cin >> a;
            if (a >= 0 )
            {
                coustomer[a].display();
            }
            else
            {
                cout << "Invalid Account Number." << endl;
            }
            break;
        case 3:
            cout << "Enter customer account number to display: ";
            cin >> a;
            if (a >= 0 )
            {
                cout<<"Enter amount to be deposited:"<<endl;
                cin>>d;
                coustomer[a].deposit(b);
            }
            else
            {
                cout << "Invalid Account Number." << endl;
            }
            break;
        case 4:
            cout << "Enter customer account number to display: ";
            cin >> a;
            if (a >= 0 )
            {
                cout<<"Enter amount to be witdraw:"<<endl;
                cin>>d;
                coustomer[a].witdraw(b);
            }
            else
            {
                cout << "Invalid Account Number." << endl;
            }
            break;
        case 5:
            cout<<"Exit the program"<<endl;
        default :
            cout<<"Invalid choice please try again!"<<endl;
    }
    return 0;
}