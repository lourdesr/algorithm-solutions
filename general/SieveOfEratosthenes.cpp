#include <iostream>
using namespace std;
int main()
{
  int n = 50;
  int arr[n + 1];
  memset(arr, 0, sizeof(arr));

  for (int i = 2; i * i <= n; i++)
  {
    if (arr[i] == 0)
    {
      for (int j = 2; i * j <= n; j++)
      {
        int index = i * j;
        arr[index] = 1;
      }
    }
  }

  for (int i = 2; i <= n; i++)
  {
    if (arr[i] == 0)
    {
      cout << i << "-";
    }
  }
  return 0;
}