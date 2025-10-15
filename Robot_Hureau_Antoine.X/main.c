#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "ChipConfig.h"
#include "IO.h"
#include "timer.h"
#include "PWM.h"
int main (void){

    InitOscillator();
    InitIO();
    InitTimer23();
    InitTimer1();
    InitPWM();
    ADCIsConversionFinished();
    LED_BLANCHE_1 = 1;
    LED_BLEUE_1 = 1;
    LED_ORANGE_1 = 1;
    LED_ROUGE_1 = 1;
    LED_VERTE_1 = 1;
    while(1){
        unsigned int * result = ADCGetResult();
        if (ADCIsConversionFinished()>0)
        {
            ADCClearConversionFinishedFlag();
            unsigned int ADCValue0=result[0];
            unsigned int ADCValue1=result[1];
            unsigned int ADCValue2=result[2];
        }
       
       
//    LED_BLANCHE_1 =! LED_BLANCHE_1 ;
//    LED_BLEUE_1 =! LED_BLEUE_1 ;
//    LED_ORANGE_1 =! LED_ORANGE_1 ;
//    LED_ROUGE_1 =! LED_ROUGE_1 ;
//    LED_VERTE_1 =! LED_VERTE_1 ;
    }
}
