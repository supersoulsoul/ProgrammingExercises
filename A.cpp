#include<stdio.h>
typedef long long ll;
ll min(ll a,ll b)
{
	return a>b?b:a;
}
ll gcd(ll a,ll b)
{
    return b==0?a:gcd(b,a%b);
}

ll lcm(ll a,ll b)
{
    return a/gcd(a,b)*b;
}

int main()
{
    ll n,a,b,p,q;
    while(scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q)!=EOF)
    {
        ll sum=0;
        sum=(n/a)*p+(n/b)*q-min(p,q)*(n/lcm(a,b));
        printf("%I64%d\n",sum);
    }
    return 0;
}
