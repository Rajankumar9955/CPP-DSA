#include<iostream>
using namespace std;
template<class x, class y>
class cybrom
{
    x a;
    y b;
    public:cybrom(x x1,y y1)
    {
        a=x1;
        b=y1;
    }
    void show()
    {
        cout<<"sum:"<<a+b;
    }
};

int main()
{
    // cybrom<int,int>j(23,36);
    cybrom<int,double>j(23,36.22);
    j.show();
}