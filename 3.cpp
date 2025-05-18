#include<iostream>
using namespace std;

int main(){
    FILE *f;
    f= fopen("input.txt","r");
    char ch;
    int num= 0, max= -99;
    bool hasnum = false;

    while(!feof(f)){
        ch = fgetc(f);
        if(ch>='0'&& ch<='9'){
            num = num*10+(ch- '0');
            hasnum = true;
        }
        if(ch==',' || ch== '\n'){
            if(hasnum){
                if(num>max){
                    max= num;
                }num= 0;
                hasnum = false;
            }
            if(ch== '\n'){
                cout << max<< endl;
                max=  -99;
            }
        }
    }
    if(hasnum && num<max)
        max=num;

    if(hasnum) cout<< max;
    fclose(f);
    return 0;
}
