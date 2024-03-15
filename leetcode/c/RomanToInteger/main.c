#include <stdio.h>
#include <string.h>

int romanToInt(char* s) {
    char characters[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int values[7] = {1, 5, 10, 50, 100, 500, 1000};
    int total = 0;

    for (int i = 0; i < strlen(s); i++) {
        int current_index = 0;
        while (characters[current_index] != s[i]) {
            current_index++;
        }
        
        if (i + 1 < strlen(s)) {
            int next_index = 0;
            while (characters[next_index] != s[i + 1]) {
                next_index++;
            }
            
            if (next_index > current_index) {
                total += values[next_index] - values[current_index];
                i++;
                continue;
            }
        }
        
        total += values[current_index];
    }

    return total;
}

int main() {
    char* input;
    scanf("%s", &input);
    int output = romanToInt(input);
    printf("%d", output);
}