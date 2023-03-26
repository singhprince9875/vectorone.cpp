/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
    }*/
    // taking input from user in vector
    /*#include<iostream>
    #include<vector>
    using namespace std;
    int main(){int n;
        vector<int> v;
        for(int i=0;i<n;i++){
            cout<<"enter your elements";
            cin>>n;
            v.push_back(n);
            cout<<v;
        }
    }*/
    // count the number occurence in array
   /* #include<iostream>
    #include<vector>
    using namespace  std;
    int main(){int n,count=0;
        int arr[4]={34,45,45,78};
        cout<<"enter the number you want to search";
        cin>>n;
        for(int i =0;i<=4;i++){
            if(arr[i]==n){
            count++;

            }
        }
            cout<<count<<endl;
        
    }/*/
    // check your array is sorted or not
    /*#include<iostream>
    using namespace std;
    int main(){
        int arr[4]={1,2,3,4};
        for(int i=0;i<4;i++){
            if(arr[i+1]>arr[i])
     cout<<"your array is sorted";}}*/
// find the difference between the number at sum of even indices - sum of thee odd indices
#include<iostream>
using namespace std;
int main(){int sum = 0;
    int arr[6]={1,2,1,2,1,2};
    for(int i=0;i<=6;i++){
        if(i%2==0){
            sum=sum+i;
        }
        else{
            sum=sum-i;
        }}
        cout<<sum<<endl;

    
}


    

