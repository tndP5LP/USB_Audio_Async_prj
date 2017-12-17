/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
//    P5LP_059_Dbg_init();

//    CyDelay(10u);
    TriggerScope();
    CyDelay(2u);
    LED_1_Write(1u);
    P5LP_059_Debug_Start();
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
