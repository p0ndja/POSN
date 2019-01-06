int main()
{
    int size,mode;
    printf("\n Input size: ");
    scanf("%d", &size);
    int x[size]; //2 bytes per channel
    int count = 0;

    printf("\n Input number: \n ");

    int max = 0;
    for (int i = 0; i < size; i++) {
        scanf("%d", &x[i]);
        if (x[i] > max)
            max = x[i];
        printf(" ");
    }

    printf("\n The maximum number is '%d' from: ", max);
    int temp;
    for (int o = 0; o < size; o++) {
    for (int i = 0; i < size; i++) {
        if (x[i] > x[i+1]) {
            temp = x[i];
            x[i] = x[i+1];
            x[i+1] = temp;
        }
    }
    }
    for (int i = 0; i < size; i++)
            printf("%d ", x[i]);
}
