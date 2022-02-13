#ifndef __VC4_H
#define __VC4_H

/**********************************************************
 ** 
 ** INCLUDES
 ** 
 **********************************************************/

#include <exec/types.h>

/**********************************************************
 ** 
 ** DEFINES
 ** 
 **********************************************************/

#define PM_RSTC         ((volatile ULONG*)(0xf2000000 + 0x0010001c))
#define PM_RSTS         ((volatile ULONG*)(0xf2000000 + 0x00100020))
#define PM_WDOG         ((volatile ULONG*)(0xf2000000 + 0x00100024))
#define PM_WDOG_MAGIC   (0x5a000000)
#define PM_RSTC_FULLRST (0x00000020)

/**********************************************************
 ** 
 ** PROTOTYPES
 ** 
 **********************************************************/

void VC4_FullReset(void);

#endif /* __VC4_H */
