#include <stdio.h>
int main() {
int x,y,d;
float z;
printf("Vvedite x:");
scanf("%d", &x);
printf("Vvedite y:");
scanf("%d", &y);
printf("Vvedite deistvie:\n");
printf("1 - slojenie\n");
printf("2 - vytchitanie\n");
printf("3 - umnojenie\n");
printf("4 - delenie\n");
scanf("%d", &d);
if (d == 1) {
z = x + y;
printf("%d + %d = %f\n", x, y, z);
}
else if (d == 2) {
z = x - y;
printf("%d - %d = %f\n", x, y, z);
}
else if (d == 3) {
z = x * y;
printf("%d * %d = %f\n", x, y, z);
}
else if (d == 4) {
if (y == 0) {
printf("Delenie na nol !\n");
}
else {
z = (float)x / y;
printf("%d / %d = %f\n", x, y, z);
}
}
else {
printf("Nevernoe deistvie!\n");
}
}