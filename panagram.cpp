#include <iostream>
using namespace std;

int j;
string s="";
for(j=0; j<pangram.size(); j++)
{
    string str=pangram[j];
    
    vector<bool> mark(26, false);
    int index;
    for (int i = 0; i < str.length(); i++) {
        if ('A' <= str[i] && str[i] <= 'Z')
            index = str[i] - 'A';
        else if ('a' <= str[i]
                 && str[i] <= 'z')
            index = str[i] - 'a';
        else
            continue;
  
        mark[index] = true;
    }
    int flag=1;
    for (int i = 0; i <= 25; i++)
    {
           if (mark[i] == false)
           {
               s=s+"0";
               flag=0;
               break;
           }
    }
       
    if(flag)      
     s=s+"1";
}
return s;