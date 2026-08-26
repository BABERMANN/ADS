public class verify_email {

    public static boolean valid(String email) {
        if(email == null || email.trim().isEmpty()) return false;

        int first_occurrence = email.indexOf("@");
        int second_occurrence = email.lastIndexOf("@");

        if(first_occurrence <= 0 || first_occurrence != second_occurrence || email.length() - 1 == first_occurrence) return false;

        String local = email.substring(0, first_occurrence);
        String domain = email.substring(first_occurrence + 1);

        if (!domain.contains(".") || domain.startsWith(".") || domain.endsWith(".")) return false;

        if (domain.indexOf(".") == 0) return false;

        return true;
    }


    public static void main(String[] args) {
        String emailTeste = ".@.....";
        boolean resultado = valid(emailTeste);

        String result = String.format("O e-mail %s é valido? : %b",emailTest,resultado)
        System.out.println(result)
    }
}
