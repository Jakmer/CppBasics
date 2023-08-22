#include <iostream>

#define PI 3.1415926

#define MAX(a,b) ((a>b) ? a : b)

int main()
{
    std::cout<<"The area of circle with radious 5 is "<<5*5*PI<<'\n';   //  Preprocessor change PI for its equivalent

    std::cout<<"The maximum of 5 and 10 is: "<<MAX(5,10)<<'\n';

    return 0;
}