/**************************************************************************
* 
* Copyright 2014 by Petr Gargulak. eGUI Community.
* Copyright 2009-2013 by Petr Gargulak. Freescale Semiconductor, Inc.
*
***************************************************************************
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License Version 3 
* or later (the "LGPL").
*
* As a special exception, the copyright holders of the eGUI project give you
* permission to link the eGUI sources with independent modules to produce an
* executable, regardless of the license terms of these independent modules,
* and to copy and distribute the resulting executable under terms of your 
* choice, provided that you also meet, for each linked independent module,
* the terms and conditions of the license of that module.
* An independent module is a module which is not derived from or based 
* on this library. 
* If you modify the eGUI sources, you may extend this exception 
* to your version of the eGUI sources, but you are not obligated 
* to do so. If you do not wish to do so, delete this
* exception statement from your version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
* You should have received a copy of the GNU General Public License
* and the GNU Lesser General Public License along with this program.
* If not, see <http://www.gnu.org/licenses/>.
*
***************************************************************************//*!
*
* $FileName: main.h$
*
* @author    Petr Gargulak
*
* $Version : 3.6.1.0$
*
* $Date    : Aug-14-2012$
*
* Comments:
*
*   This file contains the header information for the eGUI example project.
*
*END************************************************************************/

#ifndef __main_h_
#define __main_h_


#include "d4d.h"
#include "fonts.h"
#include "strings.h"
//#include "pictures.h"



/* Task IDs */
#define LCD_TASK                (9 ) 
#define TIME_TASK               (10)
#define KEYBOARD_TASK           (11)
#define MOUSE_TASK              (12)

#define  SCREENSAVER_TIMEOUT_100MS      300 // sets to 30s    


typedef union
{
 uint32_t all;     
 struct
 {
   unsigned b25ms :1;
   unsigned b50ms : 1;
   unsigned b100ms : 1;
   unsigned b200ms : 1;
   unsigned b400ms : 1;
   unsigned b800ms : 1;
   unsigned b1600ms : 1;    
   unsigned b3200ms : 1;
 }bits;     
}TIME_FLAGS;

extern TIME_FLAGS time;
extern LWord time100sm_cnt;
extern LWord screenSaverTimeoutPreset;

#endif /* __main_h_ */
