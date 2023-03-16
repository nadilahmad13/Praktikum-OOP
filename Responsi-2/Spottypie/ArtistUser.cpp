/*
Nama : Ahmad Nadil
NIM  : 13521024
Praktikum Responsi 2
*/

#include <iostream>
#include "ArtistUser.h"
using namespace std;

int ArtistUser::num_of_artist = 0;

//ctor, parameter: nama pengguna
ArtistUser::ArtistUser(char *nameInput) : User(nameInput){
    this->num_of_music_uploaded = 0;
    this->uploaded_music_list = new char *[1000];
    num_of_artist++;
}

// cctor
ArtistUser::ArtistUser(const ArtistUser &otherUser) : User(otherUser.getName()){
    this->num_of_favourite_music = otherUser.getNumOfFavouriteMusic();
    this->music_list = new char *[1000];
    for (int i = 0; i < this->num_of_favourite_music; i++){
        this->music_list[i] = new char[strlen(otherUser.music_list[i])];
        strcpy(this->music_list[i], otherUser.music_list[i]);
    }
    this->num_of_music_uploaded = otherUser.num_of_music_uploaded;
    this->uploaded_music_list = new char *[1000];
    for (int i = 0; i < this->num_of_music_uploaded; i++){
        this->uploaded_music_list[i] = new char[strlen(otherUser.uploaded_music_list[i])];
        strcpy(this->uploaded_music_list[i], otherUser.uploaded_music_list[i]);
    }
    num_of_artist++;
}

// dtor
// selain implementasi, print juga "Artist user <nama user> deleted"
// Contoh:
// Artist user A deleted
ArtistUser::~ArtistUser(){
    cout << "Artist user " << this->name << " deleted" << endl;
    for (int i = 0; i < this->num_of_music_uploaded; i++){
        delete[] this->uploaded_music_list[i];
    }
    delete[] this->uploaded_music_list;
}

// Asumsi: musik unik, parameter: judul musik
void ArtistUser::uploadMusic(char *musicTitle){
    this->uploaded_music_list[this->num_of_music_uploaded] = new char[strlen(musicTitle)];
    strcpy(this->uploaded_music_list[this->num_of_music_uploaded], musicTitle);
    this->num_of_music_uploaded++;
}

void ArtistUser::deleteUploadedMusic(char *musicTitle){
    if (this->num_of_music_uploaded > 0){
        if (this->num_of_music_uploaded == 1){
            if (strcmp(this->uploaded_music_list[0], musicTitle) == 0){
                this->num_of_music_uploaded--;
            }
        }
        else{
            for (int i = 0; i < this->num_of_music_uploaded; i++){
                if (strcmp(this->uploaded_music_list[i], musicTitle) == 0){
                    this->num_of_music_uploaded--;
                    int p = i;
                    while (p < this->num_of_music_uploaded){
                        strcpy(this->uploaded_music_list[p], this->uploaded_music_list[p + 1]);
                        p++;
                    }
                    break;
                }
            }
        }
    }
}

// format print:
// <No>. <Judul musik><endl>
// contoh:
// 1. Starship - Nicki Minaj
// 2. To Be Human - Sia, Labrinth
//
// jika tidak ada musik, print: "No music uploaded<endl>"
void ArtistUser::viewUploadedMusicList() const{
    if (this->num_of_music_uploaded > 0){
        for (int i = 0; i < this->num_of_music_uploaded; i++){
            cout << i + 1 << ". " << this->uploaded_music_list[i] << endl;
        }
    }
    else{
        cout << "No music uploaded" << endl;
    }
}

int ArtistUser::getNumOfMusicUploaded() const{
    return this->num_of_music_uploaded;
}

int ArtistUser::getNumOfArtist(){
    return ArtistUser::num_of_artist;
}