'''
We define a modified Fibonacci sequence using the following definition:
ti+2 = ti+(ti+2)^2
Given terms  and  where , term  is computed using the following relation:
Given three integers,t1 ,t2 , and n, compute and print term  of a modified Fibonacci sequence.

Note: The value of  may far exceed the range of a -bit integer. 
Many submission languages have libraries that can handle such large results but, for those that don't (e.g., C++),
 you will need to be more creative in your solution to compensate for the limitations of your chosen submission language.

Input Format

A single line of three space-separated integers describing the respective values of t1, t2, and n.


Output Format

Print a single integer denoting the value of term  in the modified Fibonacci sequence where the first two terms are  and .

Sample Input

0 1 5
Sample Output

5

'''

a,b,n = map(int,input().strip().split())
for _ in range(n-2):
    c = a + b*b
    a=b
    b=c
print(c)