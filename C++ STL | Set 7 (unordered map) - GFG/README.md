# C++ STL | Set 7 (unordered map)
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:20px">Implement different operations on unordered maps.<br>
<br>
<strong>Input:</strong><br>
The first line of input contains an integer <strong>T</strong> denoting the no of test cases . Then T test cases follow. The first line of input contains an integer <strong>Q</strong> denoting the no of queries . Then in the next line are <strong>Q</strong>&nbsp;space separated queries .<br>
A query can be of four&nbsp;types&nbsp;<br>
1. a x y&nbsp;(adds an entry&nbsp;with key x and value&nbsp;y to the unordered map)<br>
2. b x (print value of &nbsp;x if&nbsp;present in the unordered map else print -1.&nbsp;)<br>
3. c (prints the size of the unordered map)<br>
4. d x (removes an entry&nbsp;with key x from the unordered&nbsp;map)<br>
<br>
<strong>Output:</strong><br>
The output for each test case will&nbsp;&nbsp;be space separated integers denoting the results of each query .&nbsp;<br>
<br>
<strong>Constraints:</strong><br>
1&lt;=T&lt;=100<br>
1&lt;=Q&lt;=100<br>
<br>
<strong>Example(To be used only for expected output):</strong></span></p>

<p><span style="font-size:20px"><strong>Input</strong><br>
2<br>
5<br>
a 1 2 a 66 3 b 66 d 1&nbsp;c<br>
3<br>
a 1 66 b 5 c<br>
<br>
<strong>Output</strong><br>
3 1<br>
-1 1</span></p>

<p><span style="font-size:20px"><strong>Explanation :<br>
For the first test case</strong><br>
There are five&nbsp;queries.&nbsp;Queries&nbsp;are&nbsp;performed in this order<br>
1. a 1 2 &nbsp; &nbsp; --&gt; &nbsp;map has a key 1 with value 2&nbsp;<br>
2. a 66 3 &nbsp; ---&gt;&nbsp;map has a key 66 with value 3<br>
3. b 66 &nbsp; &nbsp; &nbsp;---&gt; prints the value of key 66 if its present in the map ie 3.<br>
4. d 1&nbsp; &nbsp; &nbsp; &nbsp; ---&gt; &nbsp;erases an entry from map with key 1<br>
5. c &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; ---&gt; prints the size of the map ie 1<br>
<br>
<strong>For the sec test case&nbsp;</strong><br>
There are three&nbsp;queries.&nbsp;Queries&nbsp;are&nbsp;performed in this order<br>
1. a 1 66 &nbsp; ---&gt; adds a key 1 with a value of 66 in the map<br>
2. b 5 &nbsp; &nbsp; &nbsp; &nbsp;---&gt; &nbsp;since the key 5 is not present in the map hence -1 is printed.<br>
3. c &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; ---&gt; prints the size of the map ie 1</span><br>
<br>
<br>
<br>
<span style="font-size:16px"><strong>Note:</strong>The <strong>Input/Output</strong> format and <strong>Example</strong> given are used for system's internal purpose, and should be used by a user for <strong>Expected Output</strong> only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.</span></p>
 <p></p>
            </div>