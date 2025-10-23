/* 
Code for Programming Excercise Number 8
Muhammad Haykal Faizul Haq
Pemrograman Dasar Kelas A
*/

// Circle Calculator Program

#include <iostream>
#include <cmath>
using namespace std;

// Define pi constant
const double pi = 3.1416;

// Define the distance function
double distance(double x1, double y1, double x2, double y2){
    double dist;
    dist = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return dist;
}

// Define the circumference function
double circumference(double r){
    double circ;
    circ = pi*(r*2);
    return circ;
}

// Define the area function
double area(double r){
    double ar;
    ar = pi*r*r;
    return ar;
}

// Main function
int main(){
double x1,y1,x2,y2;
double radius, circleCircumference, circleArea;

// Input the center point
cout << "Input coordinates for the center point\n"
     << "x1 = ";
cin >> x1;
cout << "y1 = ";
cin >> y1;

// Input the second point
cout << "Input coordinates for the second point\n"
     << "x2 = ";
cin >> x2;
cout << "y2 = ";
cin >> y2;

//Processes
radius = distance(x1,y1,x2,y2);
circleCircumference = circumference(radius);
circleArea = area(radius);

//Outputs
cout << "\nCircle radius = " << radius  
     << "\nCircle circumference = " << circleCircumference  
     << "\nCircle area = " << circleArea;

return 0;
}