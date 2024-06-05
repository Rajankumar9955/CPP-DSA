#include<iostream>
using namespace std;
namespace cybrom{
    int a=100;
    class bhopal
    {
        public:void show()
        {
            cout<<"Wel-come:";
        }
    };
    namespace mp
    {
        int b=200;

    }
}
int main()
{
    cybrom::bhopal b1;
    b1.show();
    cout<<cybrom::mp::b;
}