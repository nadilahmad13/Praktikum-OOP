/* 
 * NIM            : 13521024
 * Nama           : Ahmad Nadil
 * Responsi 6-7   : Exception, Design Pattern, Threading & Reflection
 * File           : Email.java
*/

public class Email {
    private String email; 
    public Email(String email) {
        this.email = email;
    };
    
    public boolean validateEmail() throws InvalidEmailException, InvalidDomainException {
        /**
         * Implementasi dengan aturan:
         * Aturan email
         * - Email harus mengandung tepat 1 karakter @ ditengah email
         * - Bagian sebelum @ tidak boleh kosong
         * - Bagian email setelah @ harus memiliki tepat 1 buah titik (.)
         * - Email hanya akan mengandung huruf, angka, (@), dan (.). Karakter lain tidak
         * perlu diperiksa
         * 
         * "john@example.com" => Email Valid
         * "jane.doe@gmail.com" => Email Valid
         * "" => mengembalikan pesan "Email tidak boleh kosong"
         * "example.com" => mengembalikan pesan "Email harus mengandung tepat satu buah @"
         * "@example.com" => mengembalikan pesan "@ tidak boleh di awal email"
         * "john@com" => mengembalikan pesan "Email harus memiliki domain yang valid"
         */
        if (this.email.isEmpty()) {
            throw new InvalidEmailException("Email tidak boleh kosong");
        }

        if (!this.email.contains("@") || (this.email.indexOf('@') != this.email.lastIndexOf('@'))) {
            throw new InvalidEmailException("Email harus mengandung tepat satu buah @");
        }

        if (this.email.startsWith("@")) {
            throw new InvalidEmailException("@ tidak boleh di awal email");
        }

        // Domain email tidak valid apabila:
        // "john@com" => mengembalikan pesan "Email harus memiliki domain yang valid"
        // "john@.com" => mengembalikan pesan "Email harus memiliki domain yang valid"
        // "john@com." => mengembalikan pesan "Email harus memiliki domain yang valid"
        String domain = this.email.substring(this.email.indexOf('@') + 1);
        if (domain.indexOf('.') == -1 || (domain.startsWith(".") || domain.endsWith("."))) {
            throw new InvalidDomainException();
        }

        return true;
    }
}

class InvalidEmailException extends Exception {
    public InvalidEmailException(String message) {
        // Implementasi InvalidEmailException
        super(message);
    }
}

class InvalidDomainException extends Exception{
    public String getMessage() {
        // Implementasi custom message InvalidDomainException
        // Return pesan multak berisi: "Email harus memiliki domain yang valid
        return "Email harus memiliki domain yang valid";
    }
}