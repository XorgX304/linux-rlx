/*
 * Realtek Semiconductor Corp.
 *
 * bspcpu.h:
 *
 * Tony Wu (tonywu@realtek.com.tw)
 * Dec. 7, 2007
 */
#ifndef __RTL819X_BSPCPU_H_
#define __RTL819X_BSPCPU_H_


#define RTL819X_CPU_SCACHE_SIZE     0
#define RTL819X_CPU_DCACHE_SIZE     ( 8 << 10)
#define RTL819X_CPU_ICACHE_SIZE     (16 << 10)
#define RTL819X_CPU_SCACHE_LINE_SIZE     0
#define RTL819X_CPU_DCACHE_LINE_SIZE     16
#define RTL819X_CPU_ICACHE_LINE_SIZE     16
#define RTL819X_CPU_SCACHE_LINE     0
#define RTL819X_CPU_DCACHE_LINE     512
#define RTL819X_CPU_ICACHE_LINE     1024
#define RTL819X_CPU_DCACHE_LINE_MASK     0xF  /*cpu_dcache_line-1*/
#define RTL819X_CPU_ICACHE_LINE_MASK     0xF  /*cpu_icache_line-1*/
#define RTL819X_CPU_TLB_ENTRY       32
// #define RTL819X_CPU_MEM_SIZE        (64 << 20)
// #define RTL819X_CPU_MEM_SIZE        (32 << 20)
// #define RTL819X_CPU_MEM_SIZE        ((7 << 20)-16) //reserve 16 byte for firmware header

// #define RTL819X_CPU_IMEM_SIZE       0
// #define RTL819X_CPU_DMEM_SIZE       0
// #define RTL819X_CPU_SMEM_SIZE       0

#endif //__RTL819X_BSPCPU_H_
