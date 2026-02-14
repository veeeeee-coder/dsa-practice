//How to actually solve a problem?
//1. Understand the problem
//2.Input
//3.Step by step solution
//4.Code

//Components of flowchart
//1. Start/End (Oval) - Beginning or finish
//2. Input/Output(Parallelogram) - Take data / Show result
//3. Process(Rectangle) - Calculation or instruction
//4. Decision(Diamond) - Condition (Yes/No)
//5. Arrow - Flow direction
//6. Connector(Circle) - Jump to another place

//Pseudo code-(uses english like language) General Logic of Solution

//EX-1-Find sum of two numbers
/*              _____________
               /               \
              /      START      \
              \                 /
               \_______________/
                       |
                       v
            _______________________
           /                       /
          /   INPUT A, B         /
         /_______________________/
                       |
                       v
              ___________________
             |                   |
             |   SUM = A + B     |
             |                   |
             |___________________|
                       |
                       v
            _______________________
           /                       /
          /   PRINT SUM          /
         /_______________________/
                       |
                       v
                 _____________
               /               \
              /       END       \
              \                 /
               \_______________/ 
**/

/**
BEGIN
    DECLARE A, B, SUM

    INPUT A
    INPUT B

    SUM ← A + B

    PRINT SUM
END
**/

//EX-2-Area of a square
/**                 _____________
               /               \
              /      START      \
              \                 /
               \_______________/
                       |
                       v
            _______________________
           /                       /
          /   INPUT SIDE (S)     /
         /_______________________/
                       |
                       v
              ___________________
             |                   |
             |   AREA = S × S    |
             |                   |
             |___________________|
                       |
                       v
            _______________________
           /                       /
          /   PRINT AREA         /
         /_______________________/
                       |
                       v
                 _____________
               /               \
              /       END       \
              \                 /
               \_______________/
 **/

/**
BEGIN
    DECLARE S, AREA

    INPUT S

    AREA ← S × S

    PRINT AREA
END
**/

//EX-3-Minimum of two numbers
/**                 _____________
               /               \
              /      START      \
              \                 /
               \_______________/
                       |
                       v
            _______________________
           /                       /
          /    INPUT A, B        /
         /_______________________/
                       |
                       v
                 ______________
                /              \
               /     A < B ?    \
              <                  >
               \                /
                \______________/
                  /          \
               Yes            No
                |              |
                v              v
       __________________   __________________
      |                  | |                  |
      |   MIN = A        | |    MIN = B       |
      |__________________| |__________________|
                \            /
                 \          /
                  \        /
                   v      v
            _______________________
           /                       /
          /    PRINT MIN         /
         /_______________________/
                       |
                       v
                 _____________
               /               \
              /       END       \
              \                 /
               \_______________/
 **/

/**
BEGIN
    DECLARE A, B, MIN

    INPUT A
    INPUT B

    IF A < B THEN
        MIN ← A
    ELSE
        MIN ← B
    ENDIF

    PRINT MIN
END
**/

//EX-4-Odd or Even
/**                 _____________
               /               \
              /      START      \
              \                 /
               \_______________/
                       |
                       v
            _______________________
           /                       /
          /    INPUT NUMBER (N)  /
         /_______________________/
                       |
                       v
                 ______________
                /              \
               /     N % 2 == 0 ?\
              <                  >
               \                /
                \______________/
                  /          \
               Yes            No
                |              |
                v              v
       __________________   __________________
      |                  | |                  |
      |   PRINT "Even"   | |   PRINT "Odd"    |
      |__________________| |__________________|
                \            /
                 \          /
                  \        /
                   v      v
            _______________________
           /                       /
          /       END             /
         /_______________________/
 **/

/**
BEGIN
    DECLARE N

    INPUT N

    IF N % 2 == 0 THEN
        PRINT "Even"
    ELSE
        PRINT "Odd"
    ENDIF
END
**/

//EX-5-Sum of numbers from 1 to N
/**                 _____________
               /               \
              /      START      \
              \                 /
               \_______________/
                       |
                       v
            _______________________
           /                       /
          /      INPUT N         /
         /_______________________/
                       |
                       v
              ___________________
             |                   |
             |   SUM = 0        |
             |   I = 1          |
             |___________________|
                       |
                       v
                 ______________
                /              \
               /    I ≤ N ?     \
              <                  >
               \                /
                \______________/
                  /          \
               Yes            No
                |              |
                v              v
        ___________________   _____________
       |                   | /             \
       |  SUM = SUM + I    |/     PRINT     \
       |  I = I + 1        |\      SUM      /
       |___________________| \_____________/
                |                  |
                └───────┐         v
                        └──────── END
**/ 
/**
BEGIN
    DECLARE N, I, SUM

    INPUT N

    SUM ← 0
    I ← 1

    WHILE I ≤ N DO
        SUM ← SUM + I
        I ← I + 1
    ENDWHILE

    PRINT SUM
END
 **/

 //EX-6-Prime number check
 /** 
  *             (START)
               |
               v
            Read N
               |
               v
             I = 2
               |
               v
            I < N ?
           /      \
         No        Yes
         |           |
         v           v
   Print N is     N % I = 0 ?
     Prime        /        \
                 Yes        No
                 |           |
                 v           v
            I == N ?       I = I + 1
            /      \           |
          Yes      No          |
          |         |          |
          v         v          |
   Print N is    Print N is    |
     Prime        Not Prime    |
          \         /          |
           \       /           |
            \     /            |
              (STOP) <---------
    **/
/**
BEGIN
INPUT N

IF N <= 1 THEN
    PRINT "Not Prime"
ELSE
    I = 2
    WHILE I < N
        IF N % I = 0 THEN
            PRINT "Not Prime"
            STOP
        ENDIF
        I = I + 1
    ENDWHILE
    PRINT "Prime"
ENDIF

END
**/

