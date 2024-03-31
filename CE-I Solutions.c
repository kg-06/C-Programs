// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number:");
//     scanf("%d",&num);
//     printf("the number is %d\n",num);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter two numbers:");
//     scanf("%d %d",&a,&b);
//     printf("sum=%d\n",a+b);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     float radius;
//     printf("Enter the radius:");
//     scanf("%f",&radius);
//     printf("Circumference=%f\n",2*3.14*radius);
//     printf("Area=%f\n",3.14*radius*radius);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     float a,b;
//     printf("Enter two integer numbers:");
//     scanf("%f %f",&a,&b);
//     printf("Addition: %.2f\n",a+b);
//     printf("Subtraction: %.2f\n",a-b);
//     printf("Product: %.2f\n",a*b);
//     printf("Division: %.2f\n",a/b);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     float u,a,t,b,c,p;
//     printf("Enter u,a,t,b,c,p:");
//     scanf(" %f %f %f %f %f %f",&u,&a,&t,&b,&c,&p);
//     printf("V=%.2f\n",u+a*t);
//     printf("S=%.2f\n",u*t+1/(2*a*pow(t,2)));
//     printf("T=%.2f\n",2*a+(sqrt(b)+9*c));
//     printf("H=%.2f\n",sqrt(b*b+p*p));
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("ENTER TWO NUMBERS: ");
//     scanf("%d %d",&a,&b);
//     printf("a=%d,b=%d\n",a,b);
//     c=a;
//     a=b;
//     b=c;
//     printf("a=%d,b=%d\n",a,b);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("ENTER TWO NUMBERS:");
//     scanf("%d %d",&a,&b);
//     printf("a=%d,b=%d\n",a,b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("a=%d,b=%d\n",a,b);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d",&a,&b,&c);
//     (a>b && a>c)?printf("%d\n",a):(b>c)?printf("%d\n",b):printf("%d\n",c);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d",&a,&b,&c);
//     if (a>b && a>c){
//         printf("%d\n",a);
//     }
//     else if(b>c){
//         printf("%d\n",b);
//     }
//     else{
//     printf("%d\n",c);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<ctype.h>
// int main(){
//     char alpha;
//     printf("Enter a alphabet(a-z):");
//     scanf("%c",&alpha);
//     alpha= tolower(alpha);
//     if (isalpha(alpha)){
//     switch(alpha){
//         case 'a':case 'e':case 'i':case 'o':case 'u':
//         printf("%c is a vowel\n",alpha);
//         break;
//         default:
//         printf("%c is a consonent\n",alpha);
//     }
//     }
//     else{
//         printf("Invalid input\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num,input;
//     printf("Enter a number:");
//     scanf("%d",&num);
//     input=(num>0)?1:(num<0)?2:3;
//     switch(input){
//         case 1:printf("%d is positive\n",num);
//                break;
//         case 2:printf("%d is negative\n",num);
//                break;
//         case 3:printf("number is zero\n");       
//     }
//     return 0;
// }

