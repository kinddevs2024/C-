#include <iostream>
#include <cmath>


using namespace std;
int main()
{

    // float x_1 = 14.26;
    // float z_0 = 3.5*pow(10,-2);
    // float r = fabs(x_1 - z_0 * x_1);
    // float t = pow(z_0,2);
    // float i = 3- t /(-5);
    // float kas = t / i;
    // float javobi = r + kas ;
    // cout << "\nbeshinchi savol javobi : " << e;
    float x = 0.1722;
    float y = 6.33-x;
    float z = pow((pow(3.25*x*10,-x)),y);
    float j1 = x+3* fabs(x-y)+pow(x,1.0/2);
    float j2 = fabs(x-y)*z+pow(x,1.0/2);
    float j = j1/j2;
    cout << "\no'ninchi savol javobi : " << j;
    return 0;
}