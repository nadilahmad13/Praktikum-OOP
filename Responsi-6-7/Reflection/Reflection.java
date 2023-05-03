/* 
 * NIM            : 13521024
 * Nama           : Ahmad Nadil
 * Responsi 6-7   : Exception, Design Pattern, Threading & Reflection
 * File           : Reflection.java
*/

import java.util.ArrayList;
import java.util.List;
import java.lang.reflect.*;

public class Reflection{
    //TIDAK BOLEH MENGUBAH NAMA METHOD YANG SUDAH ADA DAN PARAMS SERTA INPUT TYPENYA
    //BOLEH MENAMBAHKAN PRIVATE / PROTECTED METHOD SESUAI DENGAN KEBUTUHAN
    //DI LUAR SANA ADA KELAS YANG NAMANYA Ghost DAN Secret.

    public ArrayList<String> ghostMethods() throws Exception{
        // using reflection, get all private field name from Ghost class
        // return all field name as ArrayList<String>
        Class<?> ghostClass = Class.forName("Ghost");
        Method[] ghostMethods = ghostClass.getDeclaredMethods();
        ArrayList<String> ghostMethodsName = new ArrayList<String>();
        for (Method method : ghostMethods) {
            ghostMethodsName.add(method.getName());
        }
        return ghostMethodsName;
    }   

    public Integer sumGhost() throws Exception{
        // for each ghost methods, get the method that returns Integer, and sum all the result
        // return the sum
        Class<?> ghostClass = Class.forName("Ghost");
        Method[] ghostMethods = ghostClass.getDeclaredMethods();
        Integer sum = 0;
        for (Method method : ghostMethods) {
            method.setAccessible(true);
            if (method.getReturnType().equals(Integer.class)) {
                // Call the method and cast the result to Integer
                Integer result = (Integer) method.invoke(ghostClass.newInstance());
                // Add the result to the sum
                sum += result;
            }
        }
        return sum;
    }

    public String letterGhost() throws Exception{

        // for each ghost methods, get the method that returns String, and concat all the result
        // return the concat result
        Class<?> ghostClass = Class.forName("Ghost");
        Method[] ghostMethods = ghostClass.getDeclaredMethods();
        String concat = "";
        for (Method method : ghostMethods) {
            method.setAccessible(true);
            if (method.getReturnType().equals(String.class)){
                // call the method and cast the result to String
                String result = (String) method.invoke(ghostClass.newInstance());
                // concat the result to the concat variable
                concat += result;
            }
        }
        return concat;
    }

    public String findSecretId(List<Secret> sl, String email) throws Exception{
        // mencari secret id dari list secret yang emailnya cocok dengan input
        // gunakan method isThis(String email) untuk mencocokan email
        // return secret id
        for (Secret secret : sl) {
            if (secret.isThis(email)) {
                // set uniqueId accessible
                Field uniqueId = secret.getClass().getDeclaredField("uniqueId");
                uniqueId.setAccessible(true);
                return (String) uniqueId.get(secret);
            }
        }
        return "NaN";
    }
}