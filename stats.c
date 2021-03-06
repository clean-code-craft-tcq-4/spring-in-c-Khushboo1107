#include "stats.h"
#include "math.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    stat s;
    s.average = 0;
    s.min = INFINITY;
    s.max = -INFINITY;

    float sum=0;
float a;
for(int i = 0; i<setlength; i++)
{
    a = numberset[i];
    sum += numberset[i];
    if(a<=s.min)
    {
        s.min=a;
    }
    if(a>=s.max)
    {
        s.max=a;
    }
}
if(setlength==0)
{
    s.average=NAN;
    s.min=NAN;
    s.max=NAN;
}
else
{
    s.average = sum/setlength;
}

return s;
}
