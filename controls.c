#include "controls.h"

PlaylistNode* next(PlaylistNode* playingMusic)
{
    playingMusic = playingMusic->next;
    return playingMusic;
}

PlaylistNode* back(PlaylistNode* playingMusic)
{
    playingMusic = playingMusic->prev;
    return playingMusic;
}