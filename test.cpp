#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;



bool Login_checker::checking(){
   cin >> username;
   cin >> password;
   if(username==password){return true;}else{return false;};
};

int main(){
    Login_checker lc;
   if(lc.checking()){
       cout << "success!" << endl;
   }else{
       cout << "fail!" << endl;
   };
    system("pause");
    return 0;
};