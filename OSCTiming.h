//
//  OSCTiming.h
//  
//
//  Created by AdrianFreed on 11/10/13.
//
//

#ifndef ____OSCTiming__
#define ____OSCTiming__

#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
typedef struct {
	uint32_t seconds;
	uint32_t fractionofseconds;
} osctime_t;

osctime_t oscTime();

#endif /* defined(____OSCTiming__) */
