/**
 ******************************************************************************
 * @file    stm32u5xx_no_timebase.c
 * @author  nicolas.brunner@heig-vd.ch
 * @date    21-March-2023
 * @brief   Empty implementation of HAL tick
 ******************************************************************************
 * @copyright
 *
 * License information
 *
 ******************************************************************************
 */

/* Includes ------------------------------------------------------------------*/

#include <assert.h>
#include <stdbool.h>

#include "stm32u5xx_hal.h"

/* Public functions ----------------------------------------------------------*/

HAL_StatusTypeDef HAL_InitTick(uint32_t TickPriority)
{
    return HAL_OK;
}

void HAL_Delay(uint32_t Delay)
{
    assert(false);
}

void HAL_SuspendTick(void)
{

}

void HAL_ResumeTick(void)
{

}
