#include <stdio.h>
int numSumaF(int numPI);
int numSumG(int numPI);

int numSumG(int numPI){
    int sum;
    if(numPI % 2 == 0){
        sum= (numPI*(numPI + 1))/2;
        return sum;
    }
    else{
        numPI=numPI-1;
        sum= (numPI*(numPI + 1))/2;
        sum =sum + (numPI+1);
        return sum;  
    }
    return 0;
}

int numSumaF(int numPI){
    int sum=0, i;
    for(i=0; i<=numPI; i++){
        sum += i;
    }
    return sum;
}