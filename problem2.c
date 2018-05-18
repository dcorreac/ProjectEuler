#include <stdio.h>
#include <stdlib.h>

void main(){
int sum = 0;
int previous = 1; 
int current = 2; 
while(current < 4000000){
if (current %2 == 0) sum += current; 
int temp = previous; 
previous = current; 
current = temp + current; 
}






printf("%d\n", sum);
}

