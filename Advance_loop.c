// #include<stdio.h>
// int main(){
//     // create a login program using user name and password;
//      long long int user;
//      long long int pass;
//     printf("Enter username :");
//     scanf("%lld",&user);
//     printf("Enter password :");
//     scanf("%lld",&pass);
//     if(user=='vxkshay'){
//         printf("Correct user name ");
//     }
//     else{
//         printf("Incorrect username ");
//     }
//     if(pass=='678'){
//         printf("correct password");
//     }
//     else{
//         printf("Incorrect password ");
//     }


// return 0;

// }



#include<stdio.h>
int main(){
    int n;
    int rem;
    int rev=0;
    printf("Enter a number :");
    scanf("%d",&n);
while(n>0){
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}
printf("%d is the reverse no.",rev);
return 0;
}