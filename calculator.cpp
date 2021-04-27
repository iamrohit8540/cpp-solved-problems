#include<iostream>
using namespace std;

int main()
{
    int choice;
    float a1,a2;

    cout<<"Welcome to Calculator by Underhood"<<endl;
    cout<<"=================================="<<endl;
    cout<<"Options"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Substraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"5.Percentage"<<endl;
    cout<<"\nEnter your choice: ";
    cin>>choice;
    
    switch(choice)
    {
        case 1:
        cout<<"Enter numbers: ";
        cin>>a1>>a2;
        cout<<a1+a2;
        break;

        case 2:
        cout<<"Enter numbers: ";
        cin>>a1>>a2;
        cout<<a1-a2;
        break;

        case 3:
        cout<<"Enter numbers: ";
        cin>>a1>>a2;
        cout<<a1*a2;
        break;

        case 4:
        cout<<"Enter numbers: ";
        cin>>a1>>a2;
        cout<<a1/a2;
        break;

        default:
        cout<<"Bitch you dumb or what?\nWhat the fuck are you typing?\nPlease check your input.";
    }




    
    return 0;
}