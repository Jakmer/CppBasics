#include <iostream>
#include <iomanip>
class MyExcept
{
    std::string message;

public:
    MyExcept(std::string &&m) : message(m){};
    std::string getMessage() const
    {
        return message;
    }
};

double
calculateBMI(int height, int weight)
{
    if (weight <= 0 || height <= 0)
        throw MyExcept("Values must be positive!\n");
    if (weight > 160 || height > 230)
        throw MyExcept("Unreal vaules!\n");

    return static_cast<double>(weight) / (height * height/10000.0);
}

int main()
{
    try
    {
        int height, weight;
        double bmi;
        std::cout << "Provide height: ";
        std::cin >> height;
        std::cout << "\nProvide weight: ";
        std::cin >> weight;
        bmi =  calculateBMI(height, weight);
        std::cout << "\n Your BMI: ";
        std::cout<<std::fixed  << std::setprecision(2) << bmi<< '\n';
    }
    catch (MyExcept &ex)
    {
        std::cerr << "Error: " << ex.getMessage() << '\n';
    }
    catch (...)
    {
        std::cerr << "Unknow exception!\n";
    }
}