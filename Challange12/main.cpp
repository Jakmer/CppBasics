#include <iostream>

using std::cout, std::endl;

void print(const int *const arr, const size_t size);
int *apply_all(const int *a1, const size_t s1, const int *a2, const size_t s2);

class A
{
    public:
    int a;
    A(int b)
    {
        a=b;
    }
    ~A()
    {
        cout<<"Destruct"<<endl;
    }
    void display(A copy)
    {
        cout<<copy.a<<endl;
    }
};

int main()
{

    A* hero = new A(15);
    hero->display(*hero);

    int array1[]{1, 2, 3, 4, 5};
    int array2[]{10, 20, 30};
    //A* a=new A();

    print(array1, 5);
    print(array2, 3);
    int *new_array = apply_all(array1, 5, array2, 3);
    print(new_array, 15);

    delete[] new_array;
    
    return 0;
}

void print(const int *const arr, const size_t size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int *apply_all(const int *a1, const size_t s1, const int *a2, const size_t s2)
{
    int *new_array = new int[s1 * s2];

    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            cout << *(a1 + i) << " " << *(a2 + j) << endl;
            *(new_array + (i * 3) + j) = *(a1 + i) * (*(a2 + j));
        }
    }

    return new_array;
}
