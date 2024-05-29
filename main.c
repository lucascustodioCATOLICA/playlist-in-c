#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#include "types.h"
#include "filesystem.h"
#include "operations.h"

int main()
{
    setlocale(LC_ALL, "C.UTF-8");
    Playlist* playlist = (Playlist*) malloc(sizeof(Playlist));
    readFile(playlist);

    list(playlist, playlist->size);
    
    return 0;
}