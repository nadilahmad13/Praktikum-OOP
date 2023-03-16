#include <iostream>
#include "User.h"
#include "PremiumUser.h"
#include "ArtistUser.h"
using namespace std;

int main()
{
    char ab[] = "nadil";
    char ac[] = "UFF";
    char ad[] = "UFFF UFFF ";
    User* nadil = new User(ab);
    User* ccNadil = new User(*nadil);
    cout<<nadil -> getName()<<endl;
    cout<<"musiknya"<<endl;
    nadil -> addFavouriteMusic(ac);
    nadil -> addFavouriteMusic(ad);
    nadil -> viewMusicList();
    cout<<"delete"<<endl;
    nadil ->deleteFavouriteMusic(ac);
    nadil -> viewMusicList();
    cout<<"copy"<<endl;
    ccNadil -> addFavouriteMusic(ac);
    ccNadil -> viewMusicList();
    cout<<"delete"<<endl;
    ccNadil ->deleteFavouriteMusic(ac);
    ccNadil -> viewMusicList();

    //premium
    
    char jr[] = "rilalino";
    char lagu1[] = "lagu copa berisik";
    char uffmulukntl[] = "eh pak pak pak bisa tolong balikin ga";
    PremiumUser* uffjason = new PremiumUser(jr);
    PremiumUser* cUffjason = new PremiumUser(*uffjason);
    uffjason -> downloadMusic(lagu1);
    cout<<"matiin premium"<<endl;
    uffjason->inactivatePremium();
    cout<<"cek download lagi"<<endl;
    uffjason -> downloadMusic(lagu1);
    uffjason -> getNumOfMusicDownloaded();
    if (uffjason->getPremiumStatus())
    {
        cout << "premium"<<endl;
    }
    else
    {
        cout<<"yah ga premium"<<endl;
    }
    //ARTIS
    char lacopa[] = "COPA";
    char lagu2[] = "LA COPA LA VIDA";
    ArtistUser* kc = new ArtistUser(lacopa);
    cout<<kc -> getName()<<endl;
    kc -> uploadMusic(lagu2);
    kc ->uploadMusic(lagu1);
    kc -> viewUploadedMusicList();
    kc -> deleteUploadedMusic(lagu2);
    kc -> viewUploadedMusicList();
    ArtistUser* ckc = new ArtistUser(*kc);
    cout<<"copy"<<endl;
    ckc -> viewUploadedMusicList();
    kc -> ~ArtistUser();
    ckc -> ~ArtistUser();
}