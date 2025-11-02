#include <stdio.h>
#include <string.h>

typedef struct {
    int ascii;
    int count;
} Data;

int main() {
    char line[1001];
    int first = 1;
    while (fgets(line, 1001, stdin)) {
        int freq[128] = {0};
        int len = strlen(line);
        for (int i = 0; i < len; i++) {
            unsigned char c = line[i];
            if (c >= 32 && c <= 127)
                freq[c]++;
        }

        Data list[128];
        int size = 0;
        for (int i = 32; i < 128; i++) {
            if (freq[i] > 0) {
                list[size].ascii = i;
                list[size].count = freq[i];
                size++;
            }
        }

        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                if (list[i].count > list[j].count ||
                    (list[i].count == list[j].count && list[i].ascii < list[j].ascii)) {
                    Data tmp = list[i];
                    list[i] = list[j];
                    list[j] = tmp;
                }
            }
        }

        if (!first)
            printf("\n");
        first = 0;

        for (int i = 0; i < size; i++)
            printf("%d %d\n", list[i].ascii, list[i].count);
    }
    return 0;
}
