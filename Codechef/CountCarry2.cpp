#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#define MOD 1000000007
typedef long long int ll;
using namespace std;
int carry(int N,int M)
{
	int cf=0,count=0,sum=0;
	while(N!=0 || M!=0)
	{
		int a = N%10;
		int b = M%10;
		sum = a+b+cf;
		if(sum>9)
		{
			count++;
			cf=1;
		}
		else
			cf=0;		
		N/=10;
		M/=10;
	}
	return count;
}
int main()
{
	ios_base::sync_with_stdio(0);
	int N,M;
	while(1)
	{
		cin>>N>>M;
		if(N==0 && M==0)
			break;
		else if(N==0 || M==0)
			cout<<"No carry operation."<<endl;
		else
		{
			int c=carry(N,M);
			if(c==0)
				cout<<"No carry operation."<<endl;
			else if(c==1)
				cout<<"1 carry operation."<<endl;
			else
				cout<<carry(N,M)<<" carry operations."<<endl;
		}
			
	}
}

