#include<iostream>
using namespace std;

int main()
{
        int n = 7;
        int arr[n] = {2, 3, 5, 9, 14, 16, 18};
        int target = 4;

        int start = 0;
        int end = n - 1;
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            if(target < arr[mid])
            {
                end = mid - 1;
            }
            else if(target > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                return mid;
            }
        }
        return end;
}

