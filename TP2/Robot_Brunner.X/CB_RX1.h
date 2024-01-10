/* 
 * File:   CB_RX1.h
 * Author: TP_EO_6
 *
 * Created on 13 d�cembre 2023, 08:35
 */

#ifndef CB_RX1_H
#define	CB_RX1_H

void CB_RX1_Add(unsigned char value);
unsigned char CB_RX1_Get(void);
unsigned char CB_RX1_IsDataAvailable(void);
void __attribute__((interrupt, no_auto_psv)) _U1RXInterrupt(void);
int CB_RX1_GetDataSize(void);
int CB_RX1_GetRemainingSize(void);
#endif

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif



