#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "ChipConfig.h"
#include "IO.h"
#include "timer.h"
#include "PWM.h"
#include "ADC.h"

unsigned int ADCValue0, ADCValue1, ADCValue2;

int main(void) {

    InitOscillator();
    InitIO();
    InitTimer23();
    InitTimer1();
    InitPWM();
    InitADC1();
    
    LED_BLANCHE_1 = 1;
    LED_BLEUE_1 = 1;
    LED_ORANGE_1 = 1;
    LED_ROUGE_1 = 1;
    LED_VERTE_1 = 1;
    while (1) {
        if (ADCIsConversionFinished() > 0) {
            ADCClearConversionFinishedFlag();
            unsigned int * result = ADCGetResult();
            ADCValue0 = result[0];
            ADCValue1 = result[1];
            ADCValue2 = result[2];
        
            
        }
        if (ADCValue0<0x04E0){
                LED_BLANCHE_1=1;
            }
            else{
                LED_BLANCHE_1=0;    
            }
            if (ADCValue1<0x04E0){
                LED_BLEUE_1=1;
            }

            else{
                LED_BLEUE_1=0;

            }
                if (ADCValue2<0x04E0){
                LED_ORANGE_1=1;
            }

            else{
                LED_ORANGE_1=0;

            } 
           
        //    LED_ORANGE_1 =! LED_ORANGE_1 ;
        //    LED_ROUGE_1 =! LED_ROUGE_1 ;
        //    LED_VERTE_1 =! LED_VERTE_1 ;
    
}
}