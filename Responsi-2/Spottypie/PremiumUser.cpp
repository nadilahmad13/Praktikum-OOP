/*
Nama : Ahmad Nadil
NIM  : 13521024
Praktikum Responsi 2
*/

#include <iostream>
#include "PremiumUser.h"
using namespace std;

//ctor, active = true, parameter: nama pengguna
PremiumUser::PremiumUser(char *nameInput) : User(nameInput){
    this->num_of_music_downloaded = 0;
    this->active = true;
}


// cctor
PremiumUser::PremiumUser(const PremiumUser &otherUser) : User(otherUser.name){
    this->num_of_favourite_music = otherUser.getNumOfFavouriteMusic();
    this->music_list = new char *[1000];
    for (int i = 0; i < this->num_of_favourite_music; i++)
    {
        this->music_list[i] = new char[strlen(otherUser.music_list[i])];
        strcpy(this->music_list[i], otherUser.music_list[i]);
    }
    this->num_of_music_downloaded = otherUser.num_of_music_downloaded;
    this->active = otherUser.active;
}

// implementasikan jika diperlukan, 
// jika tidak diperlukan, hapus cctor
// jika perlu diimplementasikan, print "Premium User Copied<endl>"

// dtor; implementasikan jika diperlukan
PremiumUser::~PremiumUser(){
    // cout << "Premium user " << name << " deleted" << endl;
    // num_of_music_downloaded = 0;
}
// jika tidak diperlukan, hapus dtor
// jika diperlukan
// selain implementasi, print juga "Premium user <nama user> deleted<endl>"
// Contoh:
// Premium user A deleted

// print kata-kata sbg. berikut: "Music Downloaded: <judul><endl>"
// Contoh: 
// Music Downloaded: Loyal - Chris Brown, Lil Wayne, Tyga
//
// Jika akun premium tidak aktif, print: "Activate premium account to download music<endl>"
void PremiumUser::downloadMusic(char *musicTitle){
    if (this->active){
        this->num_of_music_downloaded++;
        cout << "Music Downloaded: " << musicTitle << endl;
    }
    else{
        cout << "Activate premium account to download music" << endl;
    }
}

void PremiumUser::inactivatePremium(){
    this->active = false;
}

void PremiumUser::activatePremium(){
    this->active = true;
}

int PremiumUser::getNumOfMusicDownloaded() const{
    return this->num_of_music_downloaded;
}

// mengembalikan nilai active
bool PremiumUser::getPremiumStatus() const{
    return this->active;
}