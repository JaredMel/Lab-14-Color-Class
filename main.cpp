///******************************************************************************
//Description: This program will create a class called Color and create 3 objects
//using the class before print the values of each object.
//Author: Jared Melendez
//COMSC 210 Section 5293
//Date September 23, 2024
//Status: Done
///******************************************************************************

#include <iostream>
using namespace std;
//the Color class
class Color 
{
    private:
        //private variables
        int red, green, blue;
    public:
        //getters and setters
        int getRed() {return red;}
        int getGreen() {return green;}
        int getBlue() {return blue;}
        void setRed(int r) {red = r;}
        void setGreen(int g) {green = g;}
        void setBlue(int b) {blue = b;}
        //print method
        void print()
        {
            //Prints values
            cout << "Red: " << red << endl;
            cout << "Green: " << green << endl;
            cout << "Blue: " << blue << endl;
        }
};

//the main function
int main()
{
    //Declares and initilizes variables
    Color color1, color2, color3;
    //sets and prints color1
    color1.setRed(0);
    color1.setGreen(0);
    color1.setBlue(0);
    color1.print();
    //sets and prints color2
    color2.setRed(100);
    color2.setGreen(100);
    color2.setBlue(100);
    color2.print();
    //sets and prints color3
    color3.setRed(56);
    color3.setGreen(78);
    color3.setBlue(39);
    color3.print();
}