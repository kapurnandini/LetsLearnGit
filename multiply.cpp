#include<iostream>

using namespace std;
class Hi{
    public:
    int mul(int a, int b){
        int total = 0;
        total = a*b;
       
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
    cout<<"The product is : " << obj.mul(a,b);
    
    return 0;
}