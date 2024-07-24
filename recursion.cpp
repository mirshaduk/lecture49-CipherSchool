#include<iostream>
using namespace std;

int fib(int  input) //the point at which u want the fibonocii sequance  to exist
{
    if(input==0 || input==1)
    {
        return 1;
    }
    int final_answer;
    final_answer = fib(input-1)+ fib(input-2);
    return final_answer;

}



int main()
{
    int input;
    cout<<"Enter the number you want to find the fibonicci series to: ";
    cin>>input;

    cout<<fib(input);

    return 0;



}