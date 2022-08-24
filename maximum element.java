import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

class Result {

    /*
     * Complete the 'getMax' function below.
     *
     * The function is expected to return an INTEGER_ARRAY.
     * The function accepts STRING_ARRAY operations as parameter.
     */

    public static List<Integer> getMax(List<String> operations) {
    // Write your code here
    Stack<Integer> stack = new Stack<>();
        Stack<Integer> maxStack = new Stack<>();
        List<Integer> answerList = new ArrayList<>();
        
        char type; int elem;    // query related
        
        for (String query : operations) {
            type = query.charAt(0);
            
            if (type == '1') {
                
                elem = Integer.parseInt(query.substring(2));
                stack.push(elem);
                
                if (maxStack.isEmpty()) {
                    maxStack.push(elem);
                    continue;
                }
                if (elem >= maxStack.peek()) {
                    maxStack.push(elem);
                }
            }
            else if (type == '2') {
                if (stack.pop() == maxStack.peek()) // pops stack 
                    maxStack.pop();
            }
            else {  // type 3 query
                answerList.add(maxStack.peek());
            }
        }
        
        return answerList;
        
    }

    }

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        List<String> ops = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String opsItem = bufferedReader.readLine();
            ops.add(opsItem);
        }

        List<Integer> res = Result.getMax(ops);

        for (int i = 0; i < res.size(); i++) {
            bufferedWriter.write(String.valueOf(res.get(i)));

            if (i != res.size() - 1) {
                bufferedWriter.write("\n");
            }
        }

        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
