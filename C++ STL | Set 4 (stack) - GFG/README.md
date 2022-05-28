# C++ STL | Set 4 (stack)
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:20px">Implement different operations on a stack&nbsp;s&nbsp;.</span><br>
<br>
<span style="font-size:20px"><strong>Input:</strong><br>
The first line of input contains an integer <strong>T</strong> denoting the no of test cases . Then T test cases follow. The first line of input contains an integer <strong>Q</strong> denoting the no of queries . Then in the next line are <strong>Q</strong>&nbsp;space separated queries .<br>
A query can be of&nbsp;four&nbsp;types&nbsp;<br>
1. a x (Pushes an element x to the stack s&nbsp;)<br>
2. b (if stack is not empty&nbsp;pops top&nbsp;element and prints it, else prints -1)<br>
3. c (prints the size of the stack )<br>
4. d (if stack is not empty prints the top element of the stack, else&nbsp;prints&nbsp;-1)<br>
<br>
<strong>Output:</strong><br>
The output for each test case will&nbsp;&nbsp;be space separated integers denoting the results of each query .&nbsp;<br>
<br>
<strong>Constraints:</strong><br>
1&lt;=T&lt;=100<br>
1&lt;=Q&lt;=100<br>
<br>
<strong>Example:</strong></span></p>

<p><span style="font-size:20px"><strong>Input</strong><br>
2<br>
5<br>
a 4 a 6 a 7 b c&nbsp;<br>
3<br>
a 55 a 11 d&nbsp;<br>
<strong>&nbsp;<br>
Output</strong><br>
7 2<br>
11<br>
<br>
<strong>Explanation :<br>
For the first test case</strong><br>
There are five&nbsp;queries.&nbsp;Queries&nbsp;are&nbsp;performed in this order<br>
1. a 4 { stack s has&nbsp;4 &nbsp;}<br>
2. a 7&nbsp;{stack s&nbsp;has 4,7 }<br>
3. a 6 {stack s has 4,7,6}<br>
4. b {pop 6 from stack s and prints it stack now has 4,7}<br>
5. c {prints the size of the stack s}<br>
<br>
<strong>For the sec test case&nbsp;</strong><br>
There are three&nbsp;queries.&nbsp;Queries&nbsp;are&nbsp;performed in this order<br>
1. a 55 &nbsp;(stack&nbsp;s&nbsp;has&nbsp;55}<br>
2. a 11 &nbsp;(stack s&nbsp;has 55 ,11}<br>
3. d &nbsp; &nbsp; &nbsp;(prints the top element of the stack s&nbsp;ie. 11&nbsp;)</span><br>
<br>
<br>
<br>
<span style="font-size:16px"><strong>Note:</strong>The <strong>Input/Output</strong> format and <strong>Example</strong> given are used for system's internal purpose, and should be used by a user for <strong>Expected Output</strong> only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.</span></p>
 <p></p>
            </div>