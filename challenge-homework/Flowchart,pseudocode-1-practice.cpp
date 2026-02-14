//a.Calculate simple interest from the given principal, rate of interest and time period.
/**
                 _____________
              /               \
             /      START      \
             \                 /
              \_______________/
                      |
                      v
           _________________________
          /                       /
         /   INPUT P, R, T      /
        /_______________________/
                      |
                      v
             ___________________
            |                   |
            | SI = (P×R×T)/100 |
            |                   |
            |___________________|
                      |
                      v
           _______________________
          /                       /
         /       PRINT SI       /
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
    INPUT P, R, T

    SI ← (P × R × T) / 100

    PRINT SI
END
**/

//b.Calculate Maximum of two numbers
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
               /   A > B ?     \
              <                  >
               \                /
                \______________/
                  /          \
               Yes            No
                |              |
                v              v
        ___________________   _____________
       |                   | /             \
       |  PRINT A          |/     PRINT B   \
       |___________________| \_____________/
                |                  |
                └───────┐         v
                        └──────── END
**/

/**
BEGIN
    DECLARE A, B

    INPUT A
    INPUT B

    IF A > B THEN
        PRINT A
    ELSE
        PRINT B
    ENDIF
END
**/

//c.Calculate Factorial of a number
/**             (START)
               |
               v
            Input N
               |
               v
            FACT = 1
            I = 1
               |
               v
            I ≤ N ?
           /      \
        Yes        No
        |           |
        v           v
 FACT = FACT × I   Print FACT
        |           |
        v           v
     I = I + 1     (END)
        |
        └─────────────── back to (I ≤ N ?)
**/

/**
BEGIN
    INPUT N

    FACT ← 1
    I ← 1

    WHILE I ≤ N DO
        FACT ← FACT × I
        I ← I + 1
    ENDWHILE

    PRINT FACT
END
**/

//d.given a persons age find if they shud get a driving license or not
/**             (START)
               |
               v
          Input AGE
               |
               v
          AGE ≥ 18 ?
          /        \
       Yes          No
       |             |
       v             v
 Print "Eligible"  Print "Not Eligible"
       |             |
       v             v
             (END)
**/

/**
BEGIN
    INPUT AGE

    IF AGE >= 18 THEN
        PRINT "Eligible for Driving License"
    ELSE
        PRINT "Not Eligible for Driving License"
    ENDIF
END
**/

