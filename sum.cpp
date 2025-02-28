#include<iostream>

using namespace std;
class Hi{
    public:
    int sum(int a, int b){
        int total = 0;
        total = a+b;
       
        return total;

    }
};
int main(){
    int a,b;
    cout<<"Enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    Hi obj;
    cout<<obj.sum(a,b);
    
    return 0;
}