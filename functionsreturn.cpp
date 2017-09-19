


// File: functionsreturn.cpp
// Created by Javier Zarate on 9/14/17 for CS1410.
// Copyright (c) 2017 WSU
// define a function that takes one
//input parameter (integer), it increments the value
//by one, and it returs the new value to user

#include <iostream>
using namespace std;

// Constants


// Prototypes
int IncrementInt(int i); // an integer
void ReallyIncrementInt(int &i); // an address of an integer

// Main Program Program
int main()
{
    int num= 0;
    int num2 = 0;
    cout<<"num is "<< num<<endl;
    num2 = IncrementInt(num);
    cout<<"num2 is "<< num2<<endl;
    cout<<"num is "<< num<<endl;

    cout<<"Address of num: "<<&num<<endl;
    ReallyIncrementInt(num);
    cout<<"num is "<<num<<endl;

    return 0;
}

// Function Definitions
//passing parameters by value
int IncrementInt(int i)
{
    cout<<"address of I inside incrementInt: "<< &i<< endl;
    i += 1;
    return i;
}

//increment original integer by 1
//passing parameter by
//reference (pass address)
void ReallyIncrementInt(int &i)
{
    cout<<"address of I inside reallyincrementInt: "<< &i<< endl;
    i++;
}
