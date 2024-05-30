#include "operations.h"

Playlist* insert(Playlist* playlist)
{
    system("cls");
    printHeader("Insert New Music");

    Music new;

    printf("      Music: ");
    fflush (stdin);
    fgets (new.name, sizeof(new.name), stdin);
    removeNewlineCh(new.name);
    printf("      Author: ");
    fflush (stdin);
    fgets (new.artist, sizeof(new.artist), stdin);
    removeNewlineCh(new.artist);

    PlaylistNode *node = (PlaylistNode*) malloc(sizeof(PlaylistNode));
    node->music = new;
    node->next = playlist->list;
    node->prev = playlist->list->prev;
    playlist->list->prev->next = node;
    playlist->list->prev = node;
    playlist->size++;

    writeFile(playlist);

    return playlist;
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