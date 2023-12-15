//mobinapeymani40223086
#include <stdio.h>
#include <math.h>

void solver (int a , int b, int c , int *x1, int *x2)
{
    int delta = b*b - 4*a*c;
    int root1 = (-b + sqrt(delta))/2*a; 
    int root2 = (-b - sqrt(delta))/2*a;
    if (root1!=0 && root2!=0){
        *x1 = root1;
        *x2 = root2;
    }
   else if (root1==0){
        *x2 = root2;
    }
    else{
    *x1 = root1;

    } 
}


int main(){
int a , b, c;
int x1= 0;
int x2 = 0;
printf("enter three enteger :");
scanf("%d%d%d", &a, &b , &c);
if(a==0 && b==0){
    printf("some thing is wrong");
    return -1;   
}
int delta = b*b - 4*a*c;
if (delta>0){
    solver(a, b, c, &x1, &x2);
    printf("the number of roots is : 2 and they are %d and %d . ", x1,x2);
}
else if(delta==0){
    solver(a, b, c, &x1, &x2);
     if ( x1 == 0){
    printf("the number of roots is : 1 and it is %d  . ", x2);
     } 
     else{
    printf("the number of roots is : 1 and it is %d  . ", x1);

     }    
}
else 
printf("this equation has no real roots");


    return 0;
}


