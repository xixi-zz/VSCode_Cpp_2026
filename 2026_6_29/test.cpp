// #include<iostream>
// using namespace std;
// int main()
// {
//     string s;
//     cout<<"请输入你的名字:";
//     cin>>s;
//     int age;
//     cout<<"请输入你的年龄:";
//     cin>>age;
//     cout<<"你好,"<<s<<",今年就是"<<age<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void Swap(int&a,int&b)
// {
//     int tmp=a;
//     a=b;
//     b=tmp;
// }
// int main()
// {
//     // int a = 10;
//     // int& b = a;

//     // cout << a << endl;
//     // cout << b << endl;

//     // b = 20;

//     // cout << a << endl;
//     // cout << b << endl;
//     // return 0;

//     int x = 10;

//     int y = 20;

//     Swap(x, y);

//     cout << x << " " << y << endl;

// }




#include<iostream>
using namespace std;
int main()
{
    int* p=new int;
    *p=10;
    delete p;
    p=nullptr;
    cout<<p<<endl;
    return 0;
}