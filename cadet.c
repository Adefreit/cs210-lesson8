/* cadet.c
 * =============================================================
 *    Name:  
 * Section:  CS210 - ALL SECTIONS
 * Purpose:  Implemention ot the cadet.h file
 * =============================================================
 */

#include "cadet.h"

int getCadetClass(int year) {

    if (year == 2023) {
        return FIRST_CLASS_CADET;
    }
    else if (year == 2024) {
        return SECOND_CLASS_CADET;
    }
    else if (year == 2025) {
        return THIRD_CLASS_CADET;
    }
    else {
        return FOURTH_CLASS_CADET;
    }
    
}