#include<iostream>
using namespace std;
int main(){
    int i,j,rows,col;
    cout<<"Enter no of rows and columns";
    cin>>rows>>col;
    for(i=1;i<=rows;i++){
        for(j=1;j<=col;j++){
            if(i==1 || i==rows || j==1 || j==col)
            {
                cout<<"*";
            }
            
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}