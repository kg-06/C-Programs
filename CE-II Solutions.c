// #include<stdio.h>
// int main(){
//     int sum=0,n,i=1;
//     printf("Enter a natural number: ");
//     scanf("%d",&n);
//     while(i<=n){
//         sum+=i;
//         i++;
//     }
//     printf("Sum of first %d natural numbers is %d",n,sum);
//     return 0;
// }

// #include<stdio.h>
// int power(int base, int exponent){
//     int result = 1;
//     for (int i = 0; i < exponent; i++){
//         result *= base;
//     }
//     return result;
// }

// int main(){
//     int n,len=0,num=0;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for(int i=n;i>0;i=i/10){
//         len+=1;
//     }
//     for(int i=n;i>0;i=i/10){
//         int remainder=i%10;
//         num+=power(remainder,len);
//     }
//     if(num==n){
//         printf("%d is armstrong number",n);
//     }
//     else{
//         printf("%d is not a armstrong number",n);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,len=0,num=0;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=n;i>0;i=i/10){
//         len+=1;
//     }
//     printf("Number of digits in %d is %d\n",n,len);
//     for(int i=n;i>0;i=i/10){
//         int remainder=i%10;
//         num=num*10+remainder;
//     }
//     printf("Reverse of %d is %d",n,num);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,a=0,b=1,c;
//     printf("Enter the number of fabonacci numbers you want: ");
//     scanf("%d",&n);
//     int i=0;
//     while(i<n){
//         printf("%d ",a);
//         c=a+b;
//         a=b;
//         b=c;
//         i++;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,i,j;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,i,j,space;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(space=1;space<=n-i;space++){
//             printf(" ");
//         }
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,i,j;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             printf("%d ",i*j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int isPrime(int num) {
//     if (num<=1) {
//         return 0;}
//     for (int i=2; i<=num/2; i++) {
//         if(num%i==0) {
//             return 0; }
//     }
//     return 1; 
// }

// int isArmstrong(int num) {
//     int originalNum= num;
//     int sum=0;
//     int digits=0;
//     while(num!=0){
//         digits++;
//         num/=10;
//     }
//     num= originalNum;
//     while (num!=0){
//         int digit= num%10;
//         sum+=pow(digit,digits);
//         num/=10;
//     }
//     return sum== originalNum; 
// }

// int isPerfect(int num) {
//     int sum=0;
//     for (int i=1; i<=num/2; i++) {
//         if (num%i==0) {
//             sum+=i;}
//     }
//     return sum== num;
// }

// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);

//     if(isPrime(num)){
//         printf("%d is a prime number.\n",num);
//     } else{
//         printf("%d is not a prime number.\n",num);}

//     if(isArmstrong(num)) {
//         printf("%d is an Armstrong number.\n",num);
//     } else {
//         printf("%d is not an Armstrong number.\n",num); }

//     if(isPerfect(num)) {
//         printf("%d is a perfect number.\n",num);
//     } else {
//         printf("%d is not a perfect number.\n",num);}

//     return 0;
// }

// #include<stdio.h>
// float circumfrence(float radius){
//     float result= 2*3.14*radius;
//     return result;
// }
// int main(){
//     float r;
//     printf("Enter the radius of circle: ");
//     scanf("%f",&r);
//     printf("circumfrence of circle is %f",circumfrence(r));
//     return 0;
// }

// #include<stdio.h>
// void swap(int a,int b){
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("After Swapping: x=%d and y=%d",a,b);
// }
// int main(){
//     int x,y;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&x,&y);
//     printf("Before Swapping: x=%d and y=%d\n",x,y);
//     swap(x,y);
//     return 0;
// }

// #include<stdio.h>
// void swapByReference(int *a,int *b){
//     *a=*a+*b;
//     *b=*a-*b;
//     *a=*a-*b;    
// }
// int main(){
//     int x,y;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&x,&y);
//     printf("Before Swapping: x=%d and y=%d\n",x,y);
//     swapByReference(&x,&y);
//     printf("After Swapping: x=%d and y=%d",x,y);
//     return 0;
// }

// #include<stdio.h>
// void insert(int arr[50],int *size,int ele,int position){
//     if (position < 0 || position > *size) {
//         printf("Invalid position. Element cannot be inserted.\n");
//         return;
//     }
//     for(int i=*size-1;i>=position;i--){
//         arr[i+1]=arr[i];
//     }
//     arr[position]=ele;
//     (*size)++;
// }
// void update(int arr[50],int *size,int ele,int position){
//     if (position < 0 || position > *size) {
//         printf("Invalid position. Element cannot be inserted.\n");
//         return;
//     }
//     arr[position]=ele;
// }
// void delete(int arr[50],int *size,int position){
//     if (position < 0 || position >= *size) {
//         printf("Invalid position. Element cannot be deleted.\n");
//         return;
//     }
//     for(int i=position;i<*size-1;i++){
//         arr[i]=arr[i+1];
//     }
//     (*size)--;
// }
// void display(int arr[50], int *size){
//     if (size == 0) {
//         printf("Array is empty.\n");
//         return;
//     }
//     printf("ARRAY elements: ");
//     for(int i=0;i<*size;++i){
//         printf("%d ",arr[i]);
//     }
// }
// int search(int arr[50],int size,int element){
//     for(int i=0;i<size;i++){
//         if(arr[i]==element){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[50],size,x,pos;
//     printf("Enter the size of array: ");
//     scanf("%d",&size);
//     printf("Enter the elements in array: ");
//     for(int i=0;i<size;++i){
//         scanf("%d",&arr[i]);
//     }
//     display(arr,&size);
//     printf("\nEnter the element to be inserted: ");
//     scanf("%d",&x);
//     printf("Enter the postion to be inserted at: ");
//     scanf("%d",&pos);
//     insert(arr,&size,x,pos);
//     display(arr,&size);
//     int x2,pos2;
//     printf("\nEnter the element to be updated: ");
//     scanf("%d",&x2);
//     printf("Enter the postion to be updated at: ");
//     scanf("%d",&pos2);
//     update(arr,&size,x2,pos2);
//     display(arr,&size);
//     int pos3;
//     printf("\nEnter the position to delete the element: ");
//     scanf("%d",&pos3);
//     delete(arr,&size,pos3);
//     display(arr,&size);
//     int y;
//     printf("\nEnter the element to search: ");
//     scanf("%d",&y);
//     int position=search(arr,size,y);
//     if(position!=-1){
//         printf("Element %d found at position %d\n",y,position);
//     }
//     else{
//         printf("Element %d not found in array\n",y);
//     }
//     return 0;
// }


// #include<stdio.h>
// void sum(int arr[50],int size){
//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum+=arr[i];
//     }
//     printf("Sum of element of arrays is %d",sum);
// }
// int main(){
//     int arr[50],size;
//     printf("Enter size of array: ");
//     scanf("%d",&size);
//     printf("Enter array elements: ");
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     sum(arr,size);
//     return 0;
// }

// #include<stdio.h>
// void square(int *num){
//     *num=(*num)*(*num);
// }
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     square(&n);
//     printf("Square of the number is %d",n);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int matrix1[3][3],matrix2[3][3],result[3][3],i,j,k;
//     printf("Enter 3 numbers in each row of 1st Matrix:\n");
//     for(i=0;i<3;++i){
//         for(j=0;j<3;++j){
//             scanf("%d",&matrix1[i][j]);
//         }
//     }
//     printf("Enter 3 numbers in each row of 2nd Matrix:\n");
//     for(i=0;i<3;++i){
//         for(j=0;j<3;++j){
//             scanf("%d",&matrix2[i][j]);
//         }
//     }
//     for(i=0;i<3;++i){
//         for(j=0;j<3;++j){
//             result[i][j]=0;
//             for(k=0;k<3;++k){
//                 result[i][j]+=matrix1[i][k]*matrix2[k][j];
//             }
            
//         }
//     }
//     printf("Multiplication of Matrix1 and Matrix 2 is:\n");
//     for(i=0;i<3;++i){
//         for(j=0;j<3;++j){
//             printf("%d ",result[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[3][3],i,j;
//     printf("Enter 3 numbers in each row:\n");
//     for(i=0;i<3;++i){
//         for(j=0;j<3;++j){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("this is the original array:");
//     for(i=0;i<3;++i){
//         printf("\n");
//         for(j=0;j<3;++j){
//             printf("%d ",arr[i][j]);
//         }
//     }
//     printf("\nthis is the transpose:");
//     for(i=0;i<3;++i){
//         printf("\n");
//         for(j=0;j<3;++j){
//             printf("%d ",arr[j][i]);
//         }
//     }
//     return 0;
// }   

#include <stdio.h>
float radius,form,form1;
float circumference(float radius){
    form= 2*3.14*radius;
    return form;
}
float area(float radius){
    form1-=3.14*radius*radius;
    return form1;
}
int main(){
    printf("Enter the radius :\n");
    scanf("%f",&radius);
    printf("The circumference of the circle is : \n %.2f\n",circumference(radius));
    printf("The area of the circle is : \n %.2f",area(radius));
}

