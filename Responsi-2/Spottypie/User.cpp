/*
Nama : Ahmad Nadil
NIM  : 13521024
Praktikum Responsi 2
*/

#include "User.h"
#include <iostream>
using namespace std;

int User::n_user = 0;

// ctor, parameter: nama pengguna
User::User(char *nameInput){
    this->name = new char[strlen(nameInput)];
    strcpy(this->name, nameInput);
    this->num_of_favourite_music = 0;
    this->music_list = new char *[100];
    n_user++;
}

// cctor
User::User(const User &otherUser){
    this->name = new char[strlen(otherUser.getName())];
    strcpy(this->name, otherUser.name);
    this->num_of_favourite_music = otherUser.getNumOfFavouriteMusic();
    this->music_list = new char *[100];
    for (int i = 0; i < this->num_of_favourite_music; i++){
        this->music_list[i] = new char[strlen(otherUser.music_list[i])];
        strcpy(this->music_list[i], otherUser.music_list[i]);
    }
    n_user++;
}

// dtor
// selain implementasi, print juga "User <nama user> deleted<endl>"
// Contoh:
// User A deleted
//
User::~User(){
    cout << "User " << this->name << " deleted" << endl;
    delete[] this->name;
    for (int i = 0; i < this->num_of_favourite_music; i++){
        delete[] this->music_list[i];
    }
    delete[] this->music_list;
}


// Asumsi: musik unik, parameter: judul musik
void User::addFavouriteMusic(char *musicTitle){
    this->music_list[this->num_of_favourite_music] = new char[strlen(musicTitle)];
    strcpy(this->music_list[this->num_of_favourite_music], musicTitle);
    this->num_of_favourite_music++;
}

void User::deleteFavouriteMusic(char *musicTitle)
{
    if (this->num_of_favourite_music > 0){
        if (this->num_of_favourite_music == 1){
            if (strcmp(this->music_list[0], musicTitle) == 0){
                this->num_of_favourite_music--;
            }
        }
        else{
            for (int i = 0; i < this->num_of_favourite_music; i++){
                if (strcmp(this->music_list[i], musicTitle) == 0){
                    this->num_of_favourite_music--;
                    int p = i;
                    while (p < this->num_of_favourite_music){
                        strcpy(this->music_list[p], this->music_list[p + 1]);
                        p++;
                    }
                    break;
                }
            }
        }
    }
}

void User::setName(char *nameInput){
    strcpy(this->name, nameInput);
}

char *User::getName() const{
    return this->name;
}

int User::getNumOfFavouriteMusic() const{
    return this->num_of_favourite_music;
}

// format print:
// <No>. <Judul musik><endl>
// contoh:
// 1. Starship - Nicki Minaj
// 2. To Be Human - Sia, Labrinth
//
// jika tidak ada musik, print: "No music in your favourite list<endl>"
void User::viewMusicList() const{
    if (this->num_of_favourite_music > 0){
        for (int i = 0; i < this->num_of_favourite_music; i++){
            std::cout << i + 1 << ". " << this->music_list[i] << std::endl;
        }
    }
    else{
        std::cout << "No music in your favourite list" << std::endl;
    }
}

int User::getNumOfUser(){
    return User::n_user;
}