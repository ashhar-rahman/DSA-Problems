#include<iostream>

using namespace std;
/*
Enter the rows :  3
A B C 
D E F
G H I

*/
int main(){
    int n;
    cout<<"Enter the rows : ";
    
    cin>>n;
    int rows=1,count=0;
    while(rows<=n){
        int col=1;
        while(col<=n){
            char ch ='A'+count;
            cout<<ch<<" ";
            col++;
            count++;
        }
        rows++;
        cout<<endl;
    }
}