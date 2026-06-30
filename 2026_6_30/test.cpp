// #include<iostream>
// using namespace std;
// int main()
// {
//     int* p=new int[5];
//     for(int i=0;i<5;i++)
//     {
//         p[i]=i+1;
//     }
//     for(int i=0;i<5;i++)
//     {
//         cout<<p[i]<<" ";
//     }
//     cout<<endl;
//     delete[] p;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     cout<<v[0]<<endl;
//     cout<<v[1]<<endl;
//     cout<<v[2]<<endl;
//     return 0;
// }



#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout<<"请输入数字个数:";
    cin>>n;
    cout<<"请输入"<<n<<"个数字"<<endl;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}



