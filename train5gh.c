//mobinapeymani40223086
#include<stdio.h>

int main(){
int n;
printf("n :");
scanf("%d", &n);
char array [n+1];
printf("enter (enter aspace after you type %d character) :", n);
scanf("%s", &array);
for(int i =0; i<n; i++){
    /*if(array[i]==array[i+1]){
         for(int j=i; j<n; j++)
              array[j]=array[j+2];   
         
          printf("%s\n", array);   
    
    }*/
    for(int x = 0; x<n-2*i; x++){
            if(array[x]==array[x+1]){
              for(int j=x; j<n-2*i; j++)
                    array[j]=array[j+2];   
         
              printf("%s\n", array);
            }    
}

}
printf("%s\n", array);
    return 0;
}