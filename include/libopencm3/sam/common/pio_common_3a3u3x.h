/** @addtogroup pio_defines
 *
 * @brief <b>Constants and Types for the SAM3A/U/X Parallel I/O Controller</b>
 * @ingroup SAM3_defines
 * @version 1.0.0
 * @date 9 February 2014
 * LGPL License Terms @ref lgpl_license
 * @author @htmlonly &copy; @endhtmlonly 2014
 * Felix Held <felix-libopencm3@felixheld.de>
 *
 */

/*
 * This file is part of the libopencm3 project.
 *
 * COpyright (C) 2014 Felix Held <felix-libopencm3@felixheld.de>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA GPIO.H
The order of header inclusion is important. gpio.h includes the device
specific memorymap.h header before including this header file.*/

/** @cond */
#if defined(LIBOPENCM3_PIO_H)
/** @endcond */

#ifndef LIBOPENCM3_PIO_COMMON_3A3U3X_H
#define LIBOPENCM3_PIO_COMMON_3A3U3X_H

/**@{*/

#include <libopencm3/sam/common/pio_common_all.h>

/* --- PIO registers ----------------------------------------------------- */

/* Peripheral AB Select Register */
#define PIO_ABSR(port)			MMIO32((port) + 0x0070)

/* System Clock Glitch Input Filter Select Register */
#define PIO_SCIFSR(port)		MMIO32((port) + 0x0080)

/* Debouncing Input Filter Select Register */
#define PIO_DIFSR(port)			MMIO32((port) + 0x0084)

/* Glitch or Debouncing Input Filter Clock Selection Status Register */
#define PIO_IFDGSR(port)		MMIO32((port) + 0x0088)


/**@}*/
#endif

/** @cond */
#else
#warning "pio_common_3a3u3x.h should not be included explicitly, only via pio.h"
#endif
/** @endcond */
