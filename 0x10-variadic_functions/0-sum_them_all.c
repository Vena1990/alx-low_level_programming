#include <stdio.h>
#include <stdard.h>

double average(int count, ...)
{

va_list ap;
int i;
double sum = 0;

va_start(ap, count);
for (i = 0; i< count; i++
sum =+ va_arg(ap, double);
}
int main()
{
double avg = average(3, 1.0, 2.0, 3.0);
printf("The average is %.2f\n", avg);

avg = average(5, 2.0, 4.0, 6.0, 8.0, 10.0);
printf("The average is %.2f\n", avg);

return 0;
}
