#include <stdio.h>

struct item{
    char code[5];
    char name[25];
    int quantity;
    float rate;
    int cost;
}s[100];

int main(){
    int i;
    float vat, s_c, t_c=0.0;
    FILE *fp;
    fp = fopen("RECORD.txt", "w");
    fprintf(fp, "Item Code\tDescription\tRate\tQuantity\tCost\n");
    for(i=0; i<2; i++){
        printf("Code Description Rate Quantity\n");
        scanf("%s %s %f %d", s[i].code, s[i].name, &s[i].rate, &s[i].quantity);
        s[i].cost = s[i].rate * (float)s[i].quantity;
        t_c += s[i].cost;
        // vat = 0.15 * s[i].cost;
        // s_c = 0.05 * s[i].cost;
        fflush(stdin);
        fprintf(fp, "%s\t%s\t%.2f\t%d\t%.2f\n",  s[i].code, s[i].name, s[i].rate, s[i].quantity, t_c);
    }
    vat = 0.15 * t_c;
    s_c = 0.05 * t_c;
    t_c += (vat + s_c);
    fprintf(fp, "VAT 15%\t\t\t%.2f\n", t_c);
    fprintf(fp, "Service Charge 5%\t\t\t%.2f\n", s_c);
    fclose(fp);
    return 0;
}
