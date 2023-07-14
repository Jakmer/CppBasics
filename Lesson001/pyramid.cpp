#include <iostream>
#include <string>

using std::cout, std::cin, std::string, std::endl;

void display(const string &input)
{
    if (input.length() > 0)
    {
        for (size_t i = 0; i < input.length(); i++)
        {
            for (size_t j = input.length() - 1-i; j > 0; j--)
            {
                cout<<" ";
            }
            
            for(size_t j = 0; j<=i;j++)
            {
                cout<<input.at(j);
            }
            for(int k =i-1; k>=0; k--)
            {
                cout<<input.at(k);
            }

            cout<<endl;
        }
    }
}

int main()
{
    string input{};

    cout<<"Input: ";
    cin>>input;

    display(input);

    return 0;
}