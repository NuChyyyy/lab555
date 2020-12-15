#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

double deg2rad(double x){
    double a = x*(M_PI/180);
    return a;
}

double rad2deg(double x){
    double a = x*(180/M_PI);
    return a;
}

double findXComponent(double l1, double l2, double a1, double a2){
    double X = l1*cos(a1)+l2*cos(a2);
    return X;
}

double findYComponent(double l1, double l2, double a1, double a2){
    double Y = l1*sin(a1)+l2*sin(a2);
    return Y;
}

double pythagoras(double X, double Y){
    double py = sqrt(pow(X,2)+pow(Y,2));
    return py;
}

void showResult(double o, double u){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n" << 
    "Length of the resultant vector = " << o << 
    "\nDirection of the resultant vector (deg) = " << u <<
    "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";

}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
