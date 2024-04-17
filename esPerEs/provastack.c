
#include <stdio.h>
int h(int n) {
return 1;
}
int g(int n) {
if (n < 3) return 1;
else return h(n % 3);
}
int f(int n) {
if (n < 5) return 1;
else return g(n % 5);
}
int main(void) {
int m;
scanf("%d", &m);
printf("%d\n", f(m % 10));
return 0;
}

#include <stdio.h>
int main(void) {
int a = 0;
do {
if (a % 3)
a += 4;
else
a += 5;
} while (a<184789);
printf("%d",a);
return 0;
}
