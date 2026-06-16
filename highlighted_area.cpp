// HIGHLIGHTED AREA  ####################################################################
// #include <iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     int arr[26];
//     for(i=0;i<26;i++){
//         cin>>arr[i];
//     }
//     string s;
//     cin>>s;
//     char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
//     for(i=0;i<s.length();i++){
//         for(j=0;j<26;j++){
//             if(s[i]==alpha[j]){
//                 s[i]=arr[j];
//             }
//         }
//     }
//     int max = s[0];
//     for(i=0;i<s.length();i++){
//         if(s[i]>s[0]){
//             max = s[i];
//         }
//     }
//      cout<<s.length()*max;
// }