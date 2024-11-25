public class percentage4subjectoutof60 {
    public static void main(String[] args) {
        // calculate the percentage out 100 & 4 subject each subject highest marks is 60 
        double physics_marks= 56;
        double chemistry_marks= 54;
        double maths_marks= 51;
        double english_marks= 52;
        // total=sum of the total number/total subject*marks out of each subject       
        // percentage=total*100
        double y=((physics_marks+ chemistry_marks +maths_marks+english_marks)/240)*100;
        System.out.println(y);
    }
}
