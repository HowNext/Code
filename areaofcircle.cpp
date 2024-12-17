#include<bits/stdc++.h>
using namespace std;

float findArea(float r)
{
    return (pi * r * r);
}

int main(){
   
   float r, Area;
    r = 5;

    // function calling
    Area = findArea(r);
    // displaying the area
    cout << "Area of Circle is :" << Area;
    return 0;

}