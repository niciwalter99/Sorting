#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP2833x_Examples.h"
#include "DSP2833x_GlobalPrototypes.h"
#include "rtwtypes.h"
#include "SortierAlgorithmusEchtSystem.h"
#include "SortierAlgorithmusEchtSystem_private.h"

void config_ePWM_GPIO (void)
{
  EALLOW;

  /*-- Configure pin assignments for ePWM4 --*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO7 = 1;  /* Configure GPIOGPIO7 as EPWM4B*/

  /*-- Configure pin assignments for ePWM6 --*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO11 = 1; /* Configure GPIOGPIO11 as EPWM6B*/

  /*-- Configure pin assignments for ePWM3 --*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO5 = 1;  /* Configure GPIOGPIO5 as EPWM3B*/

  /*-- Configure pin assignments for ePWM5 --*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO9 = 1;  /* Configure GPIOGPIO9 as EPWM5B*/

  /*--- Configure pin assignments for TZn ---*/
  EDIS;
}
