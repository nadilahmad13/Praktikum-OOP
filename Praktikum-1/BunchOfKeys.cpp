/*
AHMAD NADIL
13521024
*/
#include "BunchOfKeys.hpp"

BunchOfKeys::BunchOfKeys(){
	n_keys = 0;
}  
// member function
void BunchOfKeys::add(){
	n_keys++;
}
void BunchOfKeys::shake(){
	if (n_keys <= 1){
		cout << "Tidak terjadi apa-apa" << endl;
	}else{
		for (int i = 0 ; i < n_keys ;i++){
			cout << "krincing" << endl;
		}
	}
}
