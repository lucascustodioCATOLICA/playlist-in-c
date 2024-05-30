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

Playlist* removeMusic(Playlist* playlist)
{
    system("cls");
    printHeader("Remove Music");

    char musicToRemove[64];
    printf("      Music: ");
    fflush (stdin);
    fgets (musicToRemove, sizeof(musicToRemove), stdin);
    removeNewlineCh(musicToRemove);

    int size = playlist->size;
    PlaylistNode* node = playlist->list;
    int index = 0;
    while(index < size) {
        if(strcmp(node->music.name, musicToRemove) == 0)
        {
            node->prev->next = node->next;
            node->next->prev = node->prev;   
            playlist->size--;
            free(node);

            writeFile(playlist);
            return playlist;
        }
        node = node->next;
        index++;
    }

    return playlist;
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
    system("cls");

    printf(RED);
    printf("muito complicado");
    printf("\n\n\n");
    printf("                  _.-^^---....,,--\n");
    printf("              _--                  --_\n");
    printf("             <                        >)\n");
    printf("             |                         |\n");
    printf("              \\._                   _./\n");
    printf("                 ```--. . , ; .--'''\n");
    printf("                       | |   |\n");
    printf("                    .-=||  | |=-.\n");
    printf("                    `-=#$%&%$#=-'\n");
    printf("                       | ;  :|\n");
    printf("              _____.,-#%&$@%#&#~,._____\n");
    printf("            /##%$@&%#@&#%&@&#%&@&#%&@@####\\\n");
    printf("           /&@#%&@#&%@#&%&&@#%&%@#&%@##&@#%&\\\n");
    printf("          /@#&%&@#%&@##@#&%@#&%&&@#%&%@#%&@#&\\\n");
    printf("\n\n\n");

    system("pause");
    printf(WHT);

    return;
}