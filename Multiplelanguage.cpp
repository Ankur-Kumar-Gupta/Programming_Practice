#include<iostream>
using namespace std;

int main()
{
    char key;
    cout<<"Enter any alphabet from a to e: ";
    cin>>key;
    switch (key)
    
    {
        case 'a':  cout<<"Namaste";
                   break;
        case 'b':  cout<<"Hola";
                   break;
        case 'c':  cout<<"Hello";
                   break;           
        case 'd':  cout<<"Salut";
                   break;
        case 'e':  cout<<"ciao";
                   break;

    default: cout<<"Didn't Learned Yet";
        break;
    }
    return 0;
}