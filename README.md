# CS 124 Project 2
Create a Queue class and explore big-Oh complexities!

For this project, you will write a C++ program that uses Stack and Queue data structures to store objects of varying data types.

## Requirements
It is recommended that you use the data and program from Project 1 as a starting point.

### Stack Class
The Stack class from lecture is included in the starter code for this project.

### Queue Class
Create a Queue class that uses the Node class (also included in the starter code) to create a functioning queue data structure.
* Your Queue should keep track of where the front and back Nodes are.
* Your Queue should be able to:
 * `enqueue` (push Objects onto its back),
 * `dequeue` (pop and return Objects off its front),
 * `search` (determine if an Object is in the Queue or not), and
 * `print` (list all of the items in the Queue object, ordered from front to back).
* Your Queue must be able to be used with any data type.
* Your Nodes must be stored in heap memory.
* Your program must not have any memory leaks.

### Main function
Create two Queue objects: one of integers and one of strings. Demonstrate that the Queue methods work correctly by calling methods on the integer and string Queues and printing out to the console when appropriate.

Perform the following operations:
* Create a third Queue object and a Stack object, both of the type you created in Project 1.
* Use a loop to print and enqueue the first 10 objects from your vector (from Project 1) onto the Queue.
* Use a second loop to dequeue the 10 objects off the Queue and push them onto the Stack.
* Use a third loop to pop the 10 objects off the Stack and print them.

What is the order of the objects before and after adding them to the Queue and Stack?When and why did it change?

The order of the Items in the two Data structures are inverse of eachother beacuse The Stack is a Lifo structure,
So the most recent addition to the stack is the first item that leaves. However, The Queue is Fifo, which means that 
The first in is the first out, so the items will come out in the opposite order of the Stack.
### Design
Consider the following questions:
* Using the Node class, will the links point from the front to the back of the Queue or from the back to the front? Which way will make the push and pop methods more efficient?
  * The Nodes will point from front to back for the Queue. Back to front is more efficient than front to back because if you want the first item you input then you have to go all the way back
through the stack to get the first one. 
* How will you make sure there are no memory leaks?
  *By making sure front is not a Null pointer, meaning that the stack is empty before trying to dequeue it Will make sure that there are no memory leaks
* How will you print the objects in the main function? Should you overload an operator?
  * By using the .print() function, I can print the Queue or the stack.

### Test
How can you demonstrate in your code that your Queue class works correctly? How can you use the integer and string Queue objects to show this?

You can demonstrate this by queueing a bunch of ints and strings to a respective queue,
searching for specific strings or ints, printing the queues, and then dequeing the items from the queues

## Report
You must write a report about your project. Answer the following questions directly in this section of the README file:
* Information about your data set (you will be assigned a different grader for this project)
* The time complexities of each method in the Stack and Queue classes
* Justify your use of pointers in the Queue (i.e. the direction of the arrows between the Nodes) as it relates to the complexity of the enqueue and dequeue methods
* An explanation of when and why the 10 objects in the main function changed their order

**Note: Any code that was not authored by yourself or the instructor must be cited in your report. This includes the use of concepts not taught in lecture.**

 My dataset is a list of the Billboard top songs. There are about 25,000 data points in the dataset, each is a different song
enqueue - Linear, dequeue - Constant, Search - Linear, Print - Linear, pop - constant, push - constant, search - linear, print - linear
The pointers in the Queue class are used to call the methods of objects that aren't directly referenced, but rather their locations are referenced.
The Queue uses a back to front, structure as opposed to the top to bottom that the stack uses. The back to front is more efficient because to get
to the first item in the structure, you need to iterate through every other item in the stack. The 10 objects change order because of the difference 
between Lifo and Fifo. Fifo(queues) has the objects leave the queue in the order they went in, whereas Lifo(Stacks) has them come out in revurse order. 

## Submit

You must include your source files, your data file(s), CMakeLists.txt, and your updated README.md file that contains your report to your repository. Submit to Gradescope using the GitHub repository link, double-check that all the correct files are there, and wait for the autograder to provide feedback.

## Grading
The project is out of 60 points.

| Points Possible | Description of requirement |
|------------------- | ----------------------------- |
| 5 pts | Program compiles and runs. |
| 5 pts | Code style. Readable, naming style is consistent, comments where appropriate. |
| 20 pts | Queue class satisfies requirements. |
| 5 pts | You create at least two Queue objects of different types, as described above. |
| 5 pts | You test your code to demonstrate that everything works correctly. |
| 10 pts | You perform the operations with the Stack and the Queue as described above. |
| 10 pts | Report satisfies requirements, is easily readable, and is professional. |