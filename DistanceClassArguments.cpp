
// File: DistanceClassArguments
// Created by Javier Zarate on 9/21/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;
//task: define a calss distance
//that stores int feet and float inches
//two method: setDist-> set distance
//             getDist -> set the informatino with customer input
//             showDist -> display vlues
// Constants, struct, classes
class Distance
{
private:
    int feet;
    float inches;
public:
    //constructor with no arguments
    Distance(): feet(0), inches(0)      // Constructor with no arguments
    {}
    //constructor with two arguments
    Distance(int ft, float in): feet(ft), inches(in)
    {}

    void setDist(int f, float i)
    {
        feet = f;
        inches = i;
    }
    void getDist()      // get user input
    {
        cout<<"\nEnter feet:";
        cin>>feet;
        cout<<"\nEnter inhces";
        cin>>inches;
    }
    void showDist()     //display information
    {
        cout<<"Feet "<< feet<<" and inches "<<inches<<endl;
    }
    void add_dist(Distance d1, Distance d2);
    Distance add_dist_tome(Distance d1);
};

// Prototypes


// Main Program Program

int main(void)
{
    //create an instance "instantiate" the class

    Distance d1, d4;
    cout<<"\nd1 = ";

    d1.showDist();

    Distance d2(8, 2);
    Distance d3(2, 4);
    cout<<"\nd2 = ";

    d2.showDist();
    cout<<"\nd3 = ";

    d3.showDist();

    d4.add_dist(d2,d3);
    cout<<"d4 = ";
    d4.showDist();

    d4= d4.add_dist_tome(d2);
    cout<<"\nd4 new =";
    d4.showDist();

    return 0;

}

// Function Definitions
//Belongs to the class. A method for members only
// Template: CLASSNAME::Function_name()
// 1)declare protptype inside class
// 2)the scope resolution operator::
//3) use the scope resolution operator::
void Distance::add_dist(Distance d1, Distance d2)
{
    inches = d1.inches+d2.inches; //add the inches
    feet =0;
    if(inches>= 12.0)
    {
        inches-=12.0;
        feet++;             //check for extra foot
    }
    feet += d1.feet + d2.feet;      //add feet
}
Distance Distance::add_dist_tome(Distance d1)
{
    Distance temp;
    temp.inches = inches+ d1.inches;
    if(temp.inches >= 12.0)
    {
    temp.inches -= 12.00;

    temp.feet += 1;
    }


}
