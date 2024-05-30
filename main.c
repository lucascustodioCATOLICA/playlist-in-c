#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#include "types.h"
#include "filesystem.h"
#include "operations.h"
#include "search.h"
#include "controls.h"
#include "sort.h"
#include "print.h"

int main()
{
    setlocale(LC_ALL, "C.UTF-8");
    Playlist* playlist = (Playlist*) malloc(sizeof(Playlist));
    readFile(playlist);

    PlaylistNode *playingMusic = (PlaylistNode*) malloc(sizeof(PlaylistNode));
    playingMusic = playlist->list;

    int input;
    do {
        system("cls");
        printMainMenu(playingMusic);
        printf("   COMMAND: ");
        scanf("%d", &input);

        switch (input)
        {
            case 1:
                playingMusic = back(playingMusic);
                break;
            case 2:
                playingMusic = next(playingMusic);
                break;
            case 3:
                list(playlist);
                break;
            case 4:
                listByMusic(playlist);
                break;
            case 5:
                playingMusic = search(playlist, playingMusic);
                break;
            case 6:
                playlist = insert(playlist);
                break;
            case 7:
                playlist = removeMusic(playlist);
                break;
        }
    } while(input != 0);
    
    return 0;
}