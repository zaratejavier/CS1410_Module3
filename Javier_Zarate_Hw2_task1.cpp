// File: Javier_Zarate_Hw2_task1
// Created by Javier Zarate on 9/19/17 for CS1410.
// Copyright (c) 2017 WSU
//

#include <iostream>
using namespace std;

/*  Structures/Constants */
struct house
{
    int streetNum;
    char streetName[30];
    double price;
};

//Function Prototypes
struct house InputHouse(void);
void PrintHouse(int houseNum, struct house h);
int ComparePrices(struct house h1, struct house h2);

/* Main Program */
int main(int argc, char* argv[])
{
    cout<<"Enter info for first house\n";
    struct house firstHouse = InputHouse();
    cout<<"\nEnter info for second house\n";
    struct house secondHouse = InputHouse();

    PrintHouse(1, firstHouse);
    printf("\n\n");
    PrintHouse(2, secondHouse);
    printf("\n\n");

    int comparison = ComparePrices(firstHouse, secondHouse);

    switch (comparison)
    {
        case 1:
            cout<<"The first house is cheaper " <<endl;
            break;
        case 2:
            cout<<"The two houses are equally expensive "<<endl;
            break;
        case 3:
            cout<<"The second house is cheaper "<<endl;
            break;
        case 4:
            cout<<"Invalid camparison calue there must be a bug "<<endl;
    }

    return 0;
}
/* Function Definitions */
struct house InputHouse(void)
{
    house h;

    cout<<"Please enter the house number: "<<endl;
    cin>>h.streetNum;

    cout<<"Please enter street name: "<<endl;
    cin>>h.streetName;

    cout<<"Please enter the price: "<<endl;
    cin>>h.price;

    return h;
}

void PrintHouse(int houseNum, struct house h)
{
    cout << houseNum <<" house: at "<<h.streetNum<<" "<<h.streetName<<" for $["<<h.price<<"]"<<endl;
}

int ComparePrices(struct house h1, struct house h2)
{
    if( h1.price < h2.price)
    {
        return 1;
    }
    else if (h1.price == h2.price)
    {
        return 2;
    }
    else if( h1.price > h2.price)
    {
        return 3;
    }
    else
    {
        return 4;
    }
}
