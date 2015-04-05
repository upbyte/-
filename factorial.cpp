#include <stdio.h>
int factorial(int x) {
return !x ? 1 : x * factorial(x - 1);
}
void main() {
int n;
while( scanf("%d", &n) == 1)
printf("%d\n", factorial (n));
}</stdio.h>
