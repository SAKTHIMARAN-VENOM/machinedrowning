#include <bits/stdc++.h>
using namespace std;
void vec(){
    vector<int> v1(1,100);
v1.insert(v1.begin(),1,500);
v1.insert(v1.end()-1,1,200);
cout<< v1[v1.size()-1];
}
void lis(){
    list<int> ls;
    ls.insert(ls.begin(),{2,100});
    ls.insert(ls.end(),{2,200});
    for (int i:ls)
        cout <<i<<" ";
}
void stc(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    cout<< st.top()<<endl;
    cout<< st.size()<<endl;
}
void sume(){
    set<int> sec;
    sec.insert(1);
    sec.emplace(3);
    sec.emplace(3);
    sec.emplace(2);
    for(auto it:sec)
        cout<<it<<" ";
}
void pq(){
    priority_queue<int,vector<int>,greater<int>> pc,ac;
    int c,b,X;
    cin >> c; 
   for(int i=0;i<c;i++){
        cin>>b;
        pc.emplace(b);
   }
   ac=pc;
   while(!pc.empty()){
        cout << pc.top()<<' ';
        pc.pop();}
   }
void ps(){
string str;
cin>>str;
str.erase(std::remove_if(str.begin(), str.end(), [](unsigned char c) {
    return std::ispunct(c);
}), str.end());
cout<< str;}
   int main(){
    ps();

};

