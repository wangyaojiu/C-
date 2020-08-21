//Time:2020/08/20 
//works:x的n次方运算 
//by:dev-cpp v5.11
//autor:wanghao 

#include<iostream>
using namespace std;
double power(double x, int n);

int main(int argc, char const *argv[])
{
    double x;
    int n;
    cout << "输入两个数x、n,输出x的n次方" << endl;
    cin>>x;
    cin >> n;
    cout << "x的n次方是：" << power(x, n) << endl;
   
    

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
