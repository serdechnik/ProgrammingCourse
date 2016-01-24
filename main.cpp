#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char s[100];
    cin >> s;
    int l = 0;
    int maxl = 0;
    for( int i=0 ; i < strlen(s); i++ )
    {
        if( s[i] == '(' )
        {
            s[i] = '{';
            l++;
            if( l > maxl )
            {
                maxl = l;
            }
        }
        if( s[i] == ')' )
        {
            s[i] = '}';
            l--;
        }
    }
    for( int i=0 ; i < strlen(s); i++ )
    {

        if( s[i] == '{' )
        {
            l++;
            if( l == maxl ) s[i] = '(';
            if( l == maxl-1 ) s[i] = '[';
        }
        if( s[i] == '}' )
        {
            if( l == maxl ) s[i] = ')';
            if( l == maxl-1 ) s[i] = ']';
            l--;
        }
    }
    cout << s << endl;
}

