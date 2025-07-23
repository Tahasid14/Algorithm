
#include <stdio.h>

int main() {
    int n;
    float capacity;
    printf("Enter number of items: ");
    scanf("%d", &n);

    float value[100], weight[100], ratio[100];

    printf("Enter values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &value[i]);
    }

    printf("Enter weights:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &weight[i]);
    }

    printf("Enter knapsack capacity: ");
    scanf("%f", &capacity);

    for (int i = 0; i < n; i++) {
        ratio[i] = value[i] / weight[i];
    }


    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {

                float temp = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = temp;


                temp = value[i];
                value[i] = value[j];
                value[j] = temp;


                temp = weight[i];
                weight[i] = weight[j];
                weight[j] = temp;
            }
        }
    }

    float total = 0.0;
    float r;
    for (int i = 0; i < n; i++) {

        if (capacity >= weight[i]) {
            total += value[i];
            capacity -= weight[i];
        }

         else {

         r=(capacity / weight[i]);

          total += value[i] * r;
          capacity=0;
            break;
        }
    }

    printf("Maximum total value = %.2f\n", total);

    return 0;
}
