/*
 * NIM : 13521024
 * Nama : Ahmad Nadil
 * Ujian Praktikum 2
 */
import java.lang.Math;
import java.util.*;
import java.util.stream.*;
import java.lang.reflect.*;

/**
 * Note:
 * Beberapa fungsi yang (mungkin??) akan berguna:
 * - obj.getClass() -> mengembalikan kelas dari objek.
 * - cls.getDeclaredFields() -> mengembalikan array dari semua field yang ada di kelas cls.
 * - cls.getDeclaredField(field) -> mengembalikan field dengan nama field dari kelas cls.
 * - cls.getDeclaredMethods() -> mengembalikan array dari semua method yang ada di kelas cls.
 * - cls.getDeclaredMethod(method, parameterTypes...) -> mengembalikan method dengan nama method dan parameter parameterTypes dari kelas cls.
 * - field.get(obj) -> mengembalikan nilai dari field obj.
 * - field/method.setAccessible(true) -> mengubah aksesibilitas dari field/method menjadi true.
 * - field/method/cls.getName() -> mengembalikan nama dari field/method.
 * - method.invoke(obj, args...) -> mengembalikan nilai dari method obj.
 * - method.getParameterTypes() -> mengembalikan array tipe parameter dari method.
 * - method.getReturnType() -> mengembalikan tipe return dari method.
 * - param.getType() -> mengembalikan tipe dari parameter param.
 * - Modifier.toString(field/method/cls.getModifiers()) -> mengembalikan string representasi dari modifier field/method.
 * - *.toString() -> mengembalikan string representasi dari objek.
 * - *.isEquals(obj) -> mengembalikan true apabila objek sama dengan obj.
 */

public class Detective {
    private static int nMin = 0;  
    private static int nMax = 1000;  
    private static int lmin = 1;
    private static int lmax = 10;

    /**
     * Fungsi untuk mendapatkan angka random dari 0 sampai 100.
     * @return Integer angka random dari 0 sampai 100.
     */
    public Integer generateRandomInteger() {
        return (int)(Math.random() * (nMax - nMin + 1) + nMin);
    }

    /**
     * Fungsi untuk mendapatkan string random dengan panjang random dari 1 sampai 10.
     * @return String string random dengan panjang random dari 1 sampai 10.
     */
    public String generateRandomString() {
        int length = (int)(Math.random() * (lmax - lmin + 1) + lmin);
        String str = "";
        for (int i = 0; i < length; i++) {
            str += (char)(Math.random() * (122 - 97 + 1) + 97);
        }
        return str;
    }

    /**
     * Fungsi untuk mendapatkan attribute dari suatu kelas yang menyerupai MysteriousCase.
     * Apabila terjadi error, maka return string kosong, dan
     *  - Print "Illegal Access Exception" apabila reflection dilakukan dengan akses yang kurang
     *  - Print "No Such Field Exception" apabila field tidak ditemukan.
     * @param attr Attribute yang ingin didapatkan.
     * @param setAccessible apabila true maka lakukan setAccessible(true) pada field.
     * @param obj Objek dari kelas yang menyerupai MysteriousCase.
     * 
     * @return String representasi string dari attribute yang ingin didapatkan.
     */
    public String investigateSecretAttribute(String attr, Boolean setAccessible, Object obj) {
        try {
            Class<? extends Object> cls = obj.getClass();
            Field f = cls.getDeclaredField(attr);
            f.setAccessible(setAccessible);
            return f.get(obj).toString();
        }
        
        // Catch all possible exceptions.
        catch (IllegalAccessException e) {
            System.out.println("Illegal Access Exception");
            return "";
        }
        catch (NoSuchFieldException e) {
            System.out.println("No Such Field Exception");
            return "";
        }
    }
    
    /**
     * Fungsi untuk mengeksekusi method dari suatu kelas yang menyerupai MysteriousCase.
     * Method yang dapat diproses oleh fungsi ini adalah method yang tidak memiliki parameter.
     * Apabila terjadi error, maka return string kosong, dan
     *  - Print "Illegal Access Exception" apabila reflection dilakukan dengan akses yang kurang
     *  - Print "Illegal Argument Exception" apabila jumlah parameter yang diberikan tidak sesuai.
     *  - Print "No Such Method Exception" apabila method tidak ditemukan.
     *  - Print "Invocation Target Exception" apabila terjadi kegagalan invokasi.
     * @param method nama method yang ingin dipanggil.
     * @param obj Objek dari kelas yang menyerupai MysteriousCase.
     * @return String representasi string dari hasil eksekusi method.
     */
    public String investigateSecretMethod(String method, Boolean setAccessible, Object obj) {
        try {
            Class<? extends Object> cls = obj.getClass();
            Method m = cls.getDeclaredMethod(method);
            m.setAccessible(setAccessible);
            return m.invoke(obj).toString();
        }

        // Catch all possible exceptions.
        catch (IllegalAccessException e) {
            System.out.println("Illegal Access Exception");
            return "";
        }
        catch (IllegalArgumentException e) {
            System.out.println("Illegal Argument Exception");
            return "";
        }
        catch (NoSuchMethodException e) {
            System.out.println("No Such Method Exception");
            return "";
        }
        catch (InvocationTargetException e) {
            System.out.println("Invocation Target Exception");
            return "";
        }
    }

    /**
     * Fungsi untuk mengeksekusi method dari suatu kelas yang menyerupai MysteriousCase dengan 
     * parameter.
     * 
     * Ingat bahwa parameter yang dapat diterima oleh method di MysteriousCase hanya bertipe 
     * Integer dan String, oleh karena itu, apabila terdapat parameter yang bukan Integer atau 
     * String, maka return string kosong. Parameter akan digenerate secara random dengan
     * fungsi generateRandomInteger() atau generateRandomString().
     * 
     * Apabila terjadi error, maka return string kosong, dan
     *  - Print "Illegal Access Exception" apabila reflection dilakukan dengan akses yang kurang
     *  - Print "No Such Method Exception" apabila method tidak ditemukan.
     *  - Print "Invocation Target Exception" apabila terjadi kegagalan invokasi.
     * @param method nama method yang ingin dipanggil.
     * @param obj Objek dari kelas yang menyerupai MysteriousCase.
     * @param setAccessible apabila true maka lakukan setAccessible(true) pada method.
     * @param nParam jumlah parameter yang ingin dipanggil.
     * @param pType tipe parameter yang ingin dipanggil, dipastikan hanya Integer atau String.
     * @return String representasi string dari hasil eksekusi method.
     */
    public String investigateSecretMethodWithParam(
        String method, 
        Boolean setAccessible, 
        Object obj, 
        Integer nParam, 
        Class<?>pType
    ) {
        // Untuk menginvoke method dengan parameter, dapat menggunakan kode berikut.
        // Object[] params = new Object[nParam];
        // <Isi params sesuai dengan kebutuhan>
        // m.invoke(obj, params)

        try{
            Class<? extends Object> cls = obj.getClass();
            Class<?>[] paramTypes = new Class<?>[nParam];
            for(int i = 0; i < nParam; i++){
                paramTypes[i] = pType;
            }
            Method m = cls.getDeclaredMethod(method, paramTypes);

            m.setAccessible(setAccessible);
            Object[] params = new Object[nParam];
            for(int i = 0; i < nParam; i++){
                if(pType == Integer.class){
                    params[i] = generateRandomInteger();
                }
                else{
                    params[i] = generateRandomString();
                }
            }
            return m.invoke(obj, params).toString();
        }
        // Catch all possible exceptions.
        catch (IllegalAccessException e) {
            System.out.println("Illegal Access Exception");
            return "";
        }
        catch (IllegalArgumentException e) {
            System.out.println("Illegal Argument Exception");
            return "";
        }
        catch (NoSuchMethodException e) {
            System.out.println("No Such Method Exception");
            return "";
        }
        catch (InvocationTargetException e) {
            System.out.println("Invocation Target Exception");
            return "";
        }
    }

    /**
     * Fungsi untuk mendapatkan berapa jumlah Integer digunakan sebagai sebagai parameter method,
     * return value method, dan juga sebagai attribute kelas yang ada.
     * @param obj Objek dari kelas yang menyerupai MysteriousCase.
     * @return Integer jumlah parameter integer dari method.
     */
    public Integer getNumberOfIntUsed(Object obj) {
        Class<? extends Object> cls = obj.getClass();
        Method[] methods = cls.getDeclaredMethods();
        Integer count = 0;

        // Untuk Methods
        for (Method m : methods) {
            Parameter[] params = m.getParameters();
            // Untuk Parameter
            for (Parameter param : params) {
                if (param.getType().equals(Integer.class)) {
                    count++;
                }
            }
            if (m.getReturnType().equals(Integer.class)) {
                count++;
            }
        }

        // Untuk Fields
        Field[] fields = cls.getDeclaredFields();
        for (Field field : fields) {
            if (field.getType().equals(Integer.class)) {
                count++;
            }
        }
        return count;
    }

    /**
     * Fungsi untuk mendapatkan berapa jumlah String digunakan sebagai parameter method, return
     * value method, dan sebagai attribute kelas yang ada. 
     * yang ada.
     * @param obj Objek dari kelas yang menyerupai MysteriousCase.
     * @return Integer jumlah parameter String dari method.
     */
    public Integer getNumberOfStringUsed(Object obj) {
        Class<? extends Object> cls = obj.getClass();
        Method[] methods = cls.getDeclaredMethods();
        Integer count = 0;
        for (Method m : methods) {
            Parameter[] params = m.getParameters();
            for (Parameter param : params) {
                if (param.getType().equals(String.class)) {
                    count++;
                }
            }
            if (m.getReturnType().equals(String.class)) {
                count++;
            }
        }
        Field[] fields = cls.getDeclaredFields();
        for (Field field : fields) {
            if (field.getType().equals(String.class)) {
                count++;
            }
        }
        return count;
    }

    /**
     * Fungsi untuk melakukan print seluruh signature method yang ada pada kelas yang menyerupai MysteriousCase.
     * Format output:
     *  {modifier} {return_type} {method_name}(parameter_type1,...parameter_typeN))    
     * Contoh output:
     *  public Integer mysteryM2(String, Integer)
     * 
     * Refer ke note cara untuk mendapatkan modifier, return_type, method_name, dan parameter_type.
     * 
     * @param obj Objek dari kelas yang menyerupai MysteriousCase.
     */
    public void printAllMethodSignature(Object obj) {
        Class<? extends Object> cls = obj.getClass();
        Method[] methods = cls.getDeclaredMethods();
        Arrays.sort(methods, new Comparator<Method>() {
            @Override
            public int compare(Method a, Method b) {
                return a.getName().compareTo(b.getName());
            }
        });
        for (Method m : methods) {
            System.out.print(Modifier.toString(m.getModifiers()) + " ");
            System.out.print(m.getReturnType().toString() + " ");
            System.out.print(m.getName() + "(");
            Parameter[] params = m.getParameters();
            for (int i = 0; i < params.length; i++) {
                System.out.print(params[i].getType().toString());
                if (i != params.length - 1) {
                    System.out.print(", ");
                }
            }
            System.out.println(")");
        }
    }

    /**
     * Fungsi untuk melakukan print seluruh signature attribute yang ada pada kelas yang menyerupai 
     * MysteriousCase.
     * Format output:
     *  {modifier} {type} {attribute_name}
     * Contoh output:
     *  public Integer mysteryA1
     *  private static String mysteryA2
     * 
     * @param obj Objek dari kelas yang menyerupai MysteriousCase.
     */
    public void printAllAttributeSignature(Object obj) {
        Class<? extends Object> cls = obj.getClass();
        Field[] fields = cls.getDeclaredFields();
        // Sort field by name
        Arrays.sort(fields, (a, b) -> a.getName().compareTo(b.getName()));
        for (Field f : fields) {
            System.out.println(
                Modifier.toString(f.getModifiers()) + " " +
                f.getType().toString() + " " +
                f.getName()
            );
        }
    }
}