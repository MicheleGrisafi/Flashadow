/* 
    Author: Michele Grisafi
    Email: michele.grisafi@unitn.it
    License: MIT 
*/
/**
 * This file contains all of the hooks which should be callable from the untrusted application
 **/
#ifndef HEADER_FILE_TCM_HOOK
#define HEADER_FILE_TCM_HOOK

//#define callReceiveUpdate() ({asm("BR #receiveUpdate");})
#define callReceiveUpdate() ({asm("BR #0xfee4");})

#endif