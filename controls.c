#include "controls.h"

void next(PlaylistNode* playingMusic)
{
    playingMusic = playingMusic->next;
    return;
}

void back(PlaylistNode* playingMusic)
{
    playingMusic = playingMusic->prev;
    return;
}