#include <stdio.h>

int main()
{   
    int right = 0;
    int left = 0;
    char first = "";
    
    for(int i = 0;i < 20;i ++){
        char input = "";
        scanf("%c",&input);
        if(input == '('){
            left = left + 1;
        }
        else if(input == ')')
        {
            right = right + 1;
        }
        else{
            break;
        }
    }
    
    if(left == right){
        printf("%d",right);
    }
    else{
        printf("0");
    }

    return 0;
}