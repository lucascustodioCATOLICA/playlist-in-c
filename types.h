#ifndef TYPES
#define TYPES

struct Music {
    char artist[64];
    char name[64];
} typedef Music;

struct PlaylistNode {
    Music music;
    struct PlaylistNode* next;
    struct PlaylistNode* prev;
} typedef PlaylistNode;

struct Playlist {
    PlaylistNode* list;
    int size;
} typedef Playlist;

PlaylistNode *PlayingMusic;

#endif