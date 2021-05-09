//https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=310


/*
Name: Rishad Nur;
BRUR, CSE,
mail: rishad.nur007@gmail.com;
*/

#include<bits/stdc++.h>
using namespace std;

long int modulofinder(long int a, long int b, long int c)
{
    long long int temp=1,i,j,k;
    while(b>0)
    {
        k=b%2;
        if(k==1)
        {
            temp=(temp*a)%c;
        }
       a=(a*a)%c;
        b=b/2;
    
    }
    return temp;

}


int main()
{
    long int a,b,c,d;
       
    while(cin>>a>>b>>c)
    {
        d=modulofinder(a,b,c);
        cout<<d<<endl;
    }



    return 0;
}
