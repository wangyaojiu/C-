//Time:2020/08/20 
//works:x��n�η����� 
//by:dev-cpp v5.11
//autor:wanghao 

#include<iostream>
using namespace std;
double power(double x, int n);

int main(int argc, char const *argv[])
{
    double x;
    int n;
    cout << "����������x��n,���x��n�η�" << endl;
    cin>>x;
    cin >> n;
    cout << "x��n�η��ǣ�" << power(x, n) << endl;
   
    

    system("pause");
    return 0;
}
double power(double x, int n)
{
    double val = 1.0;
    while(n--)
    {
        val*=x;
    }
    return val;
}
