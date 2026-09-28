// change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <stdio.h>

int main() {
    int day, month, year;

    scanf("%d/%d/%d", &day, &month, &year);

    if (month == 4)
        printf("%02d-Apr-%d", day, year);

    return 0;
}

