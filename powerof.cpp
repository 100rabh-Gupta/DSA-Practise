#include<iostream>
using namespace std;
int Power( int n,int num){
    if (num==0){
    return 1;
    } 
    return n*Power(n,num-1);
}


int sqsum(int n ){
    if ( n==1)return 1;
    return n*n+sqsum(n-1);
}

int main(){
cout<<Power(5,3)<<endl;
cout<<sqsum(4);
}






// square of n numbers



