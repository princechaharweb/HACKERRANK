
GRATEST OF FOUR
#include <iostream>
#include <cstdio>
using namespace std;
int greatestoffour(int a,int b,int c,int d)
    {
        if(a>b&&a>c&& a>d)
        return a;
        else if(b>c&&b>d)
        return b;
        else if(c>d)
        return c;
        else
        return d;

         }
int main() {
    int n1,n2,n3,n4 ;
    cin>> n1 >> n2 >> n3 >> n4 ;
     cout << greatestoffour(n1,n2,n3,n4);
    return 0 ; 
}

#include <iostream>
using namespace std;
int main(){    
       int n,i;
       cin>>n;
       int arr[n];
       for(i=0; i<n ;i++){
        cin >> arr[i];
       }
       for(i=0;i<n;i++){
              cout << arr[i] << " ";
       }
       return 0;
}


SWAP ##################################################################################
#include <iostream>
using namespace std;
int main(){
    string a;
    string b;
    cin >> a ;
    cin >> b ;
    cout << a.length() << " " << b.length() << endl ;
    string c = a + b ;
    cout << c << endl ;
    char temp = a[0];
    a[0] = b[0];
    b[0] =  temp ;
    cout<<a << " " << b;
    return 0;    
//     }



A VERY BIG SUM  ########################################################################
#include <iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++){
    cin>> arr[i];
     }
    long long  sum = 0;
    for(i=0;i<n;i++){
      sum = sum + arr[i];
    }
    cout<< sum ;
    return 0;
}



PLUS MINUS  #############################################################################
#include <iostream>
using namespace std;
int main(){
    int n,i;
    float flag1 =0;
    float flag2 =0;
    float flag3 =0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]>0){
            flag1++;     
        }
        else if(arr[i]<0){
            flag2++;     
        }
        else{
            flag3++;  
          }
    }
    float sump = flag1/n;
    float sumn = flag2/n;
    float sumz = flag3/n;
    
    cout << sump << endl;
    cout << sumn << endl;
    cout << sumz << endl;
     return 0;
}


ARRAY SUM   ############################################################################
#include <iostream>
using namespace std;
int main (){
    int i,n,j;
    cin>>n;
    int sum=0;
    int arr[n][n] ;
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j] ;
        }
    }
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
        if(i==j){
             sum = sum + arr[i][j];
        }
        }
    }
    cout<< "sum is : " <<sum;
}


STAIRCASE   ###########################################################################
#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout << " ";
        }
        for(j=1;j<=i;j++){
            cout << "#";
        }
        cout<<endl;
    }
    return 0;
}


COMPARE THE TRIPLET   ##################################################################
#include <iostream>
using namespace std;
int main (){
    int i,n;
    int flaga = 0 ;
    int flagb = 0 ;
    int a[3];
    int b[3];
   for(i=0;i<3;i++){
    cin>>a[i];
   }
   for(i=0;i<3;i++){
     cin>>b[i];
   }
   for(i=0;i<3;i++){
    if(a[i]>b[i]){
        flaga++;
    }
    if(a[i]<b[i]){
        flagb++;
    }
   }

   cout << flaga << " " << flagb;
}


BIRTHDAY CANDLES    #####################################################################
#include <iostream>
using namespace std;
int main(){
    int n,i;
    int flag = 0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest = arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]==largest){
            flag++;
        }
    }
    cout<<flag;  
}


MINI MAX SUM    #####################################################################
#include <iostream>
using namespace std;
int main(){
    int n,i;
    int arr[5];
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    int maximum = arr[0];
    for(i=1;i<5;i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }
    }
    int minimum = arr[0];
    for(i=1;i<5;i++){
        if(arr[i]<minimum){
            minimum = arr[i];
        }
    }
    int sum = 0;
    for(i=0;i<5;i++){
        sum += arr[i];
    }
    cout<<sum-maximum<<" "<<sum-minimum;
    return 0;
}



GRADING STUDENTS   ###################################################################
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int grade = (arr[i]/5 + 1)*5;
    for(i=0;i<n;i++){
        if(arr[i]>=38){
        if(((arr[i]/5 + 1)*5 - arr[i])<3){
            cout<<(arr[i]/5 + 1)*5<<endl;  
        }
        else{
            cout<<arr[i]<<endl;
        }
     }
     else{
        cout << arr[i]<<endl;
     }
       
    }
}


APPLES AND ORANGES   #################################################################
#include <iostream>
using namespace std;
int main(){
    int a,b,s,t,i,n,m;
    int house[2];
    int tree[2];
    int flaga = 0;
    int flagb = 0;
    for(i=0;i<2;i++){
        cin>> house[i];
    }
    for(i=0;i<2;i++){
        cin>> tree[i];
    }
    cin>>m;
    cin>>n;
    int apples[m];
    int oranges[n];
    for(i=0;i<m;i++){
        cin>>apples[i];
    }
     for(i=0;i<n;i++){
        cin>>oranges[i];
    }
    for(i=0;i<m;i++){
        if(tree[0]+apples[i]>=house[0] && tree[0]+apples[i]<=house[1]){
            flaga++;
        }
    }
    for(i=0;i<n;i++){
        if(tree[1]+oranges[i]>=house[0] && tree[1]+oranges[i]<=house[1]){
            flagb++;
        }
    }
    cout<<flaga<<endl;
    cout<<flagb<<endl;
    return 0;  
}



KANGAROO JUMP  #########################################################################
#include <iostream>
using namespace std;
int main(){
    int x1,v1,x2,v2,i;
    int flag = 0;
    cin>>x1>>v1>>x2>>v2;
    for(i=0;i<10000;i++){
        if((x1+i*v1) - (x2+i*v2) == 0){
            flag++;
        }
    }
    if(flag>=1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}




Scoreboard   ########################################################################
#include <iostream>
using namespace std;
int main(){
    int i,n;
    int flagmax = 0;
    int flagmin = 0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            flagmax++;
        }
        if(arr[i]<min){
            min=arr[i];
            flagmin++;
        }
    }
    cout<<flagmax<<" "<<flagmin; 
    
}




Chocolate/SUBARRAY  *******************************************************************
#include <iostream>
using namespace std;
int main(){
    int i,j,n,d,m;
    cin>>n;
    int flag =0;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>d>>m;
    int sum = 0;
    for(i=0;i<n-m;i++){
          sum=0;
        for(j=i;j<i+m;j++){
             sum = sum + arr[j];     
        }
        if(sum==d){
            flag++;
        }  
    }
    cout<<flag;
    
}


DIVISION IN ARRAY ####################################################################
#include <iostream>
using namespace std;
int main(){
    int i,j,n,k;
    cin>>n;
    cin>>k;
    int flag=0;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=1+i;j<n;j++){
            if((arr[i]+arr[j])%k ==0){
                flag++;
            }
        }
    }
    cout<<flag;
}


BIRD FREQUENCY ************************************************************************
#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    int arr[n];
    int flag[6]={0};
    for(i=0;i<n;i++){
        cin>>arr[i];
        flag[arr[i]]++;
    }
    int max=flag[1];
    int answer=1;
    for(i=2;i<=5;i++){
        if(flag[i]>max){
            max=flag[i];
            answer=i;
        }
    }
    cout<<answer;
    }

SALES BY MATCH #######################################################################
#include <iostream>
using namespace std;
int main(){
    int i,n,j;
    cin>>n;
    int arr[n];
    int flag[1000]={0};
    for(i=0;i<n;i++){
        cin>>arr[i];
        flag[arr[i]]++;
    }
    int sum=0;
    for(i=0;i<1000;i++){
        sum = sum + flag[i]/2;
    }
    cout<<sum;
}




BOOK PAGES ###########################################################################
#include <iostream>
using namespace std;
int main(){
    int i,p,n;
    cin>>n;
    cin>>p;
    int front;
    int back;
    if(p-1<n-p){
        cout<<p/2; 
    }
    if(p-1==n-p){
        if(p/2<(n-p)/2){
            cout<<p/2;
        }
        else{
            cout<<(n-p)/2;
            }
    }
    if(p-1>n-p){
    if(n%2==0){
       cout<<(n-p+1)/2;
    }
    else{
        cout<<(n-p)/2;
    }
    }
}




CAT AND MOUSE #########################################################################
#include <iostream>
using namespace std;
int main(){
    int n,i,j,q;
    cin>>n;
    int arr [n][3];
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++){
        if(abs(arr[i][0]-arr[i][2])>abs(arr[i][1]-arr[i][2])){
            cout<<"Cat B"<<endl;
        }
        else if(abs(arr[i][0]-arr[i][2])==abs(arr[i][1]-arr[i][2])){
            cout<<"Mouse C"<<endl;
        }
        else{
            cout<<"Cat A"<<endl;
        }
    }
    }



HIGHLIGHTED AREA  ####################################################################
#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    int arr[26];
    for(i=0;i<26;i++){
        cin>>arr[i];
    }
    string s;
    cin>>s;
    char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for(i=0;i<s.length();i++){
        for(j=0;j<26;j++){
            if(s[i]==alpha[j]){
                s[i]=arr[j];
            }
        }
    }
    int max = s[0];
    for(i=0;i<s.length();i++){
        if(s[i]>s[0]){
            max = s[i];
        }
    }
     cout<<s.length()*max;
}





ELECTRONICS SHOP  ####################################################################
#include <iostream>
using namespace std;
int main(){
    int i,n,m,j;
    long long b;
    cin>>b>>n>>m;
    long long key[n];
    long long dri[m];
    for(i=0;i<n;i++){
        cin>>key[i];
    }
    for(i=0;i<m;i++){
        cin>>dri[i];
    }
    long long sum;
    long long max = -1;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
             sum = key[i] + dri[j];
        if(sum<=b && sum>=max){
            max=sum;
        }
        }
    }
    
        cout<<max;   
}



ANGRY PROFESSOR #######################################################################
#include <iostream>
using namespace std;
int main(){
     int t,i,j,p;
     cin>>t;
     int arr[1000];
     int n[1000];
     int k[1000];
    
     for(i=0;i<t;i++){
         int flag=0;
        cin>>n[i]>>k[i];
        for(j=0;j<n[i];j++){
            cin>>arr[j];
        }
        for(p=0;p<n[i];p++){
            if(arr[p]<=0){
                flag++;
            }
        }
        if(flag>=k[i]){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
     }
     
     
}



UTOPIAN TREE #########################################################################
#include <iostream>
using namespace std;
int main(){
    int t,n,i,j;
    cin>>t;
    int arr[t];
    for(i=0;i<t;i++){
        cin>>arr[i];
    }
    int h = 0;
    
    for(i=0;i<t;i++){
        int answer=0;
    for(j=0;j<=arr[i];j++){
        if(j%2==0){
            answer=answer+1;
        }
        else{
            answer=answer*2;
        }
    }
    cout<<answer<<endl;
    }
}


