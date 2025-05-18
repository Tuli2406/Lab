#include<iostream>
using namespace std;
int main(){
    FILE *file;
    file=fopen("input.txt","r");
    char ch;
    int num=0,max=-99;
    bool hasnum=false;
    while(!feof){
        ch=fgetc(file);
        if(ch>='0' && ch<='9'){
            num=num*10+(num-'0');
            hasnum=true;

        }
        if(ch==',' || ch=='\n'){
            if(hasnum){
                num<max;
                max=num;
            }num=0;
            hasnum=false;
            if('\n'){
                cout<<max<<endl;
                max=-99;
            }

        }
    }
    fclose(file);
    return 0;
}
