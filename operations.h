#ifndef OPERATIONS
#define OPERATIONS

#include <stdio.h>
#include <stdlib.h>

#include "types.h"
#include "utils.h"

int insert(Playlist*);
int remove(Playlist*);
void list(Playlist*);
void listByMusic(Playlist*);

#endif