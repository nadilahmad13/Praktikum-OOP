#ifndef ARTISTUSER_H
#define ARTISTUSER_H

#include "User.h"

class ArtistUser : public User {
    public:
        //ctor, parameter: nama pengguna
        ArtistUser(char*);
        
        // cctor
        ArtistUser(const ArtistUser&);

        // dtor
        // selain implementasi, print juga "Artist user <nama user> deleted"
        // Contoh:
        // Artist user A deleted
        ~ArtistUser();

        // Asumsi: musik unik, parameter: judul musik
        void uploadMusic(char*);
        void deleteUploadedMusic(char*);

        // format print:
        // <No>. <Judul musik><endl>
        // contoh:
        // 1. Starship - Nicki Minaj
        // 2. To Be Human - Sia, Labrinth
        //
        // jika tidak ada musik, print: "No music uploaded<endl>"
        void viewUploadedMusicList() const;
        int getNumOfMusicUploaded() const;
        static int getNumOfArtist();

    private:
        int num_of_music_uploaded; // jumlah musik dalam uploaded_music_list
        char** uploaded_music_list;
        static int num_of_artist;
};

#endif