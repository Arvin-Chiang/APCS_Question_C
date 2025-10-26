#include <stdio.h>

int main()
{
    int win = 0;
    int play[15][15] = {
    {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
    {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
    {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
    {6,6,6,6,0,6,6,6,6,6,6,6,6,6,6},
    {6,6,6,6,6,0,6,6,6,6,6,6,6,6,6},
    {6,6,6,6,6,6,0,6,6,6,6,6,6,6,6},
    {6,6,6,6,6,6,6,0,6,6,6,6,6,6,6},
    {6,6,6,6,6,6,6,6,0,6,6,6,6,6,6},
    {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
    {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
    {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
    {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
    {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
    {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
    {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6}
    };

    for(int y = 0;y < 15; y++){
        for(int x = 0;x < 15; x++){
            if(x < 4){
                if(y > 10){
                    if(play[y][x] + play[y][x+1] + play[y][x+2] + play[y][x+3] + play[y][x+4] == 0){//橫排檢查
                        printf("White Win");
                        win = win = 1;
                        break;
                    }
                    else if(play[y][x] + play[y][x+1] + play[y][x+2] + play[y][x+3] + play[y][x+4] == 5){//橫排檢查
                        printf("Black Win");
                        win = win = 1;
                        break;
                    }
                    
                }
                else {
                    if(play[y][x] + play[y][x+1] + play[y][x+2] + play[y][x+3] + play[y][x+4] == 0){//橫排檢查
                        printf("White Win");
                        win = win = 1;
                        break;
                    }
                    else if(play[y][x] + play[y][x+1] + play[y][x+2] + play[y][x+3] + play[y][x+4] == 5){//橫排檢查
                        printf("Black Win");
                        win = win = 1;
                        break;
                    }
                    else if(play[y][x] + play[y+1][x] + play[y+2][x] + play[y+3][x] + play[y+4][x] == 0){//直排檢查
                        printf("White Win");
                        win = win = 1;
                        break;
                    }
                    else if(play[y][x] + play[y+1][x] + play[y+2][x] + play[y+3][x] + play[y+4][x] == 5){//直排檢查
                        printf("Black Win");
                        win = win = 1;
                        break;
                    }
                    else if(play[y][x] + play[y+1][x+1] + play[y+2][x+2] + play[y+3][x+3] + play[y+4][x+4] == 0){//斜排檢查
                        printf("White Win");
                        win = win = 1;
                        break;
                    }
                    else if(play[y][x] + play[y+1][x+1] + play[y+2][x+2] + play[y+3][x+3] + play[y+4][x+4] == 5){//斜排檢查
                        printf("Black Win");
                        win = win = 1;
                        break;
                    }
                }
            }
            else if(x > 10){
                if(y > 10){
                   
                }
                else {
                    if(play[y][x] + play[y+1][x] + play[y+2][x] + play[y+3][x] + play[y+4][x] == 0){//直排檢查
                        printf("White Win");
                        win = win = 1;
                        break;
                    }
                    else if(play[y][x] + play[y+1][x] + play[y+2][x] + play[y+3][x] + play[y+4][x] == 5){//直排檢查
                        printf("Black Win");
                        win = win = 1;
                        break;
                    }
                    else if(play[y][x] + play[y-1][x-1] + play[y-2][x-2] + play[y-3][x-3] + play[y-4][x-4] == 0){//斜排檢查
                        printf("White Win");
                        win = win = 1;
                        break;
                    }
                    else if(play[y][x] + play[y-1][x-1] + play[y-2][x-2] + play[y-3][x-3] + play[y-4][x-4] == 5){//斜排檢查
                        printf("Black Win");
                        win = win = 1;
                        break;
                    }
                }
            }
            else{
                    if(play[y][x] + play[y][x+1] + play[y][x+2] + play[y][x+3] + play[y][x+4] == 0){//橫排檢查
                        printf("White Win");
                        win = win = 1;
                        break;
                    }
                    else if(play[y][x] + play[y][x+1] + play[y][x+2] + play[y][x+3] + play[y][x+4] == 5){//橫排檢查
                        printf("Black Win");
                        win = win = 1;
                        break;
                    }
                    else if(play[y][x] + play[y+1][x] + play[y+2][x] + play[y+3][x] + play[y+4][x] == 0){//直排檢查
                        printf("White Win");
                        win = win = 1;
                        break;
                    }
                    else if(play[y][x] + play[y+1][x] + play[y+2][x] + play[y+3][x] + play[y+4][x] == 5){//直排檢查
                        printf("Black Win");
                        win = win = 1;
                        break;
                    }
                    else if(play[y][x] + play[y+1][x+1] + play[y+2][x+2] + play[y+3][x+3] + play[y+4][x+4] == 0){//斜排檢查
                        printf("White Win");
                        win = win = 1;
                        break;
                    }
                    else if(play[y][x] + play[y+1][x+1] + play[y+2][x+2] + play[y+3][x+3] + play[y+4][x+4] == 5){//斜排檢查
                        printf("Black Win");
                        win = win = 1;
                        break;
                    }
                    else if(play[y][x] + play[y-1][x-1] + play[y-2][x-2] + play[y-3][x-3] + play[y-4][x-4] == 0){//斜排檢查
                        printf("White Win");
                        win = win = 1;
                        break;
                    }
                    else if(play[y][x] + play[y-1][x-1] + play[y-2][x-2] + play[y-3][x-3] + play[y-4][x-4] == 5){//斜排檢查
                        printf("Black Win");
                        win = win = 1;
                        break;
                    }
            }
            if(win == 1){
                break;
            }
        }
        if(win == 1){
                break;
        }
    }

    
    return 0;
}