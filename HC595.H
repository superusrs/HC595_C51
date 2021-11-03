#ifndef _HC595_C
#define _HC595_C

typedef struct
{
    u8 *init;
    u8 *transmit;
    
    
} HC595_t;

void init();
void transmit();


#endif