/*
===============================================================================
 Name        : adc_dma.h
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description :
===============================================================================
*/

#ifndef ADC_DMA_H_
#define ADC_DMA_H_

#include <stdint.h>
#include <stdbool.h>
#include "LPC8xx.h"

#define DMA_BUFFER_SIZE 1024

void adc_dma_init(void);
void adc_dma_set_rate(uint32_t period_us);
bool adc_dma_busy(void);

void adc_dma_start(void);
void adc_dma_start_with_threshold(uint16_t low, uint16_t high, uint8_t intmode);
void adc_dma_stop(void);

#endif /* ADC_DMA_H_ */
