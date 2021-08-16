#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>m;
    m.insert(pair<int,string>(1,"Ayush"));
    m.insert(pair<int,string>(7,"Stefan"));
    m.insert(pair<int,string>(3,"Maria"));
    m.insert(pair<int,string>(2,"Zarina"));

    map<int,string>::iterator itr;
    cout<<"Details are: \n";
    cout<<"Roll No.\tName\n";
    for(itr=m.begin();itr!=m.end();itr++)
    cout<<itr->first<<"\t\t"<<itr->second<<endl;

    int a=3;
    m.erase(a);
    cout<<"After deletion \n\n";
    for(itr=m.begin();itr!=m.end();itr++)
    cout<<itr->first<<"\t\t"<<itr->second<<endl;

    cout<<endl<<endl;
    auto last = *m.rbegin();
    auto i = m.begin();
  
    cout << "Map contains "
         << "following elements"
         << endl;
  
    do {
  
        cout << i->first
             << " = "
             << i->second
             << endl;
    } while (m.value_comp()(*i++, last));
  
    return 0;
}