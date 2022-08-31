/* cadet.h
 * =============================================================
 *    Name:  
 * Section:  CS210 - ALL SECTIONS
 * Purpose:  A simple .h file
 * =============================================================
 */

#ifndef CADET_H
#define CADET_H

#define FIRST_CLASS_CADET 1
#define SECOND_CLASS_CADET 2
#define THIRD_CLASS_CADET 3
#define FOURTH_CLASS_CADET 4
#define ERROR -1

/**
 * ----------------------------------------------------
 * @brief determines what class of cadet you are based on your class year
 * @param year class year
 * @return 1, 2, 3, 4, if valid, -1 if not a valid cadet year
 */
int getCadetClass(int year);

#endif