#include "operations.h"

int insert(Playlist* playlist)
{
    return 0;
}

int removeMusic(Playlist* playlist)
{
    return 0;
}

void list(Playlist* playlist, int size)
{
    PlaylistNode* node = playlist->list;
    int index = 0;
    while(index < size) {
        printf("%s | %s \n", node->music.name, node->music.artist);
        node = node->next;
        index++;
    }
    return;
}

void listByMusic(Playlist* playlist)
{
    return;
}