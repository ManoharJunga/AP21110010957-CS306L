#include<iostream>
using namespace std;

int main(){
    int i=0, state=0;
    char token, input[20];
    cout<<"Enter input String"<<endl;
    cin>>input;
    while((token=input[i++])!='\0'){
        switch(state){
            case 0:if(token=='a')
            state=1;
            else if(token=='b') 
            state=3;
            else{
                cout<<"Invalid toekn"<<endl;
                exit(0);
            }
            break;
            case 1: if(token=='a')
            state=0;
            else if(token=='b') 
            state=2;
            else{
                cout<<"Invalid toekn"<<endl;
                exit(0);
            }
            break;
            case 2:if(token=='a')
            state=3;
            else if(token=='b') 
            state=1;
            else{
                cout<<"Invalid toekn"<<endl;
                exit(0);
            }
            break;
            case 3:if(token=='a')
            state=2;
            else if(token=='b') 
            state=0;
            else{
                cout<<"Invalid toekn"<<endl;
                exit(0);
            }
            break;
        }
    }
    if(state==0){
        cout<<"String accepted"<<endl;
    }
    else{
        cout<<"String not accepted"<<endl;
    }
    cout<<"Final State is : "<<state<<endl;
}