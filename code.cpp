#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define M1 1000000007
#define M2 998244353
#define ll long long
#define ld long double
#define vi vector<int>
#define vl vector<long>
#define vll vector<long long>
#define pll pair<ll,ll>
#define REP(i,a,b) for(ll i=a;i<b;i++)
#define REPI(i,a,b) for(ll i=b-1;i>=a;i--)
#define F first
#define S second
#define PB push_back
#define DB pop_back
#define MP make_pair
#define MT make_tuple
#define G(a,b) get<a>(b)
#define V(a) vector<a>
class Person
{   public:
    int Age;
    bool verfied;
    int price=0;
    
    void calculate(int age)
    {
        verfied=false;
        Age=age;
        if(age<=2)
        price=0;
        else if(age>2 and age<18)
        price=100;
        else if(age>=18 and age<60)
        price=500;
        else if(age>=60)
        price=300;
    }
    
    
};

void fun(){
	int n;
	cout<<"Enter Number Of Guest\n";
	cin>>n;
	Person zoo[n];
	int total=0;
	cout<<"Enter Age Of Guests\n";
	for(int i=0;i<n;i++)
	{   int age;
	    cin>>age;
	    zoo[i].calculate(age);
	    total+=zoo[i].price;
	}
	cout<<"*****ZOO TICKET***************\n";
	cout<<"Number Of Guest = "<<n<<endl;
	cout<<"Name     Age  Price     Verify\n";
	for(int i=0;i<n;i++)
	{
	    cout<<"Guest "<<i+1<<"  "<<zoo[i].Age<<"  "<<zoo[i].price<<endl;
	}
	cout<<"Total Price  "<<total<<endl;
	cout<<"*******************************\n";
}
int32_t main()
{
   fun();
}

*/
INPUT:-
2
23
50
OUTPUT:-
Enter Number Of Guest
Enter Age Of Guests
*****ZOO TICKET***************
Number Of Guest = 2
Name     Age  Price     Verify
Guest 1  50  500
Guest 2  5  100
Total Price  600
*******************************
/*
