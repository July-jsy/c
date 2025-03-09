#include <iostream>
using namespace std;

// 快速排序的分区函数
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // 选择最后一个元素作为基准
    int i = low - 1;       // i 是较小元素的索引

    for (int j = low; j < high; j++)
    {
        // 如果当前元素大于或等于基准元素
        if (arr[j] >= pivot)
        {
            i++;                  // 增加较小元素的索引
            swap(arr[i], arr[j]); // 交换 arr[i] 和 arr[j]
        }
    }
    swap(arr[i + 1], arr[high]); // 将基准元素放到正确的位置
    return i + 1;                // 返回基准元素的索引
}

// 快速排序的递归函数
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // 找到分区点
        int pi = partition(arr, low, high);

        // 递归排序左半部分
        quickSort(arr, low, pi - 1);

        // 递归排序右半部分
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[10] = {5, 3, 8, 1, 9, 2, 7, 4, 6, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    // 调用快速排序
    quickSort(arr, 0, n - 1);

    // 输出排序后的数组
    cout << "Sorted array (descending order): ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}