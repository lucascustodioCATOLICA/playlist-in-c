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
    system("cls");
    printHeader("List All Musics");

    int size = playlist->size;
    PlaylistNode* node = playlist->list;
    int index = 0;
    while(index < size) {
        printf("   %s ", node->music.name);
        printf(GRN);
        printf("of ");
        printf(WHT);
        printf("%s \n", node->music.artist);

        node = node->next;
        index++;
    }

    printf("\n");
    system("pause");
    return;
}

void listByMusic(Playlist* playlist)
{
    return;
}