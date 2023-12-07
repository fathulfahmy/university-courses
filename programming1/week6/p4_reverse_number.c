#include <stdio.h>

int main(void)
{
    int userNum, reversedNum = 0, remark;

    // request user input
    printf("Enter a number (100 - 10000): ");
    scanf("%d", &userNum);

    while (userNum != 0)
    {
        // store last digit of userNum in remark
        // e.g. userNum is 12345
        // store 5 in remark
        remark = userNum % 10;

        // increase number of digit of reversedNum
        // e.g. 5 -> 50

        // add remark to the last digit of new reversedNum
        // e.g. 50 -> 54
        reversedNum = reversedNum * 10 + remark;

        // remove last digit of userNum
        // e.g. userNum is 12345
        // remove 5
        // userNum is now 1234
        userNum = userNum / 10;
    }
    printf("reversed number: %d", reversedNum);
    return 0;
}

// store last digit of userNum in remark
// increase number of digit of reversedNum
// add remark to the last digit of new reversedNum
// remove last digit of userNum

// e.g.
// (first loop)
// userNum is 12345
// remark is 5
// reversedNum is * -> 0
// add remark to reversedNum 0 -> 5
// remove last digit of userNum 12345 -> 1234

// (second loop)
// userNum is 1234
// remark is 4
// 5 -> 50
// 50 -> 54
// 1234 -> 123

// (third loop)
// userNum is 123
// remark is 3
// 54 -> 540
// 540 -> 543
// 123 -> 12

// (fourth loop)
// userNum is 12
// remark is 2
// 543 -> 5430
// 5430 -> 5432
// 12 -> 1

// (fifth loop)
// userNum is 1
// remark is 1
// 5432 -> 54320
// 54320 -> 54321
// 1 -> 0
