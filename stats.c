#include "stats.h"
#include "math.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;

    float sum=0;
float a;
setlength = sizeof(numberset) / sizeof(numberset[0]);
for(int i = 0; i<setlength; i++)
{
    a = numberset[i];
    sum += numberset[i];
    if(a<s.min)
    {
        s.min=a;
    }
    if(a>s.max)
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
