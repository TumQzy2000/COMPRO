#include <stdio.h>

int main() {
    char model;
    int down_pct, months;
    float price, down_amt, remain, interest_rate, annual_interest, total_interest, monthly_payment;

    printf("Enter car model (A/B): ");
    scanf(" %c", &model);
    
    if (model == 'A' || model == 'a') price = 1690000;
    else price = 1710000;

    printf("Enter down payment (15%%/20%%): ");
    scanf("%d", &down_pct);
    printf("Enter payment plan (48/60): ");
    scanf("%d", &months);

    // Set interest rate
    if (down_pct == 15) {
        if (months == 48) interest_rate = 2.65;
        else interest_rate = 2.4; // assume 60
    } else { // 20%
        if (months == 48) interest_rate = 2.05;
        else interest_rate = 2.2;
    }

    down_amt = price * (down_pct / 100.0);
    remain = price - down_amt;
    annual_interest = remain * (interest_rate / 100.0);
    total_interest = annual_interest * (months / 12);
    monthly_payment = (remain + total_interest) / months;

    printf("Summary\n");
    printf("Model %c price = %.0f Baht\n", model, price);
    printf("Down payment = %.0f Baht\n", down_amt);
    printf("Remaining balance = %.0f Baht\n", remain);
    printf("Annual interest rate = %.2f%%\n", interest_rate);
    printf("Annual Interest = %.0f Baht\n", annual_interest);
    printf("Total Interest = %.0f Baht\n", total_interest);
    printf("Monthly payment = %.0f Baht\n", monthly_payment);

    return 0;
}
