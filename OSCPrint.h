/*
 * OSCPrint.h
 *
 *  Created on: Dec 23, 2014
 *      Author: Douglas
 */

#ifndef LIB_OSC_OSCPRINT_H_
#define LIB_OSC_OSCPRINT_H_

#include <inttypes.h>
#include <stdio.h>

class Print
{
  public:
    virtual void write(uint8_t) = 0;
    virtual void write(const char *str);
    virtual void write(const uint8_t *buffer, size_t size);
};



#endif /* LIB_OSC_OSCPRINT_H_ */
