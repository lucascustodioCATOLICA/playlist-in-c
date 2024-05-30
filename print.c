#include "print.h"

void printMainMenu(PlaylistNode* playingMusic)
{
    printf("\n\n                                 Listening Music:\n");
    printf(GRN);
    printf("                                 %s\n", playingMusic->music.name);
    printf("                                 %s\n\n", playingMusic->music.artist);
    printf(WHT);
    printf("       _________                                                 _________ \n");
    printf("      /  _____  \\                                               /  _____  \\ \n");
    printf("     /  /  .  \\  \\_____________________________________________/  /  .  \\  \\ \n");
    printf("    /   \\_____/   \\                                           /   \\_____/   \\ \n");
    printf("   /_______________\\_________________________________________/_______________\\ \n");
    printf("   |               |                                         |               |\n");
    printf("   |    _______    |                                         |    _______    |\n");
    printf("   |   |       |   |                                         |   |       |   |\n");
    printf("   |   |  O O  |   |\e[0;34m       [ 1 ] - Back To Prev Music        \e[0;37m|   |  O O  |   |\n");
    printf("   |   |_______|   |\e[0;34m       [ 2 ] - Next Music                \e[0;37m|   |_______|   |\n");
    printf("   |               |\e[0;34m       [ 3 ] - List All Musics           \e[0;37m|               |\n");
    printf("   |               |\e[0;34m       [ 4 ] - List By Music Name        \e[0;37m|               |\n");
    printf("   |               |\e[0;34m       [ 5 ] - Search Music              \e[0;37m|               |\n");
    printf("   |               |\e[0;34m       [ 6 ] - Insert New Music          \e[0;37m|               |\n");
    printf("   |   _________   |\e[0;34m       [ 7 ] - Remove Music              \e[0;37m|   _________   |\n");
    printf("   |  |         |  |\e[0;34m       [ 0 ] - Exit                      \e[0;37m|  |         |  |\n");
    printf("   |  |         |  |                                         |  |         |  |\n");
    printf("   |  |  O   O  |  |                                         |  |  O   O  |  |\n");
    printf("   |  |_________|  |                                         |  |_________|  |\n");
    printf("   |               |                                         |               |\n");
    printf("   |_______________|_________________________________________|_______________|\n\n");

    printf("   ===========================================================================\n");
}

void printHeader(char header[])
{
    printf("   ===========================================================================\n");
    printf(BLU);
    printf("   %s\n", header);
    printf(WHT);
    printf("   ===========================================================================\n\n");
}