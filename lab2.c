// Qno 1
#include<stdio.h>
int first_odds(int n){
    int i=0,count=0,sum=0;
    for(i=0; count<n;i++){
       if(i%2!=0){
       count+=1;
       sum+=i;
       printf("%d ",i);
       }
       else{
        continue;
        }
        if(count==n){
       printf("\n%d",sum);
      }
    }  
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    first_odds(n);
    return 0;
}
//Qno2
#include<stdio.h>
int astericks(int n){
   int i,j;
    for(int i=0; i<n; i++){
     for(int j=0; j<=n; j++){
         if(j<n-i) printf(" ");
            else printf("* ");
     }
        printf("\n");
    } 
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    astericks(n);
    return 0;
}
//Qno3
#include<stdio.h>
int comparing (char str1,str2){
     char str1[50];
     char str2[50];
     if(str1==str2);{
        printf("They are equal");
        }
     else;{
     printf("They are different");
     }
}        
int main();{
    char str1;
    scanf("%s",&str1);
    scanf("%s",&str2);
    comparing(str1,str2);
    return 0;
}
//Qno4
#include<stdio.h>
#include <ctype.h>
int main(){
char str[50];
     printf("Enter string1:");
     scanf("%s",&str);
     int i;
     for(i=0; str[i]!='\0';i++){
        if(isupper(str[i])){
            str[i]=tolower(str[i]);

        }else{
        str[i]=toupper(str[i]);
        }

     }
printf("This is your new string %s \n",str);
return 0;
}
//Qno5
#include<stdio.h>

int main()
{
    int n;
        printf("How many elements does your array have? : ");
        scanf("%d", &n);
        int arr[n];
        printf("Enter the elements of the array:\n");
        for (int i = 0; i < n; i++) {
           scanf("%d", &arr[i]);
    }
        for (int j = 0; j < n; j++) {
           int isUnique = 1;

        for (int p = 0; p < n; p++) {
            if (j != p && arr[j] == arr[p]) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            int duplicate = 0;
            for (int k = j + 1; k < n; k++) {
                if (arr[j] == arr[k]) {
                    duplicate = 1;
                    break;
                }
            }
            if (!duplicate) {
                printf("%d ", arr[j]);
            }
        }
    }


    return 0;
}
//Qno6
#include<stdio.h>
    struct Distance{
     int feet;
     int inch;
    };
    int main(){
      struct Distance distance1, distance2;
    printf("Enter first distance:\n");
    printf("Feet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%d", &distance1.inch);
    printf("\nEnter second distance:\n");
    printf("Feet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%d", &distance2.inch);
    int result=distance1.feet+distance2.feet;
    int result2=distance1.inch+distance2.inch;
    printf("%d\n",result);
    printf("%d",result2);

    return 0;
}