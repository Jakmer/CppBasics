#include <iostream>
#include <math.h>

class Complex
{
private:
    double real;
    double imagin;

    double modulus() const
    {
        return sqrt(pow(real, 2) + pow(imagin, 2));
    }

public:
    Complex(double real = 0, double imagin = 0)
    {
        this->real = real;
        this->imagin = imagin;
    }

    Complex(const Complex &source) : real(source.real), imagin(source.imagin)
    {
    }

    Complex operator+(const Complex &source)
    {
        return Complex{this->real + source.real, this->imagin + source.imagin};
    }

    Complex operator*(const Complex &source)
    {
        return Complex{this->real * source.real - this->imagin * source.imagin, this->real * source.imagin + this->imagin * source.real};
    }

    friend std::ostream &operator<<(std::ostream &os, const Complex &source)
    {
        os << source.real << " + " << source.imagin << "i   modulus: " << source.modulus();
        return os;
    }

    friend std::istream &operator>>(std::istream &is, Complex &source)
    {
        char *buff1 = new char[10];
        char *buff2 = new char[10];
        is >> buff1 >> buff2;
        source = Complex{std::stod(buff1), std::stod(buff2)};
        delete[] buff1, buff2;

        return is;
    }
};

int main()
{
    Complex x;
    std::cin>>x;
    Complex z{5, 10};
    Complex y = z * x;
    z = y + x;
    Complex a{z};

    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << z << "\n";
    std::cout << a << "\n";
    return 0;
}