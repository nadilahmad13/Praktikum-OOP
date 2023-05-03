public class Main {
    public static void main(String[] args) {
        Email email = new Email("john@com.");
        try {
            email.validateEmail();
            System.out.println("Email valid");
        } catch (InvalidEmailException e) {
            System.out.println(e.getMessage());
        } catch (InvalidDomainException e) {
            System.out.println(e.getMessage());
        }
    }
}
