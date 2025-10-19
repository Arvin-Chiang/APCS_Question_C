#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[101]; 
    char target;
    scanf("%s", str);
    getchar(); 
    scanf("%c", &target);

    int positions[100]; 
    int count = 0;

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (tolower(str[i]) == tolower(target)) {
            positions[count++] = i;
        }
    }

    
    for (int i = 1; i < count; i++) {
        printf("%d", positions[i] - positions[i - 1]);
        if (i != count - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
