#include "header.h"


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s[3] = { "hello" ,"world","JJH" };
    cout << getArraySum(s, 3) << '\n';
    int arr[3] = { 1,2,3 };
    cout << getArraySum(arr, 3);

    return 0;
}