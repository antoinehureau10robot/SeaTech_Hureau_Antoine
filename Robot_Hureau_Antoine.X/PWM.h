#ifndef PWM_H
#define PWM_H
#define MOTEUR_DROIT 0
#define MOTEUR_GAUCHE 1
void PWMSetSpeed();
void InitPWM();
void PWMUpdateSpeed();
void PWMSetSpeedConsigne(float vitesseEnPourcents, char moteur);
#endif