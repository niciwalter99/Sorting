#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP2833x_Examples.h"
#include "DSP2833x_GlobalPrototypes.h"
#include "rtwtypes.h"
#include "Klappenmotortest.h"
#include "Klappenmotortest_private.h"

void config_ePWM_GPIO (void)
{
  EALLOW;

  /*-- Configure pin assignments for ePWM6 --*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO11 = 1; /* Configure GPIOGPIO11 as EPWM6B*/

  /*--- Configure pin assignments for TZn ---*/
  EDIS;
}
