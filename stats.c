#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
float sum=0;
int setlength = sizeof(numberset) / sizeof(numberset[0]);
int a=compute_statistics.setlength;
for(int i = 0; i<=compute_statistics.setlength; i++)
{
    sum += scanf("(%f)", compute_statistics.numberset[]);
}
s.average = sum/a;
printf("(%f)",s.average);
