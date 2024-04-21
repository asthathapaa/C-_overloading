/*#include<iostream>
using namespace std;
int add(int a,int b);
double add(double a,double b);
int add(int a,int b,int c);
double add(double a,int b);
double add(int a,double b);
int main()
{
    int w=10,x=20,z=30;
    double a=10,b=22;
    cout<<"the values are";
    cout<<endl<<add(w,z);
    cout<<endl<<add(a,b);
    cout<<endl<<add(w,x,z);
    cout<<endl<<add(a,z);
    cout<<endl<<add(w,a);
}
int add(int a,int b)
{
    return a+b;
}
double add(double a,double b)
{
    return a+b;
}
int add(int a,int b,int c)
{
    return a+b+c;
}
double add(double a,int b)
{
    return a+b;
}
double add(int a,double b)
{
    return a+b;
}
*/


//maximum of2,3,4 numbers
/*#include<iostream>
using namespace std;
int maxi(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int maxi(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>a && b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int maxi(int a,int b,int c,int d)
{

    if(a>b && a>c &&a>d)
    {
        return a;
    }
    else if(b>a && b>c &&b>d)
    {
        return b;
    }
    else if(c>a && c>b && c>d)
    {
        return c;
    }
    else{
        return d;
    }
}

int main()
{
    int a,b,c,d;
    cout<<"enter four numbers:";
    cin>>a>>b>>c>>d;
    cout<<endl<<"the maximum of two numbers is"<<maxi(a,b);
    cout<<endl<<"the maximum of three number is"<<maxi(a,b,c);
    cout<<endl<<"the maximum of four number is"<<maxi(a,b,c,d);
}
*/


//find volume
#include<iostream>
using namespace std;
float volume(float rad)
{
    return (float)(1.334*3.14*rad*rad*rad);
}
float volume(float rad,float h)
{
    return(float)(3.14*rad*rad*h);
}
int volume(int l,int b)
{
    return (l*b);
}
int main()
{
    float rad,h,l,b;
    cout<<"enter radius ,height ,lgth,bdth";
    cin>>rad>>h>>l>>b;
    cout<<endl<<"the volume of sphere is"<<volume(rad);
    cout<<endl<<"the volume of cylinder is"<<volume(rad,h);
    cout<<endl<<"the volume of rectan is"<<volume(l,b);
}
