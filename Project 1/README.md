# Project 1

### Problem Set: {4.15, 4.16, 4.19, 4.30, 5.23}

#### Due Date: Wednesday, February 27, 2019 11:59 PM

**4.15** *(Employee Leave Calculator)* A large company allocates its employees leave based on the number of hours worked in a week. Each employee gets two hours of leave for each week worked plus 10% of hours worked. Develop a C++ program that uses a while statement to input each employee’s hours worked for last week and calculates and displays the number of hours of leave accrued by that employee. Process each employee’s figures at a time. 
```
Enter number of hours worked (-1 to end): 10.5
Accrued leave: 3.05 hours

Enter number of hours worked (-1 to end): 45
Accrued leave: 6.50 hours

Enter number of hours worked (-1 to end): 30
Accrued leave: 5.00 hours

Enter number of hours worked (-1 to end): -1
```



**4.16** *(Fundraising initiative Calculator)* A group of school children have completed a 12-hour endurance challenge fundraiser. For each lap they complete, they are sponsored an amount of mon- ey by generous supporters. For every additional lap over 40 that they complete, they are sponsored an additional 50% of the normal lap rate. For example, a student who runs 42 laps, and who has a spon- sorship of USD 10.50 per lap, will contribute USD 451.50 towards the fundraising initiative. Develop a C++ program that uses a while statement to input each student's number of completed laps and spon- sorship rate and then calculates and displays that student's contribution towards the fundraising initiative. Your program should also indicate the total amount collected from the fundraising initiative. 
```
Enter laps completed(-1 to end): 10
Enter sponsorship rate: 12.50
Student contribution is: 125.00

Enter laps completed(-1 to end): 40
Enter sponsorship rate: 20.25
Student contribution is: 810.00

Enter laps completed(-1 to end):
42 Enter sponsorship rate: 10.50
Student contribution is: 451.50

Enter laps completed(-1 to end): -1
Total funds raised: 1386.50
```



**4.17(Not required)** *(Find the Largest)* The process of finding the largest number (i.e., the maximum of a group of numbers) is used frequently in computer applications. For example, a program that determines the winner of a sales contest inputs the number of units sold by each salesperson. The salesperson who sells the most units wins the contest. Write a C++ program that uses a while statement to de- termine and print the largest of 10 numbers input by the user. Your program should use three variables, as follows: 
a) counter—A counter to count to 10 (i.e., to keep track of how many numbers have been input and to determine when all 10 numbers have been processed). 
b) number—The current number input to the program.
c) largest—The largest number found so far.



**4.19** *(Find the Two Largest Numbers)* Using an approach similar to that in Exercise 4.17, find
the *two* largest values among the 10 numbers. [*Note:* You must input each number only once.]



**4.30** *(Fibonacci Sequence)* Write a program that prints the Fibonacci sequence 0, 1, 1, 2, 3, 5,
8, etc. Use 0 and 1 as your seed values. Each subsequent number in the Fibonacci sequence is the
sum of the previous two numbers. Your while loop should not terminate (i.e., you should create an
infinite loop). To do this, simply use the keyword *true* as the expression for the while statement.
What happens when you run this program?



**5.23** *(Egg-timer Program)* Write an application that prints the following egg-timer shape. You
may use output statements that print a single asterisk (*), a single hash (#) a single space or a single
newline character. Maximize your use of iteration (with nested for statements), and minimize the
number of output statements.
```
#########
#*******#
# ***** #
#  ***  #
#   *   #
#  *** 	#
# ***** #
#*******#
#########
```
