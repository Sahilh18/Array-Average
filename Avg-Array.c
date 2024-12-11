#include <stdio.h>
int main(){
    //Number of elements to store
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    //Array initialization
    int num[n];
    printf("Enter the elements:\n");
    //Loop to store elements
    for(int i=0;i<n;++i){
        scanf("%d",&num[i]);
        printf("\n");
    }
    //Logic to sum and avg
    int sum=0;
    for(int i=0;i<n;++i){
        sum=sum+num[i];
    }
    printf("\n");
    //To get output
    int x=sum/n;
    printf("The average of array is %d",x);
    //Exit code
    return 0;
}