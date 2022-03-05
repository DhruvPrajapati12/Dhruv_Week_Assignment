// Problem Statement:

// Suppose you have a Piggie Bank with an initial amount of Rs.50 and you have to add some
// more amount to it. Create a class 'AddAmount' with a data member named 'amount' with an
// initial value of Rs. 50. Now make two constructors of this class as follows:
// 1 - without any parameter - no amount will be added to the Piggie Bank
// 2 - having a parameter which is the amount that will be added to the Piggie Bank
// Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank.

#include <iostream>
using namespace std;

//define AddAmount class

class AddAmount
{
    int amount=50;  //declare and initialize amount data member to 50Rs.

    public:

        AddAmount() //Default constructor which shows no amount will be added to the Piggie Bank 
        {
            amount += 0;
        }

        AddAmount(int add)  //Parameterized constructor which has 1 perameter(add amount) 
        {
            amount += add;
        }

        void displayAmount()    //displaying final amount
        {
            cout << "Final amount in the Piggie Bank: " << amount << endl;
        }
};  //end of AddAmount class

int main()
{
    int amount; //declaration of amount variable
    AddAmount p1;       //created object of AddAmount class
    cout << "For Piggie p1: " << endl;
    p1.displayAmount();

    cout << "How much amount do you want to add in Piggie p2: " << endl;
    cin >> amount;
    AddAmount p2(amount);   //created object of AddAmount class
    cout << "For Piggie p2: " << endl;
    p2.displayAmount();
    
}   //end of main function