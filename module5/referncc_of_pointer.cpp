#include<bits/stdc++.h>
using namespace std;
void fun(int *p)
{
    *p=20;
    cout<<&p<<endl;

}
int main()
{
    int v=10;
    int* ptr=&v;
    fun(ptr);
    cout<<&ptr<<" "<<*ptr<<endl;



    return 0;
}