#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include <ChipConfig.h>
#include <IO.h>

//Pour les include, on utilise < et >

int main (void){
/***************************************************************************************************/
//Initialisation de l?oscillateur
/****************************************************************************************************/
InitOscillator();

/****************************************************************************************************/
// Configuration des entr�es sorties
/****************************************************************************************************/
InitIO();

LED_BLANCHE = 1;
LED_BLEUE = 1;
LED_ORANGE = 1;

/****************************************************************************************************/
// Boucle Principale
/****************************************************************************************************/
while(1){
} // fin main
}