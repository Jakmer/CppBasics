#include <iostream>
#include <iomanip>

int main()
{
    double num = 123456789.987654321;
    double num2 = 123;

    std::cout<<"===================================="<<std::endl;
    std::cout<<num<<"   "<<num2<<std::endl;    //    1.23457e+08    123     - by default settprecision is set on 6
    std::cout<<"===================================="<<std::endl;

    //  std::setprecision manipulator
    std::cout<<std::setprecision(4)<<num<<std::endl;    //  1.235e+08
    std::cout<<std::setprecision(2)<<num<<std::endl;    //  1.2e+08

    std::cout<<std::setprecision(4)<<num2<<std::endl;    //  123
    std::cout<<std::setprecision(2)<<num2<<std::endl;    //  1.2e+02

    //  std::showpoint manipulator
    std::cout<<"===================================="<<std::endl<<std::showpoint<<std::setprecision(10);
    std::cout<<num<<std::endl;    //    12345679.0
    std::cout<<num2<<std::endl;    //    123.0000000

    // std::fixed manipulator
    std::cout<<std::fixed<<"===================================="<<std::endl;
    std::cout<<std::setprecision(4)<<num<<std::endl;    //  123456792.9877
    std::cout<<std::setprecision(2)<<num<<std::endl;    //  123456792.99

    std::cout<<std::setprecision(4)<<num2<<std::endl;    //  123.0000
    std::cout<<std::setprecision(2)<<num2<<std::endl;    //  123.00

    //  std::scientific +std::uppercase
    std::cout<<std::scientific<<std::uppercase<<"===================================="<<std::endl;
    std::cout<<std::setprecision(4)<<num<<std::endl;    //  1.2346e+08
    std::cout<<std::setprecision(2)<<num<<std::endl;    //  1.23e+08

    std::cout<<std::setprecision(4)<<num2<<std::endl;    //  1.2300e+02
    std::cout<<std::setprecision(2)<<num2<<std::endl;    //  1.23e+02

    //  show sign
    std::cout<<std::showpos<<std::fixed<<"===================================="<<std::endl;
    std::cout<<std::setprecision(4)<<num<<std::endl;    //  +123456789.9877
    std::cout<<std::setprecision(2)<<-num<<std::endl;    //  -123456789.99

    std::cout<<std::setprecision(4)<<num2<<std::endl;    //  +123.0000
    std::cout<<std::setprecision(2)<<-num2<<std::endl;    //  -123.00

    //  reset manipulators
    std::cout.unsetf(std::ios::fixed);
    std::cout.unsetf(std::ios::scientific);
    std::cout<<std::resetiosflags(std::ios::showpos);
    std::cout<<std::defaultfloat;

    std::cout<<"===================================="<<std::endl;
    std::cout<<num<<"   "<<num2<<std::endl;     //  dunno why it is still scientific manipulator
    

    return 0;
}