#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

bool prsth(){
    string pw = "ok";
    string pws;
    cin >> pws;
    if(pw==pws){return true;}else{return false;};
}

int main(){
    if(prsth()){
        cout << "success!" << endl;
    }else{
        cout << "fail!" << endl;
    };
    system("pause");
    return 0;
};