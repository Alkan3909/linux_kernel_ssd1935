#ifndef _OS_SASI_
#define _OS_SASI_


#include <linux/kernel.h>
#include <linux/string.h>

#define io_rd32(a)		(*(volatile uint32_t *)&(a))
#define io_wr32(a, d)	(*(volatile uint32_t *)&(a) = d)
#define dbg				printk
#define BF_GET(r, pos, width)	(((r) >> (pos)) & ((1 << (width)) - 1))
#define BF_SET(v, pos, width)	(((v) & ((1 << (width)) - 1)) << (pos))


#endif

