#include<iostream>
#include<string>
using namespace std;

class Bank
{
private:
    string Password;
    string Username;
    int AccountNo;
public:
    void AddAccount(void);
    void Login(void);
    void ChequeBook(void);
    void DemateAccount(void);
    void AddNominee(void);
    void FundTransfer(void);
    void StopPayment(void);
    void BalanceInfo(void);
    
};
void Bank :: Login(void)//Password=Rishi12345 and Username=Rishi78
{
    
    cout<<"Username:";
    cin>>Username;
    cout<<"Password:";
    cin>>Password;
    if(Username=="Rishi78" && Password=="Rishi12345")
    {
        cout<<"Login succesful"<<endl;
        int choice;
        do
        {
            
            cout<<"1-Add Account"<<endl;
            cout<<"2-ChequeBook Required"<<endl;
            cout<<"3-Demate Status"<<endl;
            cout<<"4-Add Nominee"<<endl;
            cout<<"5-Fund Transfer"<<endl;
            cout<<"6-Stop Payment"<<endl;
            cout<<"7-Balance Info"<<endl;
            cout<<"8-Quit"<<endl;
            cout<<"Enter:";
            cin>>choice;

            switch (choice)
    {
            
            case 1: AddAccount();break;
            case 2: ChequeBook();break;
            case 3: DemateAccount();break;
            case 4: AddNominee();break;
            case 5: FundTransfer();break;
            case 6: StopPayment();break;
            case 7: BalanceInfo();break;
            case 8: break;
            default:cout<<"Error";
    }
        } while (choice!=8);
        
        
    }
    else
    {
        cout<<"Wrong Credentials"<<endl;
    }
    
   
}
void Bank::AddAccount(void)
{
    string s,b;
    int h;
    long double n;
    cout<<"-------------------------------"<<endl;
    cout<<"Name:";
    cin>>s;
    
    cout<<"Password:";
    cin>>b;
    
    cout<<"Pan Number:";
    cin>>h;
    
    cout<<"Phone Number:";
    cin>>n;
    cout<<"Account Created";
    cout<<"-------------------------------"<<endl;
}
void Bank :: ChequeBook(void)
{
    int u;
    cout<<"-------------------------------"<<endl;
    cout<<"Page-10"<<endl;
    cout<<"Page-25"<<endl;
    cout<<"Page-50"<<endl;
    cout<<"Page-100"<<endl;
    cout<<"Enter the Required:";
    cin>>u;
    cout<<"-------------------------------"<<endl;
}
void Bank :: DemateAccount(void)
{
    cout<<"-------------------------------"<<endl;
    cout<<"Stocks"<<endl;
    cout<<"TATA Steel:20"<<endl;
    cout<<"Suzlon Energy:56"<<endl;
    cout<<"Suzuki:15"<<endl;
    cout<<"Reliance:61"<<endl;
    cout<<"-------------------------------"<<endl;

}
void Bank :: AddNominee(void)
{
    string h;
    int j;
    cout<<"-------------------------------"<<endl;
    cout<<"Enter Name:";
    cin>>h;
    cout<<"OTP:";
    cin>>j;
    cout<<"-------------------------------"<<endl;
}
void Bank :: FundTransfer(void)
{
    string i,l;
    int y;
    cout<<"-------------------------------"<<endl;
    cout<<"IFSC CODE:";
    cin>>i;
    cout<<"Beneficiary Name:";
    cin>>l;
    cout<<"AccountNo:";
    cin>>y;
    cout<<"-------------------------------"<<endl;
}
void Bank :: StopPayment(void)
{
    int o,p;
    string date;
    cout<<"-------------------------------"<<endl;
    cout<<"Cheque Number:";
    cin>>o;
    cout<<"Amount:";
    cin>>p;
    cout<<"Date";
    cin>>date;
    cout<<"-------------------------------"<<endl;
}
void Bank :: BalanceInfo(void)
{
    cout<<"-------------------------------"<<endl;
    cout<<"Balance:5000/-"<<endl;
    cout<<"-------------------------------"<<endl;
}

int main()
{
    Bank k;
    int choice;

    cout<<"-----Admin Portal-----"<<endl;
    
    k.Login();
    
    return 0;
}