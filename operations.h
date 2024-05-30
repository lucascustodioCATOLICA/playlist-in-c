#ifndef OPERATIONS
#define OPERATIONS

#include <stdio.h>
#include <stdlib.h>

#include "types.h"
#include "utils.h"
#include "colors.h"
#include "print.h"
#include "filesystem.h"

Playlist* insert(Playlist*);
Playlist* removeMusic(Playlist*);
void list(Playlist*);
void listByMusic(Playlist*);

#endif