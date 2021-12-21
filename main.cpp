#include <bits/stdc++.h>

using namespace std;

map<long long int, long long int> arr;

long long int func (long long int x)
{
    if(arr[x]==0)
    {
        if(x/12 < 1)
        return x;
        else
        {
            arr[x] = func (floor(x/2)) + func (floor(x/3)) + func (floor(x/4));
            return arr[x];
        }
    }
    else
    {
        return arr[x];
    }
}

int main()
{
    long long int inp;
    while(scanf("%lld", &inp) != EOF)
    {
	    cout<<func(inp)<<"\n";
	}
    return 0;
}