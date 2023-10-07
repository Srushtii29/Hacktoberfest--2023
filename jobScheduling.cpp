// Greedy Search algorithm for Job Scheduling Problem

#include <bits/stdc++.h>
using namespace std;

//structure for holding values
struct Job
{
    int jobNum;
    int deadline;
    int profit;
};

bool compare(Job a, Job b);
void jobSequencing(Job input[], int num);

int main()
{
    int num;
    cout<<"Enter number of jobs:";
    cin >> num;
    Job input[num];
    // inputing the values
    for (int i = 0; i < num; i++)
    {
        cout<<"Enter Job Id(in number):";
        cin >> input[i].jobNum;
        cout<<"Enter Job Deadline:";
        cin >> input[i].deadline;
        cout<<"Enter Job Profit:";
        cin >> input[i].profit;
    }

    jobSequencing(input, num);
}
