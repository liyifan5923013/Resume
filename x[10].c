#include <stdio.h>

void foo(int x[10]) {
  int i = 0;
  do { 
    x[i] = i++; 
  } while( i < 10 );
}

int main() {
int x[10];
foo(x);
int i;
while(x[i] > -1 && x[i] < 10) {
	printf("%d",x[i]);
	i++;
}
return 0;
}