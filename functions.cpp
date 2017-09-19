#include <iostream>
using namespace std;

//task: define a function arithmetic() that takes two
//float as input parameter and it displays
//their sum, difference, and product
//function Prototype

void Arithmetic (float f1, float f2);

//main Program
int main()
{
    float num1, num2;
    char answer;

    while(1)
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        Arithmetic(num1, num2);
        cout<<"Do you want to do it again [y/n]?";
        cin>>answer;
        if(answer == 'n')
        {
            break;
        }

    }
    return 0;
}

//function definition
void Arithmetic (float f1, float f2)
{
    cout<<"The sum of f1 +f2 = "<< f1+f2<<endl;
    cout<<"The difference of f1 +f2 = "<< f1-f2<<endl;
    cout<<"The product of f1 +f2 = "<< f1*f2<<endl;
};