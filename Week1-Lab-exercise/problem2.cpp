#include<iostream>
using namespace std;

int main(){
    int state=0,i=0;
    char token, input[20];
    cout<<"Enter the string"<<endl;
    cin>>input;
    while((token=input[i++])!='\0'){
        switch(state){
            case 0:
            if(token=='a'){
                state=1;
            }else if(token=='b'){
                state=3;
            }else{
                cout<<"Invalid token"<<endl;
                exit(0);
            }
            break;
            case 1:
            if(token=='a'){
                state=2;
            }else if(token=='b'){
                state=3;
            }else{
                cout<<"Invalid token"<<endl;
                exit(0);
            }
            break;
            case 2:
            if(token=='a'){
                state=2;
            }else if(token=='b'){
                state=3;
            }else{
                cout<<"Invalid token"<<endl;
                exit(0);
            }
            break;
            case 3:
            if(token=='a'){
                state=1;
            }else if(token=='b'){
                state=4;
            }else{
                cout<<"Invalid token"<<endl;
                exit(0);
            }
            break;
            case 4:
            if(token=='a'){
                state=1;
            }else if(token=='b'){
                state=4;
            }else{
                cout<<"Invalid token"<<endl;
                exit(0);
            }
            break;
        }
    }
    if(state==2||state==4){
        cout<<"String accepted"<<endl;
    }
    else{
        cout<<"String not accepted"<<endl;
    }
    cout<<"Final State is : "<<state<<endl;
}