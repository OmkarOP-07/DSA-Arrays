#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 1, 1, 1, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int cnt = 1;
    int i = 0;
    int j = 0;
    int sum = 0;

    while (j < n)
    {
        sum += arr[j];
        while (sum > k && i <= j)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == k)
        {
            cnt++;
        }
        j++;
    }
    cout << cnt;
    return 0;
}