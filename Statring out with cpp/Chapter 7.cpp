#include <bits/stdc++.h>
using namespace std;

int checkLo(int arr[3][3]);
int main()
{
// int numOfMonkeys = 3;
// int daysOfWeek = 5;
// double info[numOfMonkeys][daysOfWeek];
// double poundsOfFood;
// int total=0;
// double average;
// int rindex,cindex;
// for (rindex = 0; rindex < numOfMonkeys; ++rindex)
//     {
//         for(cindex = 0; cindex < daysOfWeek; ++cindex)
//             {
//                 cout << "The pounds eaten by monkey #" << rindex+1 << " in day "<< cindex+1 << " is: ";
//                 cin >> info [rindex][cindex];
//                 total += info [rindex][cindex];
//             }
//     }
// average = static_cast<double>(total)/daysOfWeek;
// cout << setw(5) << showpoint << fixed << setprecision(2);
// cout << "The Average amount of food eaten per day by all monkeys is: " << average << endl;

// double minTotal = 0;
// vector <double> data;
// for (rindex = 0; rindex < numOfMonkeys; ++rindex)
//     {
//         minTotal = 0;
//         for(cindex = 0; cindex < daysOfWeek; ++cindex)
//             {
//                 minTotal += info [rindex][cindex];
//             }
//         data.push_back(minTotal);
//     }
// sort(data.begin(),data.end());
// cout << "The min amount of food eaten by any one monkey in a week is: " << data[0] << endl;
// cout << "The max amount of food eaten by any one monkey in a week is: " << data[2] << endl;
int loShu[3][3];
for (int r = 0; r < 3; ++r)
    {
        for(int c = 0 ;c < 3;++c)
            {
                cin >> loShu[r][c];
            }
    }
if(checkLo(loShu))
    cout<<"oonga boonga";
else
    cout<<"Try again";
}
int checkLo(int arr[3][3])
{
    int totalr = 0;
    int r,c;
    int wanted=0;
    for ( r = 0; r<3;r++)
    {
        totalr=0;
        for(int c = 0; c<3; c++)
        {
            totalr+=arr[r][c];
        }
        if(wanted == 0)
            wanted = totalr;
        else if (totalr!=wanted)
            return 0;
        else 
            continue;
    }
    int totalc=0;
    for ( c = 0; c<3; c++)
    {
        totalc=0;
        for(r = 0; r<3; r++)
            {
                totalc+=arr[r][c];
            }
        if(totalc!=wanted)
            return 0;
        else 
            continue;
    }
    if((arr[0][0]+arr[1][1]+arr[2][2]==wanted) && (arr[0][2]+arr[1][1]+arr[2][0]==wanted))
        return 1;
    else
        return 0;
}
