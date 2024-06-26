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

// //to count alphabets , digits and special char in string(without ctype.h)
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[30];
//     int alpha=0,digit=0,special=0;
//     fgets(str, sizeof(str), stdin);
//     int len= strlen(str);
//     if ( len>0 && str[len-1]=='\n'){
//         str[len-1]='\0';
//     }
//     for (int i=0; i<strlen(str);i++){
//         if(str[i]<='z' && str[i]>='a'||str[i]<='Z' && str[i]>='A'){
//             alpha++;
//         }
//         else if (str[i]<='9' && str[i]>='0'){
//             digit++;
//         }
//         else{
//             special++;
//         }
//     }
//     printf("%d\n",alpha);
//     printf("%d\n",digit);
//     printf("%d",special);
//     return 0;
// }

// //to count alphabets , digits and special char in string(with ctype.h)
// #include<stdio.h>
// #include<ctype.h>
// #include<string.h>
// int main(){
//     char str[30];
//     int alpha=0,digit=0,special=0;
//     fgets(str, sizeof(str), stdin);
//     int len= strlen(str)-1;
//     for (int i=0; i<len;i++){
//         if(isalpha(str[i])){
//             alpha++;
//         }
//         else if (isdigit(str[i])){
//             digit++;
//         }
//         else{
//             special++;
//         }
//     }
//     printf("%d\n",alpha);
//     printf("%d\n",digit);
//     printf("%d",special);
//     return 0;
// }

// // to remove duplicates from string
// #include<stdio.h>
// #include<string.h>
// char* duplicate_remover(char str[]){
//     int index=0;
//     int i;
//     for(i=0; i<strlen(str); i++){
//         int j;
//         for(j=0; j<i; j++){
//             if(str[i]==str[j]){
//                 break;
//             }    
//         }
//         if(j==i){
//             str[index++]=str[i];
//             }
//     }
//     str[index]='\0';
//     return str;
// }
// int main(){
//     char str[30],str2[30];
//     scanf("%s",&str);
//     strcpy(str2,str);
//     printf("\n%s",str2);
//     printf("\n%s",duplicate_remover(str));
//     return 0;
// }

// // to count the frequency of each char in string
// #include<stdio.h>
// int main(){
//     char str[100];
//     int i,count[26]={0};
//     scanf("%s",&str);
//     for( i=0; str[i]!='\0';i++){
//         count[str[i]-'a']++;
//     }
//     for(i=0;i<26;i++){
//         if(count[i]==0){
//             continue;
//         }
//         printf("'%c'= %d\n",'a'+i,count[i]);
//     }
//     return 0;
// }

// // swapping by call by value
// #include<stdio.h>
// void swap(int a, int b){
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("\nAfter swapping:%d %d",a,b);
// }
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("Before swapping:%d %d",a,b);
//     swap(a,b);
//     return 0;
// }

// //leap year finder
// #include<stdio.h>
// int leap(int n){
//     if (n%4==0){
//         if(n%100!=0){
//             return 1;
//         }
//         else if(n%400==0){
//             return 1;
//         }
//         else{
//             return 0;
//         }
//     }
//     else{
//         return 0;
//     }

// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(leap(n)){
//         printf("leap");
//     }
//     else{
//         printf("not leap");
//     }
//     return 0;
// }


//menu factorail / prime or exit
// #include<stdio.h>
// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     return n* factorial(n-1);
// }
// int prime(int n){
//     for(int i=2; i<n/2;i++){
//         if(n%i==0){
//             return 0;
//         }
//         else{
//             return 1;
//         }
//     }
// }
// int menu(){
//     int choice,n;
//     printf("\nPress 1 for factorail");
//     printf("\nPress 2 for finding prime or not");
//     printf("\nPress 3 for Exit");
//     printf("\nEnter Choice: ");
//     scanf("%d",&choice);
//     switch(choice){
//         case 1:
//         printf("Enter a number(1-10):");
//         scanf("%d",&n);
//         printf("factorail = %d",factorial(n));
//         menu();
//         break;
//         case 2:
//         printf("Enter a number:");
//         scanf("%d",&n);
//         prime(n)?printf("prime"):printf("not prime");
//         menu();
//         break;
//         case 3:
//         break;
//         default:
//         printf("Invalid choice!");
//         menu();
//         break;
//     }
// }
// int main(){
//     menu();
//     return 0;
// }

//transpose of matrix
// #include<stdio.h>
// int main(){
//     int matrix[10][10];
//     int i,j,rows,cols;
//     scanf("%d %d",&rows,&cols);
//     for(i=0;i<rows;i++){
//         for(j=0;j<cols;j++){
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     for(j=0;j<cols;j++){
//         for(i=0;i<rows;i++){
//             printf("%d ",matrix[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // to find largest and second largest number in array
// #include<stdio.h>
// int arr_sort(int* arr,int size){
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-1-i;j++){
//             if(arr[j]>arr[j+1]){
//             arr[j]=arr[j]+arr[j+1];
//             arr[j+1]=arr[j]-arr[j+1];
//             arr[j]=arr[j]-arr[j+1];
//             }
//         }   
//     }
//     return 0;

// }
// int main(){
//     int i,arr[100],size;
//     scanf("%d",&size);
//     for(i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     arr_sort(arr,size);
//     printf("%d\n%d",arr[size-1],arr[size-2]);
//     return 0;
// }

// // students marks counter using structure
// #include<stdio.h>
// int main(){
//     int n;
//     struct Student
//     { char name[20];
//       int roll;
//       int marks[3];
//     };
//     printf("Enter no. of students: ");
//     scanf("%d",&n);
//     struct Student student[10];
//     for(int i=0; i<n;i++){
//         scanf("%s",&student[i].name);
//         scanf("%d",&student[i].roll);
//         for(int j=0;j<3;j++){
//             scanf("%d",&student[i].marks[j]);
//         }       
//     }
//     for(int i=0;i<n;i++){
//         float avg=0;
//         for(int j=0;j<3;j++){
//             avg+=student[i].marks[j];
//         }
//         printf("%.2f\n",avg/3);  
//     }
//     return 0;   
// }

// // even and odd digit counter
// #include<stdio.h>
// void count(int n){
//     int even=0, odd=0;
//     for(int i=n ; i>0;i=i/10){
//         if((i%10)%2==0){
//             even++;
//         }
//         else{
//             odd++;
//         }
//     }
//     printf("%d\n%d",even,odd);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     count(n);
//     return 0;
// }

// // leftmost digit day extractor
// #include<stdio.h>
// int left_finder(int n,int left){
//     for(int i=n;i>0;i=i/10){
//         left=i%10;
//     }
//     return left;
// }
// int main(){
//     int n,left=0;
//     scanf("%d",&n);
//     left=left_finder(n,left);
//     switch(left){
//         case 1: printf("Monday");
//                 break;
//         case 2: printf("Tuesday");
//                 break;
//         case 3: printf("Wednesday");
//                 break;
//         case 4: printf("Thursday");
//                 break;
//         case 5: printf("Friday");
//                 break;
//         case 6: printf("Saturday");
//                 break;
//         case 7: printf("Sunday");
//                 break;
//         default: printf("INVALID NUMBER!");                                              
//     }
//     return 0;
// }

// // to find differnce of largest and smallest in array
// #include<stdio.h>
// int array_sort(int* arr){
//     for(int i=0;i<5-1;i++){
//         for(int j=0;j<5-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 arr[j]=arr[j]+arr[j+1];
//                 arr[j+1]=arr[j]-arr[j+1];
//                 arr[j]=arr[j]-arr[j+1];
//             }
//         }
//     }
//     return 0;
// }
// int main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
//     array_sort(arr);
//     printf("%d",arr[4]-arr[0]);
//     return 0;
// }

// // swap two numbers using pointers
// #include<stdio.h>
// void swap(int*a , int *b){
//     *a=*a+*b;
//     *b=*a-*b;
//     *a=*a-*b;
// }
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     swap(&a,&b);
//     printf("After Swapping: %d %d",a,b);
// }

// // to reverse the string and check if string is pallindrome or not
// #include<stdio.h>
// #include<string.h>
// int pallindrome(char str[]){
//     int index=0;
//     int len=strlen(str);
//     if(str[len-1]=='\n'){
//         str[len-1]='\0';
//         len--;
//     }
//     char str2[30];
//     for(int i=len-1 ;i>=0;i--){
//         str2[index++]=str[i];
//     }
//     str[index]='\0';
//     printf("%s",str2);
//     if(strcmp(str2,str)==0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     char str[30];
//     fgets(str,sizeof(str),stdin);
//     pallindrome(str)?printf("\npallindrome"):printf("\nnot pallindrome");
//     return 0;
// }

// // toggle upper to lower
// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// void toggle(char str[]){
//     char str2[30];
//     int index=0;
//     for(int i=0;i<strlen(str);i++){
//         if(islower(str[i])){
//             str2[index++]=toupper(str[i]);
//         }
//         else{
//             str2[index++]=tolower(str[i]);     
//         }
//     }
//     str2[index]='\0';
//     printf("%s",str2);
// }
// int main(){
//     char str[30];
//     scanf("%s",&str);
//     toggle(str);
//     return 0;
// }

