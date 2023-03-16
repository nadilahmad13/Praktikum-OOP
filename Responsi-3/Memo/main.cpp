#include "memo.h"
#include "sekretaris.h"
#include <iostream>

int main(){
    cout << "----TEST PESAN----" << endl;
    Memo memo1("Ini pesan bro", "buat km");
    cout << "Pesan: " << memo1.getPesan() << "\nBuat: " << memo1.getUntuk() << endl; 
    // Memo memo2("ASDJHASODJAOI SDJOAIS JDOIAS JDOIAS JDOIASJ DOIJAS DOJAS D", "buat dia");

    cout << "----TEST SEKRETARIS----" << endl;
    Sekretaris sekre;
    // sekre.buatMemo("PESAN INI OEREREOIRJAO IERAOIEJ ROAIEJ ROAIERJ OIAE JROIAEJ ROIA EJR", "buat luv");
    // sekre.printStatus();
    // cout << "\n\n";
    // sekre.buatMemo("Ini pesan broo", "buat km");
    // sekre.printStatus();
    // cout << "\n\n";
    // sekre.buatMemo("Ini pesan brooo", "buat km");
    // sekre.printStatus();
    // sekre.buatMemo("Ini pesan broooo", "buat km");
    // cout << "\n\n";
    // sekre.buatMemo("Ini pesan broooooaosjdhakjsdhkjashdkashdkahsdkhjashdkjahsdkjhasdkjhaskjdhakjsdhkajsdhkjashd", "buat km");
    // sekre.buatMemo("pesan","km");
    // sekre.buatMemo("pesan","km");
    // sekre.buatMemo("pesan","km");

    sekre.buatMemo("pesan","km");
    sekre.buatMemo("pesan","km");
    sekre.buatMemo("pesan","km");
    sekre.buatMemo("pesan","km");
    sekre.buatMemo("pesan","km");
    sekre.buatMemo("pesan","km");
    sekre.isiKertas(10);
    sekre.buatMemo("pesan","km");
    sekre.buatMemo("pesan","km");
    sekre.buatMemo("pesan","km");
    sekre.buatMemo("pesan","km");
    sekre.buatMemo("pesan","km");
    sekre.printStatus();
    sekre.buatMemo("pesan","km");
    sekre.printStatus();
    sekre.istirahat();
    sekre.buatMemo("pesan","km");
    sekre.printStatus();
}