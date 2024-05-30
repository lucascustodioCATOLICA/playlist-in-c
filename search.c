#include "search.h"

PlaylistNode* search(Playlist* playlist, PlaylistNode* playingMusic)
{
    system("cls");
    printHeader("Search Music");

    char musicToSearch[64];
    printf("      Music: ");
    fflush (stdin);
    fgets (musicToSearch, sizeof(musicToSearch), stdin);
    removeNewlineCh(musicToSearch);

    int size = playlist->size;
    PlaylistNode* node = playlist->list;
    int index = 0;
    while(index < size) {
        if(strcmp(node->music.name, musicToSearch) == 0)
        {
            return node;
        }
        node = node->next;
        index++;
    }

    return playingMusic;
}