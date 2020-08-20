//autor:wanghao
//dev-cpp v5.11
//Works:打印联系
//Time:2020/08/20



#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,j,k,f;
    for (i=1;i<=4;i++){
        for (j=1;j<=30;j++)
            cout<<" ";
        for (k=1;k<=8-2*i;k++)
            cout<<" ";
        for (f=1;f<=2*i;f++)
            cout<<'*';
        cout<<endl;
    }
    for(i=1;i<=3;i++){
        for (j=1;j<=30;j++)
            cout<<" ";
        for (f=1;f<=7-2*i;f++)
            cout<<'*';
        cout<<endl;
    }
    system("pause");
    return 0;
}

//最终会打印出一个平行四边形
