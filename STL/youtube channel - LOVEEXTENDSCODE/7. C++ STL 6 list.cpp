
/*/
C++ Stl 6 : list
Learnt : we can use only push.back() in vector but we can push.back() and push.font() in list
/*/
#include<iostream>
#include<stdio.h>
#include<string>
#include<list>
#include<queue>
#include<iterator>

using namespace std;

int main()
{

    list <float> mylist;
    list <float> :: iterator it;

    mylist.push_back(10);
    mylist.push_back(11);
    mylist.push_front(24);
    mylist.push_front(28);
    mylist.push_back(43);

    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"\t";
    }
}
