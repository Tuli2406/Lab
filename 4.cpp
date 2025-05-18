#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
    unordered_map<string,int>ballon_color;
    string color;

    while(true){
        cout<<"Enter ballon_color";
        cin>>color;

        if(color=="q"){
            break;
        }
        ballon_color[color]++;

        }
        cout<<"count ballon color"<<endl;
        for(const auto& it:ballon_color){
            cout<<"Color:"<<it.first<<",count:"<<it.second<<endl;
        }
        return 0;
}
