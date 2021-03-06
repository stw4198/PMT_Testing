#ifndef SETHV_H
#define SETHV_H

#define V1718_USB_PORT 0

#include "V6534PC.h"
#include "V6534PB.h"
#include "V6534PA.h"

#include <stdio.h>
#include <string>
#include <string.h>
#include <sys/types.h>
#include <stdint.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iomanip>

#include "CAENVMElib.h"

extern uint32_t hv_data;
extern int32_t handle;
extern std::vector<int> enable_channel;

int init();
std::string status(int ch, int board);
std::string * statusarray(int ch, std::string board);
int rampup(int speed);
int rampdown(int speed);
int OnOff(uint32_t chnum, bool OnOff);
int SetVoltage(uint32_t chnum, uint32_t VSet);
int SetCurrent(uint32_t chnum, uint32_t ISet);
int monitor(uint32_t chnum);
int CurrentMonitor(uint32_t chnum);
int SetVMax(uint32_t SwVMax);

struct STATUS_REGISTER {
  unsigned ON:1;
  unsigned RAMPUP:1;
  unsigned RAMPDOWN:1;
  unsigned OVERCURRENT:1;
  unsigned OVERVOLTAGE:1;
  unsigned UNDERVOLTAGE:1;
  unsigned MAXV:1;
  unsigned MAXI:1;
  unsigned TRIP:1;
  unsigned OVERPOWER:1;
  unsigned OVERTEMPERATURE:1;
  unsigned DISABLED:1;
  unsigned INTERLOCK:1;
  unsigned UNCALIBRATED:1;
};


#endif
