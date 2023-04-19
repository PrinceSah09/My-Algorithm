// Quick Sort Algorithm

int partition(int *a, int s, int e)
{
    int pivot = a[s];

    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (a[i] <= pivot)
        {
            count++;
        }
    }
    int pivotindex = s + count;

    swap(a[pivotindex], a[s]);

    int i = s, j = e;
    while (i < pivotindex && j > pivotindex)
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }

        if (i < pivotindex && j > pivotindex)
        {
            swap(a[i++], a[j--]);
        }
    }
    return pivotindex;
}


int main()
{
    int a[5] = {4, 5, 7, 2, 3};
    int size = 5;
    quicksort(a, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
