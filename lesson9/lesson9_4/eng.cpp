#include <iostream>
#include "eng.h"
using namespace std;
void EngWords(char str[], int n ,int num[][2])
{
    for(int i=0; i<n ; i++)
    {
        if(str[i]>='a' && str[i]<='z')
            num[str[i]-'a'][0]++;
        else if(str[i]>='A' && str[i]<='Z')
            num[str[i]-'A'][1]++;
    }

    
}