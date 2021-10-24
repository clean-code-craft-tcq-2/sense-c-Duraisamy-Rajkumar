#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    
    unsigned char count=0;
    float total=0;
    for (count=0;count<setlength;count++)
    {
        total=total+numberset[count];
    }
    s.average = total/setlength;
    
    count=0;
    s.min=numberset[count];
    s.max=numberset[count];
    for (count=1;count<setlength;count++)
    {
        if(s.min>numberset[count])
        {
            s.min=numberset[count];
        }
        
        if(s.max<numberset[count])
        {
            s.max=numberset[count];
        }
    }
    
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void check_and_alert(float maxthreshold,  void (*alerters), struct Stats computedStats)
{
    if(computedStats.max>maxthreshold)
    {
        alerter[0];
        alerter[1];
    }
}


