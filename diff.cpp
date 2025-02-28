#include<iostream>

using namespace std;
class Hi{
    public:
    int diff(int a, int b){
        int total = 0;
        total = a-b;
        int diffi = total;
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
    cout<<"The sum is : " << obj.diff(a,b);
    
    return 0;
}