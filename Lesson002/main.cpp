#include <iostream>

void reverse(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        std::swap(a[i], a[n - i - 1]);
    }
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << std::endl;
    }
}

int main()
{
    const int n = 5;
    int arr[n]{1, 2, 3, 4, 5};
    int *ptr = arr;
    display(arr, n);
    reverse(arr, n);
    display(arr, n);
    std::cout << ptr << std::endl;
    int i =0;
    while (true)
    {
        ptr ++;
        i++;
        std::cout << *ptr ;
        std::cout << "  "<<i<< std::endl;
    }

    return 0;
}