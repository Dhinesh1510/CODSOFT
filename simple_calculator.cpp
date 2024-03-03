#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    float a,b,c;
    int choice;
    cout<<"enter the first value: "<<endl;
    cin>>a;
    cout<<"enter the second value: "<<endl;
    cin>>b;
    cout<<"which operator do you want"<<endl;
    cout<<"if you want addition enter 1"<<endl;
    cout<<"if you want subtraction enter 2"<<endl;
    cout<<"if you want multiplication enter 3"<<endl;
    cout<<"if you want division enter 4"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
                {  
                    c= a + b;
                    cout<<"The addition of two value= "<<c;
                    break;
                }
        case 2:
                {
                    c= a - b;
                    cout<<"The subtraction of two value= "<<c;
                    break;
                }
        case 3:
                {
                    c= a * b;
                    cout<<"The multiplication of two value= "<<c;
                    break;
                }
        case 4:
                {
                    c=a/b;
                    cout<<"The division of two value= "<<c;
                    break;
                }
        default:
                {
                    cout<<"invalied value";
                }                
    }
    return 0;
}
