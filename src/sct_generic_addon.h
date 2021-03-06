#ifndef __SCT_GENERIC_ADDON_H
#define __SCT_GENERIC_ADDON_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include "core_cm0plus.h"                           /*!< Cortex-M0PLUS processor and core peripherals                          */

/* MATCHSEL Bit Fields */
#define	EVCTR_MATCHSEL_MASK   0x0000000Fu
#define	EVCTR_MATCHSEL_SHIFT  0
#define	EVCTR_MATCHSEL(x)     (((uint32_t)(((uint32_t)(x))<<EVCTR_MATCHSEL_SHIFT))&EVCTR_MATCHSEL_MASK)
	
/* HEVENT Bit Fields */
#define	EVCTR_HEVENT_MASK     0x00000010u
#define	EVCTR_HEVENT_SHIFT    4
#define	EVCTR_HEVENT(x)       (((uint32_t)(((uint32_t)(x))<<EVCTR_HEVENT_SHIFT))&EVCTR_HEVENT_MASK)
#define	EVCTR_HEVENT_L        EVCTR_HEVENT(0)
#define	EVCTR_HEVENT_H        EVCTR_HEVENT(1)
#define	EVCTR_HEVENT_U        EVCTR_HEVENT_L
#define	EVCTR_SCT_L           EVCTR_HEVENT(0)
#define	EVCTR_SCT_H           EVCTR_HEVENT(1)
#define	EVCTR_SCT_U           EVCTR_HEVENT(0)
	
/* OUTSEL Bit Fields */
#define	EVCTR_OUTSEL_MASK     0x00000020u
#define	EVCTR_OUTSEL_SHIFT    5
#define	EVCTR_OUTSEL(x)       (((uint32_t)(((uint32_t)(x))<<EVCTR_OUTSEL_SHIFT))&EVCTR_OUTSEL_MASK)
#define	EVCTR_OUTSEL_INPUT    EVCTR_OUTSEL(0)
#define	EVCTR_OUTSEL_OUTPUT   EVCTR_OUTSEL(1)

/* IOSEL Bit Fields */
#define	EVCTR_IOSEL_MASK      0x000003C0u
#define	EVCTR_IOSEL_SHIFT     6
#define	EVCTR_IOSEL(x)        (((uint32_t)(((uint32_t)(x))<<EVCTR_IOSEL_SHIFT))&EVCTR_IOSEL_MASK)

/* IOCOND Bit Fields */
#define	EVCTR_IOCOND_MASK     0x00000C00u
#define	EVCTR_IOCOND_SHIFT    10
#define	EVCTR_IOCOND(x)       (((uint32_t)(((uint32_t)(x))<<EVCTR_IOCOND_SHIFT))&EVCTR_IOCOND_MASK)
#define	EVCTR_IOCOND_LOW      EVCTR_IOCOND(0)
#define	EVCTR_IOCOND_RISE     EVCTR_IOCOND(1)
#define	EVCTR_IOCOND_FALL     EVCTR_IOCOND(2)
#define	EVCTR_IOCOND_HIGH     EVCTR_IOCOND(3)

/* COMBMODE Bit Fields */
#define	EVCTR_COMBMODE_MASK   0x00003000u
#define	EVCTR_COMBMODE_SHIFT  12
#define	EVCTR_COMBMODE(x)     (((uint32_t)(((uint32_t)(x))<<EVCTR_COMBMODE_SHIFT))&EVCTR_COMBMODE_MASK)
#define	EVCTR_COMBMODE_OR     EVCTR_COMBMODE(0)
#define	EVCTR_COMBMODE_MATCH  EVCTR_COMBMODE(1)
#define	EVCTR_COMBMODE_IO     EVCTR_COMBMODE(2)
#define	EVCTR_COMBMODE_AND    EVCTR_COMBMODE(3)

/* STATELD Bit Fields */
#define	EVCTR_STATELD_MASK    0x00004000u
#define	EVCTR_STATELD_SHIFT   14
#define	EVCTR_STATELD(x)      (((uint32_t)(((uint32_t)(x))<<EVCTR_STATELD_SHIFT))&EVCTR_STATELD_MASK)
#define	EVCTR_STATELD_ADD     EVCTR_STATELD(0)
#define	EVCTR_STATELD_LOAD    EVCTR_STATELD(1)

/* STATEV Bit Fields */
#define	EVCTR_STATEV_MASK     0x000F8000u
#define	EVCTR_STATEV_SHIFT    15
#define	EVCTR_STATEV(x)       (((uint32_t)(((uint32_t)(x))<<EVCTR_STATEV_SHIFT))&EVCTR_STATEV_MASK)

/* MATCHMEM Bit Fields */
#define	EVCTR_MATCHMEM_MASK   0x00100000u
#define	EVCTR_MATCHMEM_SHIFT  20
#define	EVCTR_MATCHMEM(x)     (((uint32_t)(((uint32_t)(x))<<EVCTR_MATCHMEM_SHIFT))&EVCTR_MATCHMEM_MASK)
#define	EVCTR_MATCHMEM_SPOT   EVCTR_MATCHMEM(0)
#define	EVCTR_MATCHMEM_RANGE  EVCTR_MATCHMEM(1)

/* DIRECTION Bit Fields */
#define EVCTR_DIRECTION_MASK  0x00600000u
#define EVCTR_DIRECTION_SHIFT 21
#define EVCTR_DIRECTION(x)    (((uint32_t)(((uint32_t)(x))<<EVCTR_DIRECTION_SHIFT))&EVCTR_DIRECTION_MASK)
#define EVCTR_DIRECTION_IND   EVCTR_DIRECTION(0)
#define EVCTR_DIRECTION_CNTUP EVCTR_DIRECTION(1)
#define EVCTR_DIRECTION_CNTDW EVCTR_DIRECTION(2)

/*
  COMBINED BIT FIELDS
	===================
*/

#define	EVCTR_MATCH_OR_IN_LOW_EVENT(x,y)		(EVCTR_COMBMODE_OR | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_LOW)
#define	EVCTR_MATCH_OR_IN_RISE_EVENT(x,y)		(EVCTR_COMBMODE_OR | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_RISE)
#define	EVCTR_MATCH_OR_IN_FALL_EVENT(x,y)		(EVCTR_COMBMODE_OR | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_FALL)
#define	EVCTR_MATCH_OR_IN_HIGH_EVENT(x,y)		(EVCTR_COMBMODE_OR | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_HIGH)
#define	EVCTR_MATCH_OR_OUT_LOW_EVENT(x,y)		(EVCTR_COMBMODE_OR | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_LOW)
#define	EVCTR_MATCH_OR_OUT_RISE_EVENT(x,y)	(EVCTR_COMBMODE_OR | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_RISE)
#define	EVCTR_MATCH_OR_OUT_FALL_EVENT(x,y)	(EVCTR_COMBMODE_OR | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_FALL)
#define	EVCTR_MATCH_OR_OUT_HIGH_EVENT(x,y)	(EVCTR_COMBMODE_OR | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_HIGH)
#define	EVCTR_MATCH_EVENT(x)								(EVCTR_COMBMODE_MATCH | EVCTR_MATCHSEL(x))
#define	EVCTR_IN_LOW_EVENT(x)								(EVCTR_COMBMODE_IO | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(x) | EVCTR_IOCOND_LOW)
#define	EVCTR_IN_RISE_EVENT(x)							(EVCTR_COMBMODE_IO | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(x) | EVCTR_IOCOND_RISE)
#define	EVCTR_IN_FALL_EVENT(x)							(EVCTR_COMBMODE_IO | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(x) | EVCTR_IOCOND_FALL)
#define	EVCTR_IN_HIGH_EVENT(x)							(EVCTR_COMBMODE_IO | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(x) | EVCTR_IOCOND_HIGH)
#define	EVCTR_OUT_LOW_EVENT(x)							(EVCTR_COMBMODE_IO | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(x) | EVCTR_IOCOND_LOW)
#define	EVCTR_OUT_RISE_EVENT(x)							(EVCTR_COMBMODE_IO | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(x) | EVCTR_IOCOND_RISE)
#define	EVCTR_OUT_FALL_EVENT(x)							(EVCTR_COMBMODE_IO | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(x) | EVCTR_IOCOND_FALL)
#define	EVCTR_OUT_HIGH_EVENT(x)							(EVCTR_COMBMODE_IO | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(x) | EVCTR_IOCOND_HIGH)
#define	EVCTR_MATCH_AND_IN_LOW_EVENT(x,y)		(EVCTR_COMBMODE_AND | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_LOW)
#define	EVCTR_MATCH_AND_IN_RISE_EVENT(x,y)	(EVCTR_COMBMODE_AND | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_RISE)
#define	EVCTR_MATCH_AND_IN_FALL_EVENT(x,y)	(EVCTR_COMBMODE_AND | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_FALL)
#define	EVCTR_MATCH_AND_IN_HIGH_EVENT(x,y)	(EVCTR_COMBMODE_AND | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_HIGH)
#define	EVCTR_MATCH_AND_OUT_LOW_EVENT(x,y)	(EVCTR_COMBMODE_AND | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_LOW)
#define	EVCTR_MATCH_AND_OUT_RISE_EVENT(x,y)	(EVCTR_COMBMODE_AND | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_RISE)
#define	EVCTR_MATCH_AND_OUT_FALL_EVENT(x,y)	(EVCTR_COMBMODE_AND | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_FALL)
#define	EVCTR_MATCH_AND_OUT_HIGH_EVENT(x,y)	(EVCTR_COMBMODE_AND | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_HIGH)

#define	EVCTR_MATCH_OR_IN_LOW(x,y)					(EVCTR_COMBMODE_OR | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_LOW)
#define	EVCTR_MATCH_OR_IN_RISE(x,y)					(EVCTR_COMBMODE_OR | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_RISE)
#define	EVCTR_MATCH_OR_IN_FALL(x,y)					(EVCTR_COMBMODE_OR | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_FALL)
#define	EVCTR_MATCH_OR_IN_HIGH(x,y)					(EVCTR_COMBMODE_OR | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_HIGH)
#define	EVCTR_MATCH_OR_OUT_LOW(x,y)					(EVCTR_COMBMODE_OR | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_LOW)
#define	EVCTR_MATCH_OR_OUT_RISE(x,y)				(EVCTR_COMBMODE_OR | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_RISE)
#define	EVCTR_MATCH_OR_OUT_FALL(x,y)				(EVCTR_COMBMODE_OR | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_FALL)
#define	EVCTR_MATCH_OR_OUT_HIGH(x,y)				(EVCTR_COMBMODE_OR | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_HIGH)
#define	EVCTR_MATCH(x)											(EVCTR_COMBMODE_MATCH | EVCTR_MATCHSEL(x))
#define	EVCTR_IN_LOW(x)											(EVCTR_COMBMODE_IO | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(x) | EVCTR_IOCOND_LOW)
#define	EVCTR_IN_RISE(x)										(EVCTR_COMBMODE_IO | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(x) | EVCTR_IOCOND_RISE)
#define	EVCTR_IN_FALL(x)										(EVCTR_COMBMODE_IO | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(x) | EVCTR_IOCOND_FALL)
#define	EVCTR_IN_HIGH(x)										(EVCTR_COMBMODE_IO | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(x) | EVCTR_IOCOND_HIGH)
#define	EVCTR_OUT_LOW(x)										(EVCTR_COMBMODE_IO | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(x) | EVCTR_IOCOND_LOW)
#define	EVCTR_OUT_RISE(x)										(EVCTR_COMBMODE_IO | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(x) | EVCTR_IOCOND_RISE)
#define	EVCTR_OUT_FALL(x)										(EVCTR_COMBMODE_IO | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(x) | EVCTR_IOCOND_FALL)
#define	EVCTR_OUT_HIGH(x)										(EVCTR_COMBMODE_IO | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(x) | EVCTR_IOCOND_HIGH)
#define	EVCTR_MATCH_AND_IN_LOW(x,y)					(EVCTR_COMBMODE_AND | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_LOW)
#define	EVCTR_MATCH_AND_IN_RISE(x,y)				(EVCTR_COMBMODE_AND | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_RISE)
#define	EVCTR_MATCH_AND_IN_FALL(x,y)				(EVCTR_COMBMODE_AND | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_FALL)
#define	EVCTR_MATCH_AND_IN_HIGH(x,y)				(EVCTR_COMBMODE_AND | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_INPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_HIGH)
#define	EVCTR_MATCH_AND_OUT_LOW(x,y)				(EVCTR_COMBMODE_AND | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_LOW)
#define	EVCTR_MATCH_AND_OUT_RISE(x,y)				(EVCTR_COMBMODE_AND | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_RISE)
#define	EVCTR_MATCH_AND_OUT_FALL(x,y)				(EVCTR_COMBMODE_AND | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_FALL)
#define	EVCTR_MATCH_AND_OUT_HIGH(x,y)				(EVCTR_COMBMODE_AND | EVCTR_MATCHSEL(x) | EVCTR_OUTSEL_OUTPUT | EVCTR_IOSEL(y) | EVCTR_IOCOND_HIGH)

#define	EVCTR_STATE_ADD(x)									(EVCTR_STATELD_ADD  | EVCTR_STATEV(x))
#define	EVCTR_STATE_SET(x)									(EVCTR_STATELD_LOAD | EVCTR_STATEV(x))
#define	EVCTR_STATE_NO_CHANGE								(EVCTR_STATE_ADD(0))
#define	EVCTR_STATE_ADD_1										(EVCTR_STATE_ADD(1))
#define	EVCTR_STATE_SUB_1										(EVCTR_STATE_ADD(0x1F))

#define	EVCTR_COUNTING_UP										(1<<21)
#define	EVCTR_COUNTING_DOWN									(2<<21)

#ifdef __cplusplus
}
#endif

#endif /* __SCT_GENERIC_ADDON_H */
