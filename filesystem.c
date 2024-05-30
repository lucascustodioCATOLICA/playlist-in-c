#include "filesystem.h"

void readFile (Playlist* playlist)
{
    FILE* file = fopen("musicas.txt", "r");
    if (file == NULL) {
        printf("Arquivo nao pode ser aberto\n");
        return;
    }

    char line[256];
    playlist->list = NULL;
    PlaylistNode* last = playlist->list;
    playlist->size = 0;
    while (fgets(line, sizeof(line), file) != NULL) { 
        removeNewlineCh(line);
        playlist->size++;
        
        PlaylistNode* node = (PlaylistNode*) malloc(sizeof(PlaylistNode));
        char * token = strtok(line, ";");
        strcpy(node->music.artist, token);
        token = strtok(NULL, ";");
        strcpy(node->music.name, token);

        if (playlist->list == NULL) {
            playlist->list = node;
            last = playlist->list;
        } else {
            node->prev = last;
            last->next = node;
            last = last->next;
        }
    }

    last->next = playlist->list;
    playlist->list->prev = last;

    fclose(file);
}

void writeFile (Playlist* playlist)
{

}