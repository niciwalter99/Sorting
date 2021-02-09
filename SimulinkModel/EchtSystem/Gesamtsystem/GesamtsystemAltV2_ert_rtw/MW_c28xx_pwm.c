#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP2833x_Examples.h"
#include "DSP2833x_GlobalPrototypes.h"
#include "rtwtypes.h"
#include "GesamtsystemAltV2.h"
#include "GesamtsystemAltV2_private.h"

void config_ePWM_GPIO (void)
{
  EALLOW;

  /*-- Configure pin assignments for ePWM3 --*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO5 = 1;  /* Configure GPIOGPIO5 as EPWM3B*/

  /*-- Configure pin assignments for ePWM1 --*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO1 = 1;  /* Configure GPIOGPIO1 as EPWM1B*/

  /*-- Configure pin assignments for ePWM2 --*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO3 = 1;  /* Configure GPIOGPIO3 as EPWM2B*/

  /*-- Configure pin assignments for ePWM4 --*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO7 = 1;  /* Configure GPIOGPIO7 as EPWM4B*/

  /*-- Configure pin assignments for ePWM6 --*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO11 = 1; /* Configure GPIOGPIO11 as EPWM6B*/

  /*-- Configure pin assignments for ePWM5 --*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO9 = 1;  /* Configure GPIOGPIO9 as EPWM5B*/

  /*--- Configure pin assignments for TZn ---*/
  EDIS;
}
