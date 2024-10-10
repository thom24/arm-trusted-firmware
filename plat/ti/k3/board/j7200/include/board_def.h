/*
 * Copyright (c) 2023, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef BOARD_DEF_H
#define BOARD_DEF_H

#include <lib/utils_def.h>

/* The ports must be in order and contiguous */
#define K3_CLUSTER0_CORE_COUNT		U(2)
#define K3_CLUSTER1_CORE_COUNT		U(0)
#define K3_CLUSTER2_CORE_COUNT		U(0)
#define K3_CLUSTER3_CORE_COUNT		U(0)

#define PLAT_PROC_START_ID		U(32)
#define PLAT_PROC_DEVICE_START_ID	U(202)
#define PLAT_CLUSTER_DEVICE_START_ID	U(3)
#define PLAT_BOARD_DEVICE_ID		U(157)

/*
 * Scratchpad RAM is only 512 bytes.
 * But it's not possible to map less than page size.
 */
#define K3_MCU_SCRATCHPAD_BASE 0x40280000
#define K3_MCU_SCRATCHPAD_SIZE 0x1000

#endif /* BOARD_DEF_H */
