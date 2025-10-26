#include <stdio.h>
#include <string.h>

int main() {
    char s[25];
    scanf("%s", s);  

    int count = 0;   
    int pairs = 0;   
    int valid = 1;   

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '(') {
            count++;  
        } 
        else if (s[i] == ')') {
            if (count > 0) {
                count--;  
                pairs++;
            } else {
                valid = 0; 
                break;
            }
        }
    }

    
    if (count != 0) valid = 0;

    if (valid)
        printf("%d\n", pairs);
    else
        printf("0\n");

    return 0;
}
