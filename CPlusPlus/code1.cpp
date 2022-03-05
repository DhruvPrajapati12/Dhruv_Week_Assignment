// Problem Statement:

// Write a program by creating an 'Employee' class having the following functions and print the
// final salary.
// 1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as
// parameters
// 2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
// 3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per
// day is more than 6 hours.

#include <iostream>
using namespace std;

//define Employee class

class Employee
{
    int salary, work;       //declaration of salary and number of hours of work per day data members

    public:

        void getInfo(int a, int b)  //getInfo() takes salary and number of hours of work per 
        {                           //day as a parameter and sets the value of it
            salary = a;
            work = b;
        }

        void AddSal()   //AddSal() adds 10$ salary if salary of employee is less than $500
        {
            if(salary < 500)
            {
                salary = salary + 10;
                cout << "Congratulations! Your salary is increased by 10$."<< endl;
            } 
        }

        void AddWork()  //AddWork() adds 5$ salary if work of the employee is more that 6 hours
        {
            if(work > 6)
            {
                salary = salary + 5;
                cout << "Congratulations! Your salary is increased by 5$."<< endl;
            }
        }

        int getSalary() //getSalary() function returns the salary of employee
        {
            return salary;
        }
};  // end of Employee class

int main()
{
    Employee e1;    //created object of Employee class
    int salary, work;       //declared salary and work variable

    cout << "Enter the salary of Employee: ";
    cin >> salary;      //taking salary from user
    cout << "Enter the number of hours of work per day of Employee: ";
    cin >> work;        //taking work from user

    e1.getInfo(salary, work);   //set data to object
    e1.AddSal();    //calling AddSal() member function
    e1.AddWork();   //calling AddWork() member function

    cout << "Final salary of employee is: " << e1.getSalary() << endl;

}   //end of main function