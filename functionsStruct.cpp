
// File: functionsStruct
// Created by Javier Zarate on 9/14/17 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
using namespace std;
//task: create a function that displays the value
// x and y coordinate of a point

// Constants & structures
struct Point
{
    float x; //x value
    float y; //y value
};

// Prototypes
//the prototype must be defined after
//the structs
void DisplayPoint(struct Point p);


// Main Program Program

int main()
{
    Point first {2, 8};
    DisplayPoint(first);
    return 0;

}

// Function Definitions
void DisplayPoint(struct Point p)
{
    cout<<"x = "<<p.x<<endl;
    cout<<"y = "<<p.y<<endl;

}
