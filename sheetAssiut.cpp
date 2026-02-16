#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
// strart solve problem --> sheet assiut --> contest 1 ;
//Problem A
/*
double D,priceAf;
cin>>D>>priceAf;
double Ed=D/100;
double Ed1=1-Ed;
double priceBe=priceAf/Ed1;
cout<<fixed<<setprecision(2)<<priceBe;
*/


//problem B

/*

long long ME,MO,DI;
cin>>ME>>MO>>DI;
if((ME%DI==0)&&(MO%DI==0)){
    cout<<"Both";
}else {
    if(ME%DI==0){
        cout<<"Memo";
    }else if (MO%DI==0){
        cout<<"Momo";
    }else{
        cout<<"No One";
    }
}

*/

//problem C
/*
char x;
cin>>x;
int NCH=int(x);

if(NCH==122){
    NCH=97;
    cout<<char(NCH);
}else{
    
   cout<<char(NCH+1);

}

*/

//problem D
/*
long long n1 , n2 , n3 , res;
cin>>n1>>n2>>n3>>res;
if(n1+n2*n3==res){
    cout<<"YES";
}else if (n1*n2+n3==res){
    cout<<"YES";
}else if (n1-n2*n3==res){
    cout<<"YES";
}else if (n1*n2-n3==res){
    cout<<"YES";
}else if (n1+n2-n3==res){
    cout<<"YES";
}else if (n1-n2+n3==res){
    cout<<"YES";
}else{
    cout<<"NO";

}

*/

//problem E
/*
long long a,b;
cin>>a>>b;
if((a+1==b || a-1==b)||(b+1==a || b-1==a) ||(a==b && a!=0 &&b!=0)){
    
     cout<<"YES";
    
}else if (a==0 && b==0){
    cout<<"NO";
}else{
    cout<<"NO";

}
*/
//problem F
/*
unsigned int a, b;
    cin >> a >> b;
    
  
    cout << (a ^ b) << endl;
*/

//problem G
/*
long long e=0,m=0,b=0;
long long FinNum=0;
cin>>e>>m>>b;
long long last =min({e,m,b});
e-=last;
m-=last;
b-=last;
FinNum+=last;
if(e>0 && b>0){
    long long Last=min(e/2,b);
    e-=Last;
    b-=Last;
    FinNum+=Last;

}

cout<<FinNum;

*/
//PRoblem  H
/*
long long x,y,z;
cin>>x>>y>>z;

if ((x * y) % z != 0) {
    cout << "double";
} else {
    long long res = (x * y) / z; 
    if (res <= 2147483647) {
        cout << "int";
    } else {
        cout << "long long";
    }
}
*/
//Problem  I 
/*
long long x , first=0,secound=0,maxi;
cin>>x;
while(x !=0){
first=x%10;
secound=x/10;
maxi=max(first,secound);
if(first!=0 && secound !=0){
if(maxi%first==0 && maxi%secound==0){
    cout<<"YES";
    break;
}else{
    cout<<"NO";
    break;

}
}else{
    cout<<"YES";
    break;
}
}
*/





























// End solve problem

return 0;

}