// recursion is a process when  function calls a copy of itself to work on a smaller problem 
// any function which calls itself is called recursive function
// a termination condition is imposed on such functions to stop them executing copies of themselves forever
// any problem that can be solved recursively can be solve iteratively


/*
    TYPES OF RECURSION ::::
     1. Direct recursion
     2. indirect recursion
     3. tail recursion
     4. non-tail recursion
     5. linear recursion
     6.non - linear recursion       

*/

/*
    DIRECT RECURSION is the type of recursion in which a function directly calls itself within its own block

    INDIRECT RECURSION is a programing technique where multiple functionss call each other in a circular manner, creating a loop-like structure.

    TAIL RECURSION ---> the recursive call is the last action performed in the function before returning
            

    NON-TAIL RECURSION --> the recursive call is not last action performed in the function before returning


*/
#include<stdio.h>
int fac(int n){
    if(n==0 || n==1)return 1;
    return ( n * fac(n-1));
}
int main(){
    int n;
    printf("enter the number  ");
    scanf("%d", &n);
    fac(n);
    int ans = fac(n); 
    printf("answer : %d",ans);
}