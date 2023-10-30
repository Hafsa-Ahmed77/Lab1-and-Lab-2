// Exercise no 01
#include<stdio.h>

int main()
{
    int myID;
    printf("Type your ID:\n");
    scanf("%d",&myID);
    float workhours;
    printf("Enter hours you worked:\n");
    scanf("%f",&workhours);
    int amount;
    printf("Enter amount you get per hours:\n");
    scanf("%d",&amount);
    float salary=workhours*amount; 
    printf("The ID of employee is:%d\n",myID);
    printf("\nThe Salary of the worker is:%.2f\n",salary);
    
}   
// Exercise no 02
#include<stdio.h>

int main()
{
    float height;
    printf("Enter the height of rectangle:\n");
    scanf("%f",&height);
    float width;
    printf("Enter the width of rectangle:\n");
    scanf("%f",&width);
    float perimeter=2*(height+width); 
    float area=height*width; 
    printf("The perimeter of Rectangle is:%.2f\n", perimeter);
    printf("\nThe area of Rectangle is:%.2f\n", area);
    
}    
// Exercise no 03
#include<stdio.h>

int main()
{
    float height;
    printf("Enter your height in centimeters:\n");
    scanf("%f",&height);
    if(height<150){
        printf("Dwarf");
         
    }
    else if(height=150){
        printf("Average");
     
    }
    else if(height>165){
        printf("Tall"); 
    
    }
    else{
        printf("Please enter the correct height"); 
    
    }          
} 
 // Exercise no 04
#include<stdio.h> 
void decimaltobinary(int n){
           if (n>0){
            decimaltobinary(n/2);
            printf("%d",n%2);
 }          }
int main()
{
       int decimalnumber;
       printf("Enter number:");
       scanf("%d",&decimalnumber);
       if (decimalnumber==0){
        printf("Binary:0\n");
       }else{
           printf("Binary:");
           decimaltobinary(decimalnumber);
            printf("\n");
       }
// Exercise no 05
#include <stdio.h>
int fibonacci(int x){
 if (x>1){
    return fibonacci(x-1)+fibonacci(x-2);

 }else if (x==0){
     return 0;
 }else if(x==1){
  return 1;
  }
}
void Print(int n,int current){
if (current<n){
    printf("%d\n",fibonacci(current));
    Print(n,current+1);
}

}
int main(){
int num;
printf("Enter any number:");
scanf("%d",&num);
if (num<0){
    printf("Enter positive num:");
}else{
Print(num,0);
}
return 0;
}

