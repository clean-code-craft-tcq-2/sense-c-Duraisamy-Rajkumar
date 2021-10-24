#include "alerter.h"
#include "stats.h"


int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void emailAlerter()
{
  emailAlertCallCount=1;
}
void ledAlerter()
{
  ledAlertCallCount=1;
}

int get_emailalerter()
{
  return emailAlertCallCount;
}

int get_ledAlerter()
{
  return ledAlertCallCount;
}
