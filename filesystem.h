#ifndef FILE_SYSTEM
#define FILE_SYSTEM

#include <stdio.h>
#include <stdlib.h>

#include "types.h"
#include "utils.h"

void readFile(Playlist*);
void writeFile(Playlist*, int);

#endif