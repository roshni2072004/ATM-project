#include <iostream>
using namespace std;
void menu()
{
    cout << endl<<"**********Menu***********"<<endl;
    cout << "1. Check Amount" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "**********Menu***********"<<endl;
}
int main()
{
    
    double amount = 500;
    int choice;
    do
    {
        menu();
        cout<<"Choice:";
        cin>>choice;
        system("clear");
        switch (choice)
        {
            case 1:
                cout << "Total Balance :"
                    << "Rs." << amount << endl;
                    break;
            case 2:
                double Depositamt;
                cout<< "Enter the amount to Deposit: ";
                cin>> Depositamt;
                amount += Depositamt;
                break;
            case 3:
                double withrawamt;
                cout << "Enter the amount to Withdraw: ";
                cin >> withrawamt;
                if(withrawamt<= amount){
                    amount -= withrawamt;
                }
                else
                {
                    cout << "Not enough Money"<<endl;
                }
                break;

            case 4:
                cout<<"Thank you"<<endl<<"Have a nice day";
                exit;
        }
    } while (choice != 4);

    //system("pause>0");
    return 0;
}
