#ifndef TYPES
#define TYPES

struct Music {
    char artist[64];
    char music[64];
} typedef Music;

struct PlaylistNode {
    Music music;
    PlaylistNode* next;
    PlaylistNode* back;
} typedef PlaylistNode;

struct Playlist {
    PlaylistNode list;
    int size;
} typedef Playlist;

PlaylistNode *PlayingMusic;

#endif