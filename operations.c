#include "operations.h"

void insert(Playlist* playlist)
{
    return;
}

void removeMusic(Playlist* playlist)
{
    return;
}

void list(Playlist* playlist)
{
    int size = playlist->size;
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