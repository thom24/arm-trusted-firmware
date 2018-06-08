/*
 * Copyright (c) 2018, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include <imx_regs.h>
#include <imx_clock.h>

static void imx7_clock_uart_init(void)
{
	unsigned int i;

	for (i = 0; i < MXC_MAX_UART_NUM; i++)
		imx_clock_disable_uart(i);
}

void imx_clock_init(void)
{
	/*
	 * The BootROM hands off to the next stage with the internal 24 MHz XTAL
	 * crystal already clocking the main PLL, which is very handy.
	 * Here we should enable whichever peripherals are required for ATF and
	 * OPTEE.
	 *
	 * Subsequent stages in the boot process such as u-boot and Linux
	 * already have a significant and mature code-base around clocks, so our
	 * objective should be to enable what we need for ATF/OPTEE without
	 * breaking any existing upstream code in Linux and u-boot.
	 */

	/* Initialize UART clocks */
	imx7_clock_uart_init();
}
