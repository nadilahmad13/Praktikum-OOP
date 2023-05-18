#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <stack>
#include <iostream>
using namespace std;

class Calculator
{
  private:
    // Stack untuk menyimpan operator.
    stack<char> opStack;
    // Stack untuk menyimpan operand.
    stack<int> valStack;
  
  public:
    /**
     * Konstruktor Calculator. Menginisialisasi stack operand dan operator dengan kosong.
     */
    Calculator();

    /**
     * Mengecek apakah suatu karakter merupakan operand (suatu digit).
     * 
     * @param c Karakter yang akan dicek.
     * @return bool true jika karakter merupakan digit, false jika bukan.
     * @example IsOperand('1') = true, IsOperand('a') = false.
     */
    bool IsOperand(char c) const;

    /**
     * Mengembalikan nilai integer dari karakter digit. C pasti merupakan digit.
     * 
     * @param c Karakter digit.
     * @return int Nilai integer dari karakter digit.
     * @example CharToInt('1') = 1.
     */
    int CharToInt(char c) const;

    /**
     * Mengecek apakah suatu karakter merupakan operator. Operator yang didukung adalah 
     * +, -, *, dan /.
     * 
     * @param c Karakter yang akan dicek.
     * @return bool true jika karakter merupakan operator yang didukung, false jika bukan.
     */
    bool IsOperator(char c) const;

   /**
    * Mengembalikan nilai prioritas dari operator. Nilai prioritas adalah sebagai berikut:
    * 
    * | Operator  |           Makna           |   Prioritas   |
    * |           |                           |(Higher better)|
    * |-----------|---------------------------|---------------|
    * | *. /      | perkalian, pembagian      | 2             |
    * | +, -      | penjumlahan, pengurangan  | 1             |
    * 
    * Apabila operator tidak dikenali return -1.
    * 
    * @param op Operator yang akan dicek. 
    * @return int Nilai prioritas dari operator.
    */
    int Precedence(char op) const;

    /**
     * Mengembalikan hasil dari operasi dua bilangan dengan operator tertentu. Melakukan throw
     * exception jika terjadi pembagian dengan nol. Operator pasti valid.
     * 
     * @param a Bilangan pertama.
     * @param b Bilangan kedua.
     * @param op Operator.
     * @return int Hasil operasi.
     */
    int ApplyOp(int a, int b, char op) const;

    /**
     * Mengosongkan stack operand dan operator.
     */
    void ClearStacks();

    /**
     * Mengembalikan hasil dari ekspresi aritmetika yang diberikan. 
     * Throw exception apabila ditemukan simbol yang tidak dikenal. 
     * Melakukan print error message sesuai dengan exception yang terjadi (tambahkan endline). 
     * Pastikan stack operand dan operator dikosongkan setelah terjadi exception. 
     * Return 0 jika terjadi exception.
     * 
     * Proses Kalkulasi
     * 1. Lakukan pop pada 2 nilai pada stack operand, sebut saja nilainya A dan B.
     * 2. Lakukan pop pada 1 operasi dari stack operator, misal operasinya adalah “+”.
     * 3. Lakukan operasinya, yaitu A + B dan push hasilnya ke stack operand.
     * 
     * Proses Evaluasi
     * 1. Tiap simbol dari ekspresi aritmetika akan dibaca dari kiri ke kanan.
     * 2. Apabila simbol yang sedang dibaca adalah operand maka simbol tersebut akan di push ke 
     *    stack operand.
     * 3. Apabila simbol yang dibaca adalah operator maka
     *    a. Apabila stack operator kosong maka push simbol tersebut ke dalam stack operator.
     *    b. Apabila stack operator tidak kosong maka
     *       - Apabila tingkat prioritas dari operator sekarang lebih tinggi atau sama dengan 
     *         operator yang ada di top stack maka push operator sekarang ke stack operator.
     *       - Apabila tingkat prioritas dari operator sekarang lebih tinggi kecil dari operator 
     *         yang ada di top stack maka lakukan Proses Kalkulasi (dijelaskan diatas) hingga 
     *         prioritas dari operator sekarang lebih tinggi atau selama stack operator tidak kosong.
     * 4. Apabila simbol yang dibaca adalah “(“ maka push simbol ke dalam stack operator.
     * 5. Apabila simbol yang dibaca adalah “)” maka lakukan Proses Kalkulasi (dijelaskan diatas) 
     *    hingga simbol “(“ yang bersesuaian ditemukan pada stack operator lalu pop simbol “(“.
     * 6. Apabila pembacaan ekpresi aritmetika selesai namun stack operator belum kosong maka 
     *    lakukan Proses Kalkulasi (dijelaskan diatas) hingga stack operator kosong.
     * 7. Nilai yang tersisa pada stack operand adalah hasilnya.
     * 
     * @param tokens Ekspresi aritmetika yang akan dievaluasi.
     * @return int Hasil dari ekspresi aritmetika.
     */
    int Evaluate(const string& tokens);
};

#endif