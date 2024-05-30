#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#include "types.h"
#include "filesystem.h"
#include "operations.h"
#include "sort.h"

int main()
{
    setlocale(LC_ALL, "C.UTF-8");
    Playlist* playlist = (Playlist*) malloc(sizeof(Playlist));
    PlaylistNode *PlayingMusic = (PlaylistNode*) malloc(sizeof(PlaylistNode));
    PlayingMusic = playlist->list;

    readFile(playlist);

    sort(playlist);

    list(playlist, playlist->size);
    
    return 0;
}