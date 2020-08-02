#include <stdio.h>
#include <string.h>

int main()
{
    int counter = 0;
    char S[200000], T[200000];
    scanf("%s", S);
    scanf("%s", T);
    for(int i = 0; i < 200000; i++){
        if(strncmp(&S[i],&T[i],1) != 0) counter++;
        if(S[i] == '\0') break; 
    }
    printf("%d\n", counter);
    return 0;
}
