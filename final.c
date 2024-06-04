// // reverse of number using recursion.
// #include<stdio.h>
// int reverse(int n,int rev){
//     if(n==0){
//         return rev;
//     }
//     rev= rev*10+n%10;
//     return reverse(n/10,rev);
// }
// int main(){
//     int num,rev=0;
//     scanf("%d",&num);
//     int reversed= reverse(num,rev);
//     printf("%d",reversed);
//     return 0;
// }

// // sum of digits by recursion.
// #include<stdio.h>
// int sum_digits(int n){
//     if (n==0){
//         return 0;
//     }
//     return n%10 + sum_digits(n/10);
// }
// int main(){
//     int num;
//     scanf("%d",&num);
//     printf("%d",sum_digits(num));
//     return 0;
// }

// //to find element in 1d array/Linear Search
// #include<stdio.h>
// int search(int arr[], int target){
//     for(int i=0; i<5; i++){
//         if(arr[i]==target){
//             return i+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[5], target;
//     for(int i=0; i<5; i++){
//         scanf("%d",&arr[i]);
//     }
//     scanf("%d",&target);
//     printf("%d",search(arr, target));
//     return 0;
// }

// // sum of n natural numbers using recursion
// #include<stdio.h>
// int natural_sum(int n){
//     if(n<1){
//         return 0;
//     }
//     return n + natural_sum(n-1);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d",natural_sum(n));
//     return 0;
// }

