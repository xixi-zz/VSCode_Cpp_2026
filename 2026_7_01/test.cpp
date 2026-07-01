// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string s;
//     cout<<"请输入你的名字:";
//     cin>>s;
//     cout<<"你好"<<s<<endl;
// }


// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     cout<<"请输入一个单词:";
//     string s;
//     cin>>s;
//     cout<<"字符串长度:"<<s.size()<<endl;
//     s.push_back('!');
//     cout<<s<<endl;
//     for(int i=0;i<s.size();i++)
//     {
//         cout<<s[i]<<endl;
//     }
//     return 0;
// }





// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string s1;
//     string s2;
//     cout<<"请输入两个单词:"<<endl;
//     cin>>s1;
//     cin>>s2;
//     string s=s1+s2;
//     cout<<s<<endl;
// }


#include<iostream>
#include<string>
using namespace std;
int main()
{
    string secret="123456";
    string answer;
    cin>>answer;
    if(answer==secret)
    {
        cout<<"登陆成功"<<endl;
    }
    else
    {
        cout<<"登陆失败"<<endl;
    }
}