// Tinkering with arrays
#include <iostream>

using namespace std;

// Forward declaration of functions
double average(double* vector, int size, int avg);
double addUp(double* vector, int size, int sum);
double maximum(double* vector, int size, int max);
double minimum(double* vector, int size, int min);
double* update(double* vector, double value, int pos);
void show(double* vector, int size);


int main()
{
    // Declaration and inicialization
    const int size = 10;
    double vector[size] = { 10,20,30,40,50,60,70,80,90,100 };
    double avg = 0;
    double sum = 0;
    double max = 0;
    double min = 0;
    double value = 55;
    int pos = 4;

    avg = average(vector, size, avg);
    cout << "Average: " << avg << endl;

    sum = addUp(vector, size, sum);
    cout << "Sum: " << sum << endl;

    max = maximum(vector, size, max);
    cout << "Max: " << max << endl;

    min = minimum(vector, size, min);
    cout << "Min: " << min << endl;

    double* vector2 = update(vector, value, pos);

    show(vector2, size);

    return 0;
}

double average(double* vector, int size, int avg) {
    for (int i = 0; i < size; i++) {
        avg += vector[i];
    }
    avg = avg / size;

    return avg;
}

double addUp(double* vector, int size, int sum) {
    for (int i = 0; i < size; i++) {
        sum += vector[i];
    }
    return sum;
}

double maximum(double* vector, int size, int max) {
    for (int i = 0; i < size; i++) {
        if (vector[i] > max)
            max = vector[i];
    }
    return max;
}

double minimum(double* vector, int size, int min) {
    min = vector[0];
    for (int i = 1; i < size; i++) {
        if (vector[i] < min)
            min = vector[i];
    }
    return min;
}

double* update(double* vector, double value, int pos) {
    vector[pos] = value;

    return vector;
}

void show(double* vector, int size) {
    for (int i = 0; i < size; i++)
        cout << vector[i] << ", ";
}
