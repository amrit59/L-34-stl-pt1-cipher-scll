#include<iostream>
#include<vector>
using namespace std;
int main(){
    int*arr;
    arr=new int[5];
    delete arr;
    
    //A vectore is an array whose size is not fixed and will allocate space everytime you add a new element to it 
     vector<int>a;
     cout<<"The size of the vector is : "<<a.size();
     int i;
     for(i=0;i<5;i++)
     {
        a.push_back(i+1);
     }

     cout<<"The size of the vector is "<<a.size();
     a.pop_back();

     cout<<"The size of the vector is: "<<a.size();
     cout<<"the first element of the vector is "<<a[0]<<endl;

     for(auto j=b.begin(); j<a.end();j++){
	 
     
        cout<<*j;
     }
     
     cout<<endl<<"The capacity of the vector is "<<a.capacity()<<endl;
}
