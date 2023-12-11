#include <iostream>
#include<array>

using namespace std;
int main() {

    int basic[3]={1,2,3};

    array<int,4>a={1,2,3,4};

    int size=a.size();

    for (int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd Index->"<<a.at[2]<<end;

    cout<<"Empty or not->"<<a.empty()<<endl;

    cout<<"First element->"<<a.front()<<endl;
    cout<<"last element->"<<a.back()<<endl;

}

#include <iostream>
#include<vector>
using namespace std;

int main(){

// vector<int>a[1,1];
//cout<<"print a"<<endl;

// vector<int>last(a);
//cout<<"print last"<<endl;

vector<int>v;
cout<<"Capacity->"<<v.capacity()<<endl;

v.push_back(1);
cout<<"Capacity->"<<v.capacity()<<endl;

v.push_back(2);
cout<<"Capacity->"<<v.capacity()<<endl;

v.push_back(3);
cout<<"Capacity->"<<v.capacity()<<endl;
cout<<"size->"<<v.size()<<endl;

cout<<"Element at 2nd index"<<v.at(2)<<endl;

cout<<"front" <<v.front()<<endl;
cout<<"back"<<v.back()<<endl;

cout<<"before_pop"<<endl;
for(int i:v){

    cout<<i<<" ";
} cout<<end;;

v.pop_back();

cout<<"after pop"<<endl;
for(int i:v){

    cout<<i<<" ";
}

cout<<"before clear size"<<v.size()<<endl;
v.clear();
cout<"after clear size"<<v.size()<<endl;
 
}

include<iostream>
include<list>
using namespace std;

int main(){

    /*/ list<int>n(1,100);
    cout<<"printing n"<<endl;
    for(int i:n){
        cout<<i<<" ";}
        cout<<endl;  */

    list<int>l;
    l.push_back(1);
    l.push_front(2);

    for(int i:1){

    cout<<i<<" ";
    } cout endl;

    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:1){

        cout<<i<<" ";
    }

    cout<<"size of list"<<l.size()<<endl;
    }

  #include<iostram>
  #include<set>

  using namespace std;
  int main(){

    set<int>s;

    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(4);
    s.insert(3);
    s.insert(8);

    for(auto i:s){
        cout<<i<<endl;
    } cout<<endl;

    set<int>::iterator it=s.begin();
    it++;

    s.erase(it);

    for(auto i:s){
        cout<<i<<endl;
    } cout<<endl;

    cout<<"-5 is present or not->"<<s.count(-5)<<endl;

    set<int>::iterator itr=s.find(5);

    for (auto it=itr; it!=s.end(); it++){
        cout<<*it<<" "; 
    } cout<<endl;
    
  }
