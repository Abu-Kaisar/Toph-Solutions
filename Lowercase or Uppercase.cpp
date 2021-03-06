/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define sstr sf ("%s",str)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int tc,pos,len,i,a,b,c;
    char str[10001];

    scase;

    forloop
    {
        sstr;

        len = strlen(str);

        a = b = c = 0;

        for (i=0; i<len; i++)
        {
            if (isdigit(str[i]))
                a++;
            else if (isupper(str[i]))
                b++;
            else
                c++;
        }

        pcase;

        if (a == len)
            pf ("%d\n",a);
        else if (b == len || c == len)
            pf ("0\n");
        else if (b > c)
            pf ("%d\n",len-b);
        else
            pf ("%d\n",len-c);
    }

    return 0;
}
