/* 
 * File:   ADC.h
 * Author: E306-PC4
 *
 * Created on 15 octobre 2025, 10:30
 */

#ifndef ADC_H
#define	ADC_H

void InitADC1(void);
void __attribute__((interrupt, no_auto_psv)) _AD1Interrupt(void);
void ADC1StartConversionSequence();
void ADCClearConversionFinishedFlag(void);


#endif	/* ADC_H */

