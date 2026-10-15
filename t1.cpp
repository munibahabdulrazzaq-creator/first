#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter values of a ,b,c respectivly";
    cin>>a>>b>>c;
    if(a==0)
    {
        cout<<"it is a linear ";
    }
    else
    {
        if((b*b)-4*a*c<0)
        {
            cout<<"roots are imaginary";
        }
        else
        {
            int qp,qn;
            qp=((-b+sqrt((b*b)-4*a*c))/2*a);
            cout<<qp<<endl;
            qn= ((-b-sqrt((b*b)-4*a*c))/2*a);
            cout<<qn;


        }
    }
    return 0;
}