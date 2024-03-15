#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    char* prefix = strs[0];

    for (int i = 0; prefix[i] != '\0'; i++)
    {
        for (int j = 0; i < strsSize; j++)
        {
             if (prefix[i] != strs[j][i] || strs[j][i] == '\0') {
                prefix[i] = '\0';
                return prefix;
            }
        }
        
    }

    return prefix;
       
}
