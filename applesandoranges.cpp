// APPLES AND ORANGES   #################################################################
// #include <iostream>
// using namespace std;
// int main(){
//     int a,b,s,t,i,n,m;
//     int house[2];
//     int tree[2];
//     int flaga = 0;
//     int flagb = 0;
//     for(i=0;i<2;i++){
//         cin>> house[i];
//     }
//     for(i=0;i<2;i++){
//         cin>> tree[i];
//     }
//     cin>>m;
//     cin>>n;
//     int apples[m];
//     int oranges[n];
//     for(i=0;i<m;i++){
//         cin>>apples[i];
//     }
//      for(i=0;i<n;i++){
//         cin>>oranges[i];
//     }
//     for(i=0;i<m;i++){
//         if(tree[0]+apples[i]>=house[0] && tree[0]+apples[i]<=house[1]){
//             flaga++;
//         }
//     }
//     for(i=0;i<n;i++){
//         if(tree[1]+oranges[i]>=house[0] && tree[1]+oranges[i]<=house[1]){
//             flagb++;
//         }
//     }
//     cout<<flaga<<endl;
//     cout<<flagb<<endl;
//     return 0;  
// }