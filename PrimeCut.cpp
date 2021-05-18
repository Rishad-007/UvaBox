
/*
Name: Rishad Nur;
BRUR, CSE,
mail: rishad.nur007@gmail.com;
*/

#include<bits/stdc++.h>
using namespace std;

#define N 1010


long int chekerbox[N]={0};
int tik;
vector<int>primebox;

void Letscrack()
{
    int i,j,x,y,c;
    primebox.push_back(1);
    tik=1;
    for ( i = 2; i*i <= N; i++)
    {
        if(chekerbox[i]==0)
        {
           
            for(j=i*i;j<=N;j=j+i)
            {
                chekerbox[j]=1;
            }
        }
    }
    for(i=2;i<N;i++)
    {
        if(chekerbox[i]==0)
        {
            primebox.push_back(i);
        }
    }
    //cout<<primebox.size()<<endl;
    
    
}

int main()
{
    #ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    #endif
    
    Letscrack();
   
        int a,b,c,d,x,y,i,j,g,h;
        while(cin>>a>>b)
        {
            vector<int>nicetohaveit;
            cout<<a<<" "<<b<<":";
            for(i=0;primebox[i]<=a;i++)
            {
                d=primebox[i];
                //cout<<endl;
                //cout<<d<<endl;
                nicetohaveit.push_back(d);
                
            }
        
        x=nicetohaveit.size();
        //cout<<x<<endl;
        c=b*2;
        if(x%2==1 )
        {
            c--;
        }
        g=floor(c/2.00);
        h=ceil(c/2.00);
        for(i=max(0,((x/2)-g));i<min(x,((x/2)+h)) && nicetohaveit[i]!=0;i++)
        {
            cout<<" "<<nicetohaveit[i];
        }
        cout<<endl<<endl;
        }
    
    

    return 0;
}
