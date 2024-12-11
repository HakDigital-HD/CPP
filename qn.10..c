#include <stdio.h>

int main() {
    float rate, hours, gross_salary;
    int service_record;

    printf("Enter the rate per hour: ");
    scanf("%f", &rate);

    printf("Enter the number of hours worked: ");
    scanf("%f", &hours);

    printf("Enter the service record (in years): ");
    scanf("%d", &service_record);

    gross_salary = rate * hours;

    if (service_record > 10) {
        gross_salary += gross_salary * 0.15; // Add 15% allowance
    }

    printf("Gross salary: %.2f\n", gross_salary);

    return 0;
}