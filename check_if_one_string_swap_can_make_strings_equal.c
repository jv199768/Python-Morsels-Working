#include <string.h>
inline void swap (char *s, int i, int j) {
    char tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
}

bool areAlmostEqual(char* s1, char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    char tmp[102];
    if (!strcmp(s1, s2))
        return true;
    
    for (int i = 0; i<len1-1; i++){
        for(int j = i+1; j<len2; j++){
            strcpy(tmp,s1);
            swap(tmp,i, j);
            if(!strcmp(tmp, s2))
                return true;
        }
    }
    return false;
}
