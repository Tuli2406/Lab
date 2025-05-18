#include<stdio.h>

void pln(char *move,int x,int y){
    for(int i=0;move[i]!='\0';i++){
        switch(move[i]){
            case 'U':
            y++;
            break;

            case 'D':
            y--;
            break;

            case 'R':
            x++;
            break;

            case 'L':
            x--;
            break;



        }
    }
    printf("Final location:%d %d",x,y);

}
int main(){
    int x,y;
    char move[100];
    printf("Enter your location:");
    scanf("%d %d",&x,&y);
    getchar();

    printf("Enter the sequence of movement(UDLR)");
    scanf("%s",move);
    pln(move,x,y);


}
