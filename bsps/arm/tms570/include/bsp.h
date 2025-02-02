/**
 * @file
 *
 * @ingroup RTEMSBSPsARMTMS570
 *
 * @brief Global BSP definitions.
 */

/*
 * Copyright (c) 2014 Premysl Houdek <kom541000@gmail.com>
 *
 * Google Summer of Code 2014 at
 * Czech Technical University in Prague
 * Zikova 1903/4
 * 166 36 Praha 6
 * Czech Republic
 *
 * Based on LPC24xx and LPC1768 BSP
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rtems.org/license/LICENSE.
 */

#ifndef LIBBSP_ARM_TMS570_BSP_H
#define LIBBSP_ARM_TMS570_BSP_H

/**
 * @defgroup RTEMSBSPsARMTMS570 TMS570
 *
 * @ingroup RTEMSBSPsARM
 *
 * @brief TMS570 Board Support Package.
 *
 * @{
 */

#include <bspopts.h>

#define BSP_FEATURE_IRQ_EXTENSION

#ifndef ASM

#include <rtems.h>
#include <bsp/default-initial-extension.h>

#if TMS570_VARIANT == 4357
#define BSP_OSCILATOR_CLOCK 16000000
#define BSP_PLL_OUT_CLOCK 150000000
#else
#define BSP_OSCILATOR_CLOCK 8000000
#define BSP_PLL_OUT_CLOCK 160000000
#endif

#endif /* ASM */

/* @} */

#endif /* LIBBSP_ARM_TMS570_BSP_H */
