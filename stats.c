#include "stats.h"
#include "math.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;

    float sum=0;
float a;
int setlength = sizeof(numberset) / sizeof(numberset[0]);
int l=compute_statistics.setlength;
for(int i = 0; i<compute_statistics.setlength; i++)
{
    a = compute_statistics.numberset[i];
    sum += compute_statistics.numberset[i];
    if(a<s.min)
    {
        s.min=a;
    }
    if(a>s.max)
    {
        s.max=a;
    }
}
if(l==0)
{
    s.average=NAN;
    s.min=NAN;
    s.max=NAN
}
else
{
    s.average = sum/l;
}

return s;
}
