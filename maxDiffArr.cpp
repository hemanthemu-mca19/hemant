#include <bits/stdc++.h>
  using namespace std;
  
  void findMax(int arr[], int n)
  {
      int a1[n], a2[n];
      int max1, max2, min1, min2;
      max1 = max2 = INT_MIN;
      min1 = min2 = INT_MAX;
      for (int i = 0; i < n; i++)
      {
        a1[i] = arr[i] - i;
        max1 = max(a1[i], max1);
        min1 = min(a1[i], min1);

        a2[i] = arr[i] + i;
        max2 = max(a2[i], max2);
        min2 = min(a2[i], min2);
      }
      cout << max(max1 - min1, max2 - min2) << endl;
  }
  int main()
  {
    int t;
    scanf("%d", &t);
    //printf("%d", t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        // O(n) AOOROACH
        findMax(arr,n);


        // O(n2) APPROACH
        // for (int i = 0; i < n; i++)
        //     printf("%d", arr[i]);
        // int maxDiff = -1;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = i; j < n; j++)
        //     {
        //         int arrDiff = abs(arr[i]-arr[j]);
        //         int posDiff = abs(i-j);
        //         int diff = arrDiff + posDiff;
        //         if(diff > maxDiff)
        //             maxDiff = diff;

        //     }
        // }
        // printf("%d\n", maxDiff);
       // printf("\n");
    }
    return 0;
  }