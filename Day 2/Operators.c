 /* Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */

void solve(float meal_cost, int tip_percent, int tax_percent) {
    float total, tip, tax;
    tip = meal_cost*tip_percent/100;
    tax = meal_cost*tax_percent/100;
    total = meal_cost+tip+tax;
    printf("%.0f", total);

}
