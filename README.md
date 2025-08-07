# Decision-making-statements-using-loops

# Aim: 
To study and implement C++ Decision making statements using loops.

## Theory:

In C++, decision making and looping are fundamental control structures that help in controlling the flow of the program based on certain conditions.

**1. Decision Making Statements** : 
These statements are used to execute a particular block of code based on the evaluation of conditions.

**- If Statement**: Executes a block of code if a specified condition is true.

**- If-else Statement**: Executes one block if the condition is true, another if it's false.

**- Else-if Ladder**: Used to check multiple conditions.

**- Switch Statement**: Selects one of many blocks of code to be executed.

**2. Looping Statements** :
Loops are used to execute a block of code repeatedly based on a condition.

**-For Loop** : Used when the number of iterations is known.

**-While Loop** : Checks condition before executing the loop body.

**-Do while Loop** : Executes the loop body at least once, then checks the condition.

## 1. Algorithm: Username and Password Validation

**Step 1** : Start

**Step 2** : Declare variables:
 - username and password as strings

 - attempts as an integer and initialize it to 5

**Step 3** : Prompt the user to enter the username

  - Read the input and store it in the username variable

**Step 4** : Repeat the following steps while attempts > 0:

  - Display password format requirements:

  - First letter should be a capital letter and password must include a special character @ or _

  - Prompt the user to enter the password

  - Read the password input

**Step 5** : Check if:

   - The first character of the password is a capital letter

   - The password contains at least one special character: @ or _

**Step 6** : If both conditions are true:

    - Display “Welcome!”

    - Break the loop

**Step 7** : Else:

     - Decrease attempts by 1

     - If attempts > 0:

     - Display a message indicating incorrect format and number of tries left

     - Else : Display “System locked. You have exceeded the limit for today. Try again after 24 hours.”

**Step 8** : End

## 2. Algorithm for Program 06: The star pattern

**Step 1** : Start

**Step 2** : Declare integer variables i, j, and n

**Step 3** : Set n = 5 (number of rows)

**Step 4** : Repeat for i = 1 to n (inclusive) :
  
   
   a. Repeat for j = 1 to i (inclusive): Print "* " (star followed by a space)
  
   
   b. Move to the next line (print newline)

**Step 5** : End

## 3. Algorithm for Floyd's Triangle :

**Step 1** : Start

**Step 2** : Declare integer variables n, num, i, and j

**Step 3** : Set n = 4 and num = 1

**Step 4** :Repeat for i = 1 to n:
   

a. Repeat for j = 1 to i; 
    

- Print num
     

- Increment num
  

b. Print newline

**Step 5** : End


## 4. Algorithm for Hourglass star pattern:

**Step 1** : Start

**Step 2** : Declare integers n, i, j, k

**Step 3** : Set n = 5

**Step 4** : For Upper half (inverted triangle)
  
 
  Repeat for i = n down to 1
   
- Print (n - i) spaces

- Print i stars with spaces

- Move to the next line

**Step 5** : For Lower half (regular triangle)
  
  
  Repeat for i = 2 to n

 - Print (n - i) spaces
 
 - Print i stars with spaces
 
 - Move to the next line

**Step 6** : End

## Conclusion:

In this experiment, we successfully studied and implemented decision-making statements in combination with loops in C++. These constructs are fundamental for controlling the flow of a program based on certain conditions. Using if, if-else, switch, and looping structures such as for, while, and do-while, we were able to solve problems that required repetitive execution with conditional logic. This experiment enhanced our understanding of how conditional statements work with loops to build efficient, logical, and interactive programs.






