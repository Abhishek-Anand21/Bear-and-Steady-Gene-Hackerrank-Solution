#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i=0,j=0,a=0,t=0,g=0,c=0;
    cin>>n;
    string str;
    cin>>str;
    int len = n/4;
    int initial,final,diff,call,min=10e+7;
    for(i=0;i<n;i++)
    {
        if(str[i]=='A')
         a++;
        else if(str[i]=='T')
         t++;
        else if(str[i]=='G')
         g++;
        else if(str[i]=='C')
         c++;
    }
    i = 0;
    j = 0;
    if(a==len && t==len && g==len && c==len)
     cout<<0;
    else
    {
        while(i<n)
        {
            for(i=i;i<n;i++)
            {
                call = 0;
                if(str[i]=='A')
                 a--;
                else if(str[i]=='T')
                 t--;
                else if(str[i]=='G')
                 g--;
                else if(str[i]=='C')
                 c--;
                 
                if(a<=len && t<=len && g<=len && c<=len)
                {
                    initial = i;
                    call = 1;
                    i++;
                    break;
                }
            }
            for(j=j;j<n;j++)
            {
                if(str[j]=='A')
                 a++;
                else if(str[j]=='T')
                 t++;
                else if(str[j]=='G')
                 g++;
                else if(str[j]=='C')
                 c++;
                 
                if((a>len || t>len || g>len || c>len) && call==1) 
                {
                    final = j;
                    j++;
                    break;
                }
            }
            diff = abs(initial-final) + 1;
            if(diff<min)
             min = diff;
        }
        cout<<min;
    }
    return 0; 
}
