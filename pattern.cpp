#include<bits/stdc++.h>
using namespace std;
void paterenBTS(int n){
     for(int i=n-1;i>=0;i--){
        for(int j=0;j<=n-i;j++)
            cout<<" ";
        for(int j=0;j<2*i+1;j++)
            cout<<"*";
        for(int j=0;j<=n-i;j++)
            cout<<" ";
        
        
    cout<<endl;
    

}
}
void paterenSTB(int n){

     for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++)
            cout<<" ";
        for(int j=0;j<2*i+1;j++)
            cout<<"*";
        for(int j=0;j<=n-i-1;j++)
            cout<<" ";
        
        
    cout<<endl;
    

}
}
void pattern(int n){
    for(int i=1;i<=n;i++){
       
            for(int j=0;j<i;j++)
                cout<<"*";
            for(int j=0;j<n-i;j++)
                cout<<" ";   
            cout<<endl;             
}
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--)
                cout<<"*";
        for(int j=n;j>n-i;j--)
                cout<<" ";
        cout<<endl;
    }
    
}  
void pattern1(int n){
    int start=1;
    int ins=1;
    for(int i=0;i<n;i++){
        if(i%2==0)start=1;
        else start=0;
        for(int j=0;j<=i;j++){   
            cout<<start;
            start=1-start;        
        }
    cout<<endl;
    }}
void pattern2(int n){
    for ( int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<j;
        for(int j=1;j<=2*n-2*i;j++)
            cout<<" ";
        for(int j=i;j>0;j--)
            cout<<j;
        cout<<endl;
    }
}
void pattern3(int n){
   int z=1;
    for(int i=0; i<n; i++){
        for(int j=1;j<=i+1;j++){
        cout<<z<<" ";
        z++;
    }
    cout<<endl;
}
}
void pattern4(int n){
    char z='A';
    for(int i=0; i<n; i++){
        for(int j=1;j<=i+1;j++){
        cout<<z<<" ";
     
    }
    z++;   
    cout<<endl;
}
}    
void pattern5(int n){
    int z=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++)
            cout<<"*";
        for(int j=0;j<z;j++)
            cout<<" ";
        for(int j=0;j<=n-i;j++)
            cout<<"*"; 
    cout<<endl;
    z=z+2;  
    }
    int l=2*n-2;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++)
            cout<<"*";
        for(int j=0;j<l;j++)
            cout<<" ";
        for(int j=0;j<i;j++)
            cout<<"*"; 
    cout<<endl;
    l=l-2;  
    }
    }
void pattern6(int n){
      int l=2*n-2;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++)
            cout<<"*";
        for(int j=0;j<l;j++)
            cout<<" ";
        for(int j=0;j<i;j++)
            cout<<"*"; 
    cout<<endl;
    l=l-2;  
    }
    int z=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++)
            cout<<"*";
        for(int j=0;j<z;j++)
            cout<<" ";
        for(int j=0;j<=n-i;j++)
            cout<<"*"; 
    cout<<endl;
    z=z+2;  
    }
    }
int main(){
    int n;
    cin>>n;
    pattern6(n);
    return 0;
}
