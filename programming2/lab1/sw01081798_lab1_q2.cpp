/*************************************************************
AUTHOR: Muhammad Fathul Fahmy Bin Mohd Nizam
DATE: 15-09-2022
DESCRIPTION: to display average and final test score
INPUT: score1, score2, score3, score4, score5
OUTPUT: avg_score and final_score
FORMULA: total = score1 + score2 + score3 + score4 + score5
avg_score = total / 5;
final_score = avg_score * PERCENT;
CONDITION: NA
*************************************************************/
#include <iostream>
using namespace std;

int main()
{
    float score1, score2, score3, score4, score5, total, avg_score, final_score;
    const float PERCENT = 0.15;
    cout << "Enter five test scores" << endl;
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    total = score1 + score2 + score3 + score4 + score5;
    avg_score = total / 5;
    final_score = avg_score * PERCENT;
    cout << "Average score is " << avg_score << endl;
    cout << "Final score is " << final_score << endl;
    return 0;
}
/*
Enter five test scores
20
65
80
95
40
Average score is 60
Final score is 9
 */