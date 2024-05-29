#ifndef OPERATIONS
#define OPERATIONS

#include <stdio.h>
#include <stdlib.h>

#include "types.h"
#include "utils.h"

int insert(Playlist*);
int removeMusic(Playlist*);
void list(Playlist*, int);
void listByMusic(Playlist*);

#endif