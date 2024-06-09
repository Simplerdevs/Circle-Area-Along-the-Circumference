
                                    /* Program To Calculate Circle Area Along the Circumference then print it on screen */

#include <iostream>
#include <cmath>
using namespace std;


int main()

{
    
    double C;
    cout << "Please Enter the Circumference ! " << endl;
    cin >> C;


    const double PI = 3.14159265358979323846;
    double Area = (C * C) / (4 * PI);
   
    cout << "The area of the circle is : "  << Area<< endl;


    return 0;

    // Created by @ilyes_Trabelsi

}
