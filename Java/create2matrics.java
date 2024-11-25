public class create2matrics {
    public class CreateMatrix {
        public static void main(String[] args) {
            int[][] matrix = {
                {1, 2},  
                {3, 4}   
            };
            System.out.println("2x2 Matrix:");
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    System.out.print(matrix[i][j] + " ");
                }
                System.out.println(); 
            }
        }
    }
    
}
