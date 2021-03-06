#pragma once

#include "tile.h"


typedef struct
{
	unsigned int width;
	unsigned int height;
} dimensions;

#define DIMENSIONS_COMPARE(A,B) ((A).width == (B).width && (A).height == (B).height)


#if defined(_WIN32)
#include <Windows.h>
typedef HANDLE consoleref;
#else
#error NO IMP
#endif

dimensions get_console_dimensions(void);
consoleref get_console(void);
tile* create_console_buffer(void);
void clear_console_buffer(dimensions, tile*);
void set_console_tiles(consoleref console, const tile* tarr, dimensions dim);
