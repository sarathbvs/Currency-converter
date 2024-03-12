#include <stdio.h>
float amount;
float Rupee, US_Dollar, British_Pound, Euro, Japanese_Yen, Australian_Dollar, Canadian_Dollar, South_African_rand, South_Korean_Won, Russian_Ruble, Bangladeshi_Taka, Renminbi, Singapore_Dollar, Thai_Baht, Turkish_Lira, Swiss_Franc, Mexican_Peso, New_Zealand_Dollar, Argentinia_Peso, UAE_Dirham;
int choice = 0;
int ch = 0;
int i;
void convert();
void input();
void wrong();
int main()
{
    printf("\t\t\tWelcome to Currency Converter\n");
    convert();
}
void input()
{
    printf("\nFollowing are the Choices:");
    printf("\nEnter 1: Rupee");
    printf("\nEnter 2: US_Dollar");
    printf("\nEnter 3: British_Pound");
    printf("\nEnter 4: Euro");
    printf("\nEnter 5: Japanese_Yen");
    printf("\nEnter 6: Australian_Dollar");
    printf("\nEnter 7: Canadian_Dollar");
    printf("\nEnter 8: South_African_rand");
    printf("\nEnter 9: South_Korean_Won");
    printf("\nEnter 10: Russian_Ruble");
    printf("\nEnter 11: Bangladeshi_Taka");
    printf("\nEnter 12: Renminbi");
    printf("\nEnter 13: Singapore_Dollar");
    printf("\nEnter 14: Thai_Baht");
    printf("\nEnter 15: Turkish_Lira");
    printf("\nEnter 16: Swiss_Franc");
    printf("\nEnter 17: Mexican_Peso");
    printf("\nEnter 18: New_Zealand_Dollar");
    printf("\nEnter 19: Argentinia_Peso");
    printf("\nEnter 20: UAE_Dirham");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
}
void convert()
{
    input();

    printf("Enter the amount you want to convert\n");
    scanf("%f", &amount);


    switch (choice)
    {
    case 1: // Rupee Conversion
        US_Dollar = amount / 75.29;
        printf("\n%.2f Rupee =  %.2f US_Dollar", amount, US_Dollar);

        British_Pound = amount / 99.62;
        printf("\n%.2f Rupee =  %.2f British_Pound", amount, British_Pound);

        Euro = amount / 84.97;
        printf("\n%.2f Rupee =  %.2f Euro", amount, Euro);

        Japanese_Yen = amount / 0.67;
        printf("\n%.2f Rupee = %.2f Japanese_Yen", amount, Japanese_Yen);

        Australian_Dollar = amount / 52.84;
        printf("\n%.2f Rupee = %.2f Australian_Dollar", amount, Australian_Dollar);

        Canadian_Dollar = amount / 58.8;
        printf("\n%.2f Rupee = %.2f Canadian_Dollar", amount, Canadian_Dollar);

        South_African_rand = amount / 4.7;
        printf("\n%.2f Rupee = %.2f South_African_rand", amount, South_African_rand);

        South_Korean_Won = amount / 15.88;
        printf("\n%.2f Rupee = %.2f South_Korean_Won", amount, South_Korean_Won);

        Russian_Ruble = amount / 0.99;
        printf("\n%.2f Rupee = %.2f Russian_Ruble", amount, Russian_Ruble);

        Bangladeshi_Taka = amount / 1.15;
        printf("\n%.2f Rupee = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Renminbi = amount / 0.085;
        printf("\n%.2f Rupee = %.2f Renminbi", amount, Renminbi);

        Singapore_Dollar = amount / 0.018;
        printf("\n%.2f Rupee = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Thai_Baht = amount / 0.45;
        printf("\n%.2f Rupee = %.2f Thai_Baht", amount, Thai_Baht);

        Turkish_Lira = amount / 0.17;
        printf("\n%.2f Rupee = %.2f Turkish_Lira", amount, Turkish_Lira);

        Swiss_Franc = amount / 0.012;
        printf("\n%.2f Rupee = %.2f Swiss_Franc", amount, Swiss_Franc);

        Mexican_Peso = amount / 0.28;
        printf("\n%.2f Rupee = %.2f Mexican_Peso", amount, Mexican_Peso);

        New_Zealand_Dollar = amount / 0.02;
        printf("\n%.2f Rupee = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 1.37;
        printf("\n%.2f Rupee = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        UAE_Dirham = amount / 0.049;
        printf("\n%.2f Rupee = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 2: // US_Dollar Conversion
        Rupee = amount * 75.29;
        printf("\n%.2f US_Dollar =  %.2f Rupee", amount, Rupee);

        British_Pound = amount / 1.32;
        printf("\n%.2f US_Dollar =  %.2f British_Pound", amount, British_Pound);

        Euro = amount / 1.13;
        printf("\n%.2f US_Dollar =  %.2f Euro", amount, Euro);

        Japanese_Yen = amount / 0.009;
        printf("\n%.2f US_Dollar = %.2f Japanese_Yen", amount, Japanese_Yen);

        Australian_Dollar = amount / 0.7;
        printf("\n%.2f US_Dollar = %.2f Australian_Dollar", amount, Australian_Dollar);

        Canadian_Dollar = amount / 0.78;
        printf("\n%.2f US_Dollar = %.2f Canadian_Dollar", amount, Canadian_Dollar);

        South_African_rand = amount / 0.062;
        printf("\n%.2f US_Dollar = %.2f South_African_rand", amount, South_African_rand);

        South_Korean_Won = amount / 1186.6;
        printf("\n%.2f US_Dollar = %.2f South_Korean_Won", amount, South_Korean_Won);

        Russian_Ruble = amount / 73.75;
        printf("\n%.2f US_Dollar = %.2f Russian_Ruble", amount, Russian_Ruble);

        Bangladeshi_Taka = amount / 0.012;
        printf("\n%.2f US_Dollar = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Renminbi = amount / 6.37;
        printf("\n%.2f US_Dollar = %.2f Renminbi", amount, Renminbi);

        Singapore_Dollar = amount / 1.36;
        printf("\n%.2f US_Dollar = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Thai_Baht = amount / 33.52;
        printf("\n%.2f US_Dollar = %.2f Thai_Baht", amount, Thai_Baht);

        Turkish_Lira = amount / 12.39;
        printf("\n%.2f US_Dollar = %.2f Turkish_Lira", amount, Turkish_Lira);

        Swiss_Franc = amount / 0.92;
        printf("\n%.2f US_Dollar = %.2f Swiss_Franc", amount, Swiss_Franc);

        Mexican_Peso = amount / 20.65;
        printf("\n%.2f US_Dollar = %.2f Mexican_Peso", amount, Mexican_Peso);

        New_Zealand_Dollar = amount / 1.47;
        printf("\n%.2f US_Dollar = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 102.6;
        printf("\n%.2f US_Dollar = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        UAE_Dirham = amount / 3.67;
        printf("\n%.2f US_Dollar = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 3: // British_Pound Conversion
        Rupee = amount / 0.01;
        printf("\n%.2f British_Pound =  %.2f Rupee", amount, Rupee);

        US_Dollar = amount / 0.76;
        printf("\n%.2f British_Pound =  %.2f US_Dollar", amount, US_Dollar);

        Euro = amount / 0.85;
        printf("\n%.2f British_Pound =  %.2f Euro", amount, Euro);

        Japanese_Yen = amount / 0.0067;
        printf("\n%.2f British_Pound = %.2f Japanese_Yen", amount, Japanese_Yen);

        Australian_Dollar = amount / 0.53;
        printf("\n%.2f British_Pound = %.2f Australian_Dollar", amount, Australian_Dollar);

        Canadian_Dollar = amount / 0.59;
        printf("\n%.2f British_Pound = %.2f Canadian_Dollar", amount, Canadian_Dollar);

        South_African_rand = amount / 0.047;
        printf("\n%.2f British_Pound = %.2f South_African_rand", amount, South_African_rand);

        South_Korean_Won = amount / 1592.7;
        printf("\n%.2f British_Pound = %.2f South_Korean_Won", amount, South_Korean_Won);

        Russian_Ruble = amount / 99.0;
        printf("\n%.2f British_Pound = %.2f Russian_Ruble", amount, Russian_Ruble);

        Bangladeshi_Taka = amount / 115.48;
        printf("\n%.2f British_Pound = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Renminbi = amount / 8.55;
        printf("\n%.2f British_Pound = %.2f Renminbi", amount, Renminbi);

        Singapore_Dollar = amount / 1.82;
        printf("\n%.2f British_Pound = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Thai_Baht = amount / 44.99;
        printf("\n%.2f British_Pound = %.2f Thai_Baht", amount, Thai_Baht);

        Turkish_Lira = amount / 16.63;
        printf("\n%.2f British_Pound = %.2f Turkish_Lira", amount, Turkish_Lira);

        Swiss_Franc = amount / 1.23;
        printf("\n%.2f British_Pound = %.2f Swiss_Franc", amount, Swiss_Franc);

        Mexican_Peso = amount / 27.70;
        printf("\n%.2f British_Pound = %.2f Mexican_Peso", amount, Mexican_Peso);

        New_Zealand_Dollar = amount / 1.97;
        printf("\n%.2f British_Pound = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 137.74;
        printf("\n%.2f British_Pound = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        UAE_Dirham = amount / 4.93;
        printf("\n%.2f British_Pound = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 4: // Euro Conversion
        Rupee = amount / 0.012;
        printf("\n%.2f Euro =  %.2f Rupee", amount, Rupee);

        US_Dollar = amount / 0.89;
        printf("\n%.2f Euro =  %.2f US_Dollar", amount, US_Dollar);

        British_Pound = amount / 1.17;
        printf("\n%.2f Euro =  %.2f British_Pound", amount, British_Pound);

        Japanese_Yen = amount / 0.0078;
        printf("\n%.2f Euro = %.2f Japanese_Yen", amount, Japanese_Yen);

        Australian_Dollar = amount / 0.62;
        printf("\n%.2f Euro = %.2f Australian_Dollar", amount, Australian_Dollar);

        Canadian_Dollar = amount / 0.69;
        printf("\n%.2f Euro = %.2f Canadian_Dollar", amount, Canadian_Dollar);

        South_African_rand = amount / 0.055;
        printf("\n%.2f Euro = %.2f South_African_rand", amount, South_African_rand);

        South_Korean_Won = amount / 1340.73;
        printf("\n%.2f Euro = %.2f South_Korean_Won", amount, South_Korean_Won);

        Russian_Ruble = amount / 83.32;
        printf("\n%.2f Euro = %.2f Russian_Ruble", amount, Russian_Ruble);

        Bangladeshi_Taka = amount / 97.22;
        printf("\n%.2f Euro = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Renminbi = amount / 7.20;
        printf("\n%.2f Euro = %.2f Renminbi", amount, Renminbi);

        Singapore_Dollar = amount / 1.53;
        printf("\n%.2f Euro = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Thai_Baht = amount / 37.88;
        printf("\n%.2f Euro = %.2f Thai_Baht", amount, Thai_Baht);

        Turkish_Lira = amount / 13.96;
        printf("\n%.2f Euro = %.2f Turkish_Lira", amount, Turkish_Lira);

        Swiss_Franc = amount / 1.04;
        printf("\n%.2f Euro = %.2f Swiss_Franc", amount, Swiss_Franc);

        Mexican_Peso = amount / 23.31;
        printf("\n%.2f Euro = %.2f Mexican_Peso", amount, Mexican_Peso);

        New_Zealand_Dollar = amount / 1.56;
        printf("\n%.2f Euro = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 115.93;
        printf("\n%.2f Euro = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        UAE_Dirham = amount / 4.15;
        printf("\n%.2f Euro = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 5: // Japanese_Yen Conversion
        Rupee = amount / 1.5;
        printf("\n%.2f Japanese_Yen = %.2f Rupee", amount, Rupee);

        US_Dollar = amount / 113.17;
        printf("\n%.2f Japanese_Yen = %.2f US_Dollar", amount, US_Dollar);

        British_Pound = amount / 150.26;
        printf("\n%.2f Japanese_Yen = %.2f British_Pound", amount, British_Pound);

        Euro = amount / 127.9;
        printf("\n%.2f Japanese_Yen = %.2f Euro", amount, Euro);

        Australian_Dollar = amount / 79.63;
        printf("\n%.2f Japanese_Yen = %.2f Australian_Dollar", amount, Australian_Dollar);

        Canadian_Dollar = amount / 88.49;
        printf("\n%.2f Japanese_Yen = %.2f Canadian_Dollar", amount, Canadian_Dollar);

        South_African_rand = amount / 7.08;
        printf("\n%.2f Japanese_Yen = %.2f South_African_rand", amount, South_African_rand);

        South_Korean_Won = amount / 10.32;
        printf("\n%.2f Japanese_Yen = %.2f South_Korean_Won", amount, South_Korean_Won);

        Russian_Ruble = amount / 0.64;
        printf("\n%.2f Japanese_Yen = %.2f Russian_Ruble", amount, Russian_Ruble);

        Bangladeshi_Taka = amount / 0.75;
        printf("\n%.2f Japanese_Yen = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Renminbi = amount / 0.055;
        printf("\n%.2f Japanese_Yen = %.2f Renminbi", amount, Renminbi);

        Singapore_Dollar = amount / 0.012;
        printf("\n%.2f Japanese_Yen = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Thai_Baht = amount / 0.29;
        printf("\n%.2f Japanese_Yen = %.2f Thai_Baht", amount, Thai_Baht);

        Turkish_Lira = amount / 0.11;
        printf("\n%.2f Japanese_Yen = %.2f Turkish_Lira", amount, Turkish_Lira);

        Swiss_Franc = amount / 0.0008;
        printf("\n%.2f Japanese_Yen = %.2f Swiss_Franc", amount, Swiss_Franc);

        Mexican_Peso = amount / 0.18;
        printf("\n%.2f Japanese_Yen = %.2f Mexican_Peso", amount, Mexican_Peso);

        New_Zealand_Dollar = amount / 0.013;
        printf("\n%.2f Japanese_Yen = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 0.89;
        printf("\n%.2f Japanese_Yen = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        UAE_Dirham = amount / 0.032;
        printf("\n%.2f Japanese_Yen = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 6: // Australian_Dollar Conversion
        Rupee = amount / 0.019;
        printf("\n%.2f Australian_Dollar = %.2f Rupee", amount, Rupee);

        US_Dollar = amount / 1.42;
        printf("\n%.2f Australian_Dollar = %.2f US_Dollar", amount, Rupee);

        British_Pound = amount / 1.89;
        printf("\n%.2f Australian_Dollar = %.2f British_Pound", amount, British_Pound);

        Euro = amount / 1.6;
        printf("\n%.2f Australian_Dollar = %.2f Euro", amount, Euro);

        Japanese_Yen = amount / 0.013;
        printf("\n%.2f Australian_Dollar = %.2f Japanese_Yen", amount, Japanese_Yen);

        Canadian_Dollar = amount / 1.11;
        printf("\n%.2f Australian_Dollar = %.2f Canadian_Dollar", amount, Canadian_Dollar);

        South_African_rand = amount / 0.089;
        printf("\n%.2f Australian_Dollar = %.2f South_African_rand", amount, South_African_rand);

        South_Korean_Won = amount / 636;
        printf("\n%.2f Australian_Dollar = %.2f South_Korean_Won", amount, South_Korean_Won);

        Russian_Ruble = amount / 55;
        printf("\n%.2f Australian_Dollar = %.2f Russian_Ruble", amount, Russian_Ruble);

        Bangladeshi_Taka = amount / 56;
        printf("\n%.2f Australian_Dollar = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Renminbi = amount / 36;
        printf("\n%.2f Australian_Dollar = %.2f Renminbi", amount, Renminbi);

        Singapore_Dollar = amount / 563;
        printf("\n%.2f Australian_Dollar = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Thai_Baht = amount / 73;
        printf("\n%.2f Australian_Dollar = %.2f Thai_Baht", amount, Thai_Baht);

        Turkish_Lira = amount / 55;
        printf("\n%.2f Australian_Dollar = %.2f Turkish_Lira", amount, Turkish_Lira);

        Swiss_Franc = amount / 0.66;
        printf("\n%.2f Australian_Dollar = %.2f Swiss_Franc", amount, Swiss_Franc);

        Mexican_Peso = amount / 0.78;
        printf("\n%.2f Australian_Dollar = %.2f Mexican_Peso", amount, Mexican_Peso);

        New_Zealand_Dollar = amount / 0.46;
        printf("\n%.2f Australian_Dollar = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 0.86;
        printf("\n%.2f Australian_Dollar = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        UAE_Dirham = amount / 45.6;
        printf("\n%.2f Australian_Dollar = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 7: // Canadian_Dollar Conversion
        Rupee = amount / 0.017;
        printf("\n%.2f Canadian_Dollar = %.2f Rupee", amount, Rupee);

        US_Dollar = amount / 0.78;
        printf("\n%.2f Canadian_Dollar = %.2f US_Dollar", amount, US_Dollar);

        British_Pound = amount / 1.7;
        printf("\n%.2f Canadian_Dollar = %.2f British_Pound", amount, British_Pound);

        Euro = amount / 1.44;
        printf("\n%.2f Canadian_Dollar = %.2f Euro", amount, Euro);

        Japanese_Yen = amount / 0.011;
        printf("\n%.2f Canadian_Dollar = %.2f Japanese_Yen", amount, Japanese_Yen);

        Australian_Dollar = amount / 0.9;
        printf("\n%.2f Canadian_Dollar = %.2f Australian_Dollar", amount, Australian_Dollar);

        South_African_rand = amount / 0.08;
        printf("\n%.2f Canadian_Dollar = %.2f South_African_rand", amount, South_African_rand);

        South_Korean_Won = amount / 2.33;
        printf("\n%.2f Canadian_Dollar = %.2f South_Korean_Won", amount, South_Korean_Won);

        Russian_Ruble = amount / 3.5;
        printf("\n%.2f Canadian_Dollar = %.2f Russian_Ruble", amount, Russian_Ruble);

        Bangladeshi_Taka = amount / 1.44;
        printf("\n%.2f Canadian_Dollar = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Renminbi = amount / 44;
        printf("\n%.2f Canadian_Dollar = %.2f Renminbi", amount, Renminbi);

        Singapore_Dollar = amount / 56;
        printf("\n%.2f Canadian_Dollar = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Thai_Baht = amount / 79;
        printf("\n%.2f Canadian_Dollar = %.2f Thai_Baht", amount, Thai_Baht);

        Turkish_Lira = amount / 54;
        printf("\n%.2f Canadian_Dollar = %.2f Turkish_Lira", amount, Turkish_Lira);

        Swiss_Franc = amount / 45.66;
        printf("\n%.2f Canadian_Dollar = %.2f Swiss_Franc", amount, Swiss_Franc);

        Mexican_Peso = amount / 54;
        printf("\n%.2f Canadian_Dollar = %.2f Mexican_Peso", amount, Mexican_Peso);

        New_Zealand_Dollar = amount / 77;
        printf("\n%.2f Canadian_Dollar = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 44;
        printf("\n%.2f Canadian_Dollar = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        UAE_Dirham = amount / 45;
        printf("\n%.2f Canadian_Dollar = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 8: // South_African_rand Conversion
        Rupee = amount / 0.21;
        printf("\n%.2f South_African_rand = %.2f Rupee", amount, South_African_rand);

        US_Dollar = amount / 15.9;
        printf("\n%.2f South_African_rand = %.2f US_Dollar", amount, US_Dollar);

        British_Pound = amount / 21.2;
        printf("\n%.2f South_African_rand = %.2f British_Pound", amount, British_Pound);

        Euro = amount / 18.05;
        printf("\n%.2f South_African_rand = %.2f Euro", amount, Euro);

        Japanese_Yen = amount / 0.14;
        printf("\n%.2f South_African_rand = %.2f Japanese_Yen", amount, Japanese_Yen);

        Australian_Dollar = amount / 11.24;
        printf("\n%.2f South_African_rand = %.2f Australian_Dollar", amount, Australian_Dollar);

        Canadian_Dollar = amount / 12.5;
        printf("\n%.2f South_African_rand = %.2f Canadian_Dollar", amount, Canadian_Dollar);

        South_Korean_Won = amount / 34.5;
        printf("\n%.2f South_African_rand = %.2f South_Korean_Won", amount, South_Korean_Won);

        Russian_Ruble = amount / 14.5;
        printf("\n%.2f South_African_rand = %.2f Russian_Ruble", amount, Russian_Ruble);

        Bangladeshi_Taka = amount / 3.3;
        printf("\n%.2f South_African_rand = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Renminbi = amount / 344;
        printf("\n%.2f South_African_rand = %.2f Renminbi", amount, Renminbi);

        Singapore_Dollar = amount / 7.89;
        printf("\n%.2f South_African_rand = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Thai_Baht = amount / 9.86;
        printf("\n%.2f South_African_rand = %.2f Thai_Baht", amount, Thai_Baht);

        Turkish_Lira = amount / 49.7;
        printf("\n%.2f South_African_rand = %.2f Turkish_Lira", amount, Turkish_Lira);

        Swiss_Franc = amount / 56.7;
        printf("\n%.2f South_African_rand = %.2f Swiss_Franc", amount, Swiss_Franc);

        Mexican_Peso = amount / 5.7;
        printf("\n%.2f South_African_rand = %.2f Mexican_Peso", amount, Mexican_Peso);

        New_Zealand_Dollar = amount / 7.888;
        printf("\n%.2f South_African_rand = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 88.5;
        printf("\n%.2f South_African_rand = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        UAE_Dirham = amount / 77.8;
        printf("\n%.2f South_African_rand = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 9: // South_Korean_Won
        Rupee = amount / 6.7;
        printf("\n%.2f South_Korean_Won = %.2f Rupee", amount, South_African_rand);

        US_Dollar = amount / 557;
        printf("\n%.2f South_Korean_Won = %.2f US_Dollar", amount, US_Dollar);

        British_Pound = amount / 2.34;
        printf("\n%.2f South_Korean_Won = %.2f British_Pound", amount, British_Pound);

        Euro = amount / 4.9;
        printf("\n%.2f South_Korean_Won = %.2f Euro", amount, Euro);

        Japanese_Yen = amount / 777;
        printf("\n%.2f South_Korean_Won = %.2f Japanese_Yen", amount, Japanese_Yen);

        Australian_Dollar = amount / 57;
        printf("\n%.2f South_Korean_Won = %.2f Australian_Dollar", amount, Australian_Dollar);

        Canadian_Dollar = amount / 88;
        printf("\n%.2f South_Korean_Won = %.2f Canadian_Dollar", amount, Canadian_Dollar);

        South_African_rand = amount / 9375;
        printf("\n%.2f South_Korean_Won = %.2f South_African_rand", amount, South_African_rand);

        Russian_Ruble = amount / 564;
        printf("\n%.2f South_Korean_Won = %.2f Russian_Ruble", amount, Russian_Ruble);

        Bangladeshi_Taka = amount / 55.7;
        printf("\n%.2f South_Korean_Won = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Renminbi = amount / 37.7;
        printf("\n%.2f South_Korean_Won = %.2f Renminbi", amount, Renminbi);

        Singapore_Dollar = amount / 6.7;
        printf("\n%.2f South_Korean_Won = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Thai_Baht = amount / 78.6;
        printf("\n%.2f South_Korean_Won = %.2f Thai_Baht", amount, Thai_Baht);

        Turkish_Lira = amount / 209;
        printf("\n%.2f South_Korean_Won = %.2f Turkish_Lira", amount, Turkish_Lira);

        Swiss_Franc = amount / 56;
        printf("\n%.2f South_Korean_Won = %.2f Swiss_Franc", amount, Swiss_Franc);

        Mexican_Peso = amount / 475;
        printf("\n%.2f South_Korean_Won = %.2f Mexican_Peso", amount, Mexican_Peso);

        New_Zealand_Dollar = amount / 494;
        printf("\n%.2f South_Korean_Won = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 90.8;
        printf("\n%.2f South_Korean_Won = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        UAE_Dirham = amount / 77.6;
        printf("\n%.2f South_Korean_Won = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 10: // Russian_Ruble
        Rupee = amount / 86;
        printf("\n%.2f Russian_Ruble = %.2f Rupee", amount, South_African_rand);

        US_Dollar = amount / 847;
        printf("\n%.2f Russian_Ruble = %.2f US_Dollar", amount, US_Dollar);

        British_Pound = amount / 38;
        printf("\n%.2f Russian_Ruble = %.2f British_Pound", amount, British_Pound);

        Euro = amount / 563;
        printf("\n%.2f Russian_Ruble = %.2f Euro", amount, Euro);

        Japanese_Yen = amount / 56.7;
        printf("\n%.2f Russian_Ruble = %.2f Japanese_Yen", amount, Japanese_Yen);

        Australian_Dollar = amount / 574.7;
        printf("\n%.2f Russian_Ruble = %.2f Australian_Dollar", amount, Australian_Dollar);

        Canadian_Dollar = amount / 57.68;
        printf("\n%.2f Russian_Ruble = %.2f Canadian_Dollar", amount, Canadian_Dollar);

        South_African_rand = amount / 303;
        printf("\n%.2f Russian_Ruble = %.2f South_African_rand", amount, South_African_rand);

        South_Korean_Won = amount / 848;
        printf("\n%.2f Russian_Ruble = %.2f South_Korean_Won", amount, South_Korean_Won);

        Bangladeshi_Taka = amount / 457;
        printf("\n%.2f Russian_Ruble = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Renminbi = amount / 85.8;
        printf("\n%.2f Russian_Ruble = %.2f Renminbi", amount, Renminbi);

        Singapore_Dollar = amount / 93.6;
        printf("\n%.2f Russian_Ruble = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Thai_Baht = amount / 99.2;
        printf("\n%.2f Russian_Ruble = %.2f Thai_Baht", amount, Thai_Baht);

        Turkish_Lira = amount / 925.5;
        printf("\n%.2f Russian_Ruble = %.2f Turkish_Lira", amount, Turkish_Lira);

        Swiss_Franc = amount / 35;
        printf("\n%.2f Russian_Ruble = %.2f Swiss_Franc", amount, Swiss_Franc);

        Mexican_Peso = amount / 75;
        printf("\n%.2f Russian_Ruble = %.2f Mexican_Peso", amount, Mexican_Peso);

        New_Zealand_Dollar = amount / 494;
        printf("\n%.2f Russian_Ruble = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 73;
        printf("\n%.2f South_Korean_Won = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        UAE_Dirham = amount / 958;
        printf("\n%.2f South_Korean_Won = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 11: // Bangladeshi_Taka
        Rupee = amount / 14.4;
        printf("\n%.2f Bangladeshi_Taka = %.2f Rupee", amount, South_African_rand);

        US_Dollar = amount / 44.7;
        printf("\n%.2f Bangladeshi_Taka = %.2f US_Dollar", amount, US_Dollar);

        British_Pound = amount / 75.66;
        printf("\n%.2f Bangladeshi_Taka = %.2f British_Pound", amount, British_Pound);

        Euro = amount / 66.7;
        printf("\n%.2f Bangladeshi_Taka = %.2f Euro", amount, Euro);

        Japanese_Yen = amount / 7.5;
        printf("\n%.2f Bangladeshi_Taka = %.2f Japanese_Yen", amount, Japanese_Yen);

        Australian_Dollar = amount / 56;
        printf("\n%.2f Bangladeshi_Taka = %.2f Australian_Dollar", amount, Australian_Dollar);

        Canadian_Dollar = amount / 84;
        printf("\n%.2f Bangladeshi_Taka = %.2f Canadian_Dollar", amount, Canadian_Dollar);

        South_African_rand = amount / 575;
        printf("\n%.2f Bangladeshi_Taka = %.2f South_African_rand", amount, South_African_rand);

        South_Korean_Won = amount / 555;
        printf("\n%.2f Bangladeshi_Taka = %.2f South_Korean_Won", amount, South_Korean_Won);

        Russian_Ruble = amount / 664;
        printf("\n%.2f Bangladeshi_Taka = %.2f Russian_Ruble", amount, Russian_Ruble);

        Renminbi = amount / 47;
        printf("\n%.2f Bangladeshi_Taka = %.2f Renminbi", amount, Renminbi);

        Singapore_Dollar = amount / 64;
        printf("\n%.2f Bangladeshi_Taka = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Thai_Baht = amount / 63;
        printf("\n%.2f Bangladeshi_Taka = %.2f Thai_Baht", amount, Thai_Baht);

        Turkish_Lira = amount / 765;
        printf("\n%.2f Bangladeshi_Taka = %.2f Turkish_Lira", amount, Turkish_Lira);

        Swiss_Franc = amount / 67657;
        printf("\n%.2f Bangladeshi_Taka = %.2f Swiss_Franc", amount, Swiss_Franc);

        Mexican_Peso = amount / 5667;
        printf("\n%.2f Bangladeshi_Taka = %.2f Mexican_Peso", amount, Mexican_Peso);

        New_Zealand_Dollar = amount / 355;
        printf("\n%.2f Bangladeshi_Taka = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 57;
        printf("\n%.2f Bangladeshi_Taka = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        UAE_Dirham = amount / 63;
        printf("\n%.2f Bangladeshi_Taka = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 12: // Renminbi
        Rupee = amount / 67;
        printf("\n%.2f Renminbi = %.2f Rupee", amount, South_African_rand);

        US_Dollar = amount / 46;
        printf("\n%.2f Renminbi = %.2f US_Dollar", amount, US_Dollar);

        British_Pound = amount / 67;
        printf("\n%.2f Renminbi = %.2f British_Pound", amount, British_Pound);

        Euro = amount / 443;
        printf("\n%.2f Renminbi = %.2f Euro", amount, Euro);

        Japanese_Yen = amount / 67;
        printf("\n%.2f Renminbi = %.2f Japanese_Yen", amount, Japanese_Yen);

        Australian_Dollar = amount / 868;
        printf("\n%.2f Renminbi = %.2f Australian_Dollar", amount, Australian_Dollar);

        Canadian_Dollar = amount / 85;
        printf("\n%.2f Renminbi = %.2f Canadian_Dollar", amount, Canadian_Dollar);

        South_African_rand = amount / 96;
        printf("\n%.2f Renminbi = %.2f South_African_rand", amount, South_African_rand);

        South_Korean_Won = amount / 364;
        printf("\n%.2f Renminbi = %.2f South_Korean_Won", amount, South_Korean_Won);

        Russian_Ruble = amount / 969;
        printf("\n%.2f Renminbi = %.2f Russian_Ruble", amount, Russian_Ruble);

        Bangladeshi_Taka = amount / 924;
        printf("\n%.2f Renminbi = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Singapore_Dollar = amount / 764.5;
        printf("\n%.2f Renminbi = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Thai_Baht = amount / 66.45;
        printf("\n%.2f Renminbi = %.2f Thai_Baht", amount, Thai_Baht);

        Turkish_Lira = amount / 33.6;
        printf("\n%.2f Renminbi = %.2f Turkish_Lira", amount, Turkish_Lira);

        Swiss_Franc = amount / 82.6;
        printf("\n%.2f Renminbi = %.2f Swiss_Franc", amount, Swiss_Franc);

        Mexican_Peso = amount / 839;
        printf("\n%.2f Renminbi = %.2f Mexican_Peso", amount, Mexican_Peso);

        New_Zealand_Dollar = amount / 564;
        printf("\n%.2f Renminbi = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 65.88;
        printf("\n%.2f Renminbi = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        UAE_Dirham = amount / 666;
        printf("\n%.2f Renminbi = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 13: // Singapore_Dollar
        Rupee = amount / 65;
        printf("\n%.2f Singapore_Dollar = %.2f Rupee", amount, South_African_rand);

        US_Dollar = amount / 64;
        printf("\n%.2f Singapore_Dollar = %.2f US_Dollar", amount, US_Dollar);

        British_Pound = amount / 464;
        printf("\n%.2f Singapore_Dollar = %.2f British_Pound", amount, British_Pound);

        Euro = amount / 444;
        printf("\n%.2f Singapore_Dollar = %.2f Euro", amount, Euro);

        Japanese_Yen = amount / 55;
        printf("\n%.2f Singapore_Dollar = %.2f Japanese_Yen", amount, Japanese_Yen);

        Australian_Dollar = amount / 48;
        printf("\n%.2f Singapore_Dollar = %.2f Australian_Dollar", amount, Australian_Dollar);

        Canadian_Dollar = amount / 642;
        printf("\n%.2f Singapore_Dollar = %.2f Canadian_Dollar", amount, Canadian_Dollar);

        South_African_rand = amount / 646;
        printf("\n%.2f Singapore_Dollar = %.2f South_African_rand", amount, South_African_rand);

        South_Korean_Won = amount / 752;
        printf("\n%.2f Singapore_Dollar = %.2f South_Korean_Won", amount, South_Korean_Won);

        Russian_Ruble = amount / 897;
        printf("\n%.2f Singapore_Dollar = %.2f Russian_Ruble", amount, Russian_Ruble);

        Bangladeshi_Taka = amount / 87;
        printf("\n%.2f Singapore_Dollar = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Renminbi = amount / 667;
        printf("\n%.2f Singapore_Dollar = %.2f Renminbi", amount, Renminbi);

        Thai_Baht = amount / 76;
        printf("\n%.2f Singapore_Dollar = %.2f Turkish_Lira", amount, Turkish_Lira);

        Swiss_Franc = amount / 757;
        printf("\n%.2f Singapore_Dollar = %.2f Swiss_Franc", amount, Swiss_Franc);

        Mexican_Peso = amount / 756;
        printf("\n%.2f Singapore_Dollar = %.2f Mexican_Peso", amount, Mexican_Peso);

        New_Zealand_Dollar = amount / 75;
        printf("\n%.2f Singapore_Dollar = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 57;
        printf("\n%.2f Singapore_Dollar = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        UAE_Dirham = amount / 84;
        printf("\n%.2f Singapore_Dollar = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 14: // Thai_Baht
        Rupee = amount / 46;
        printf("\n%.2f Thai_Baht = %.2f Rupee", amount, South_African_rand);

        US_Dollar = amount / 666;
        printf("\n%.2f Thai_Baht = %.2f US_Dollar", amount, US_Dollar);

        British_Pound = amount / 76;
        printf("\n%.2f Thai_Baht = %.2f British_Pound", amount, British_Pound);

        Euro = amount / 57;
        printf("\n%.2f Thai_Baht = %.2f Euro", amount, Euro);

        Japanese_Yen = amount / 744;
        printf("\n%.2f Thai_Baht = %.2f Japanese_Yen", amount, Japanese_Yen);

        Australian_Dollar = amount / 746;
        printf("\n%.2f Thai_Baht = %.2f Australian_Dollar", amount, Australian_Dollar);

        Canadian_Dollar = amount / 765;
        printf("\n%.2f Thai_Baht = %.2f Canadian_Dollar", amount, Canadian_Dollar);

        South_African_rand = amount / 84;
        printf("\n%.2f Thai_Baht = %.2f South_African_rand", amount, South_African_rand);

        South_Korean_Won = amount / 8457;
        printf("\n%.2f Thai_Baht = %.2f South_Korean_Won", amount, South_Korean_Won);

        Russian_Ruble = amount / 456;
        printf("\n%.2f Thai_Baht = %.2f Russian_Ruble", amount, Russian_Ruble);

        Bangladeshi_Taka = amount / 565;
        printf("\n%.2f Thai_Baht = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Renminbi = amount / 5757;
        printf("\n%.2f Thai_Baht = %.2f Renminbi", amount, Renminbi);

        Singapore_Dollar = amount / 57;
        printf("\n%.2f Thai_Baht = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Turkish_Lira = amount / 777;
        printf("\n%.2f Thai_Baht = %.2f Turkish_Lira", amount, Turkish_Lira);

        Swiss_Franc = amount / 455;
        printf("\n%.2f Thai_Baht = %.2f Swiss_Franc", amount, Swiss_Franc);

        Mexican_Peso = amount / 677;
        printf("\n%.2f Thai_Baht = %.2f Mexican_Peso", amount, Mexican_Peso);

        New_Zealand_Dollar = amount / 677;
        printf("\n%.2f Thai_Baht = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 969;
        printf("\n%.2f Thai_Baht = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        UAE_Dirham = amount / 56;
        printf("\n%.2f Thai_Baht = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 15: // Turkish_Lira
        Rupee = amount / 778;
        printf("\n%.2f Turkish_Lira = %.2f Rupee", amount, South_African_rand);

        US_Dollar = amount / 55;
        printf("\n%.2f Turkish_Lira = %.2f US_Dollar", amount, US_Dollar);

        British_Pound = amount / 465;
        printf("\n%.2f Turkish_Lira = %.2f British_Pound", amount, British_Pound);

        Euro = amount / 775;
        printf("\n%.2f Turkish_Lira = %.2f Euro", amount, Euro);

        Japanese_Yen = amount / 464;
        printf("\n%.2f Turkish_Lira = %.2f Japanese_Yen", amount, Japanese_Yen);

        Australian_Dollar = amount / 464;
        printf("\n%.2f Turkish_Lira = %.2f Australian_Dollar", amount, Australian_Dollar);

        Canadian_Dollar = amount / 78;
        printf("\n%.2f Turkish_Lira = %.2f Canadian_Dollar", amount, Canadian_Dollar);

        South_African_rand = amount / 90;
        printf("\n%.2f Turkish_Lira = %.2f South_African_rand", amount, South_African_rand);

        South_Korean_Won = amount / 99;
        printf("\n%.2f Turkish_Lira = %.2f South_Korean_Won", amount, South_Korean_Won);

        Russian_Ruble = amount / 94;
        printf("\n%.2f Turkish_Lira = %.2f Russian_Ruble", amount, Russian_Ruble);

        Bangladeshi_Taka = amount / 92;
        printf("\n%.2f Turkish_Lira = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Renminbi = amount / 77;
        printf("\n%.2f Turkish_Lira = %.2f Renminbi", amount, Renminbi);

        Singapore_Dollar = amount / 783;
        printf("\n%.2f Turkish_Lira = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Thai_Baht = amount / 903;
        printf("\n%.2f Turkish_Lira = %.2f Thai_Baht", amount, Thai_Baht);

        Swiss_Franc = amount / 54;
        printf("\n%.2f Turkish_Lira = %.2f Swiss_Franc", amount, Swiss_Franc);

        Mexican_Peso = amount / 63;
        printf("\n%.2f Turkish_Lira = %.2f Mexican_Peso", amount, Mexican_Peso);

        New_Zealand_Dollar = amount / 377;
        printf("\n%.2f Turkish_Lira = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 73;
        printf("\n%.2f Turkish_Lira = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        UAE_Dirham = amount / 36;
        printf("\n%.2f Turkish_Lira = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 16: // Swiss_Franc
        Rupee = amount / 366;
        printf("\n%.2f Swiss_Franc = %.2f Rupee", amount, South_African_rand);

        US_Dollar = amount / 637;
        printf("\n%.2f Swiss_Franc = %.2f US_Dollar", amount, US_Dollar);

        British_Pound = amount / 75;
        printf("\n%.2f Swiss_Franc = %.2f British_Pound", amount, British_Pound);

        Euro = amount / 733;
        printf("\n%.2f Swiss_Franc = %.2f Euro", amount, Euro);

        Japanese_Yen = amount / 373;
        printf("\n%.2f Swiss_Franc = %.2f Japanese_Yen", amount, Japanese_Yen);

        Australian_Dollar = amount / 737;
        printf("\n%.2f Swiss_Franc = %.2f Australian_Dollar", amount, Australian_Dollar);

        South_African_rand = amount / 75;
        printf("\n%.2f Swiss_Franc = %.2f South_African_rand", amount, South_African_rand);

        South_Korean_Won = amount / 858;
        printf("\n%.2f Swiss_Franc = %.2f South_Korean_Won", amount, South_Korean_Won);

        Russian_Ruble = amount / 855;
        printf("\n%.2f Swiss_Franc = %.2f Russian_Ruble", amount, Russian_Ruble);

        Bangladeshi_Taka = amount / 857;
        printf("\n%.2f Swiss_Franc = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Renminbi = amount / 758;
        printf("\n%.2f Swiss_Franc = %.2f Renminbi", amount, Renminbi);

        Singapore_Dollar = amount / 578;
        printf("\n%.2f Swiss_Franc = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Thai_Baht = amount / 578;
        printf("\n%.2f Swiss_Franc = %.2f Thai_Baht", amount, Thai_Baht);

        Turkish_Lira = amount / 5784;
        printf("\n%.2f Swiss_Franc = %.2f Turkish_Lira", amount, Turkish_Lira);

        Mexican_Peso = amount / 67;
        printf("\n%.2f Swiss_Franc = %.2f Mexican_Peso", amount, Mexican_Peso);

        New_Zealand_Dollar = amount / 76;
        printf("\n%.2f Swiss_Franc = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 67;
        printf("\n%.2f Swiss_Franc = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        UAE_Dirham = amount / 647;
        printf("\n%.2f Swiss_Franc = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 17: // Mexican_Peso
        Rupee = amount / 76746;
        printf("\n%.2f Mexican_Peso = %.2f Rupee", amount, South_African_rand);

        US_Dollar = amount / 746;
        printf("\n%.2f Mexican_Peso = %.2f US_Dollar", amount, US_Dollar);

        British_Pound = amount / 476;
        printf("\n%.2f Mexican_Peso = %.2f British_Pound", amount, British_Pound);

        Euro = amount / 76;
        printf("\n%.2f Mexican_Peso = %.2f Euro", amount, Euro);

        Japanese_Yen = amount / 46;
        printf("\n%.2f Mexican_Peso = %.2f Japanese_Yen", amount, Japanese_Yen);

        Australian_Dollar = amount / 467;
        printf("\n%.2f Mexican_Peso = %.2f Australian_Dollar", amount, Australian_Dollar);

        Canadian_Dollar = amount / 47;
        printf("\n%.2f Mexican_Peso = %.2f Canadian_Dollar", amount, Canadian_Dollar);

        South_African_rand = amount / 47;
        printf("\n%.2f Mexican_Peso = %.2f South_African_rand", amount, South_African_rand);

        South_Korean_Won = amount / 4766;
        printf("\n%.2f Mexican_Peso = %.2f South_Korean_Won", amount, South_Korean_Won);

        Russian_Ruble = amount / 343;
        printf("\n%.2f Mexican_Peso = %.2f Russian_Ruble", amount, Russian_Ruble);

        Bangladeshi_Taka = amount / 342;
        printf("\n%.2f Mexican_Peso = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Renminbi = amount / 423;
        printf("\n%.2f Mexican_Peso = %.2f Renminbi", amount, Renminbi);

        Singapore_Dollar = amount / 346;
        printf("\n%.2f Mexican_Peso = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Thai_Baht = amount / 788;
        printf("\n%.2f Mexican_Peso = %.2f Thai_Baht", amount, Thai_Baht);

        Turkish_Lira = amount / 959;
        printf("\n%.2f Mexican_Peso = %.2f Turkish_Lira", amount, Turkish_Lira);

        Swiss_Franc = amount / 88;
        printf("\n%.2f Mexican_Peso = %.2f Swiss_Franc", amount, Swiss_Franc);

        New_Zealand_Dollar = amount / 76;
        printf("\n%.2f Mexican_Peso = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 58;
        printf("\n%.2f Mexican_Peso = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        UAE_Dirham = amount / 88;
        printf("\n%.2f Mexican_Peso = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 18: // New_Zealand_Dollar
        Rupee = amount / 900;
        printf("\n%.2f New_Zealand_Dollar = %.2f Rupee", amount, South_African_rand);

        US_Dollar = amount / 977;
        printf("\n%.2f New_Zealand_Dollar = %.2f US_Dollar", amount, US_Dollar);

        British_Pound = amount / 655;
        printf("\n%.2f New_Zealand_Dollar = %.2f British_Pound", amount, British_Pound);

        Euro = amount / 455;
        printf("\n%.2f New_Zealand_Dollar = %.2f Euro", amount, Euro);

        Japanese_Yen = amount / 455;
        printf("\n%.2f New_Zealand_Dollar = %.2f Japanese_Yen", amount, Japanese_Yen);

        Australian_Dollar = amount / 667;
        printf("\n%.2f New_Zealand_Dollar = %.2f Australian_Dollar", amount, Australian_Dollar);

        Canadian_Dollar = amount / 768;
        printf("\n%.2f New_Zealand_Dollar = %.2f Canadian_Dollar", amount, Canadian_Dollar);

        South_African_rand = amount / 865;
        printf("\n%.2f Mexican_Peso = %.2f South_African_rand", amount, South_African_rand);

        South_Korean_Won = amount / 948;
        printf("\n%.2f New_Zealand_Dollar = %.2f South_Korean_Won", amount, South_Korean_Won);

        Russian_Ruble = amount / 635;
        printf("\n%.2f New_Zealand_Dollar = %.2f Russian_Ruble", amount, Russian_Ruble);

        Bangladeshi_Taka = amount / 757;
        printf("\n%.2f New_Zealand_Dollar = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Renminbi = amount / 99;
        printf("\n%.2f New_Zealand_Dollar = %.2f Renminbi", amount, Renminbi);

        Singapore_Dollar = amount / 876;
        printf("\n%.2f New_Zealand_Dollar = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Thai_Baht = amount / 954;
        printf("\n%.2f New_Zealand_Dollar = %.2f Thai_Baht", amount, Thai_Baht);

        Turkish_Lira = amount / 949;
        printf("\n%.2f New_Zealand_Dollar = %.2f Turkish_Lira", amount, Turkish_Lira);

        Swiss_Franc = amount / 876;
        printf("\n%.2f New_Zealand_Dollar = %.2f Swiss_Franc", amount, Swiss_Franc);

        New_Zealand_Dollar = amount / 832;
        printf("\n%.2f New_Zealand_Dollar = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 866;
        printf("\n%.2f New_Zealand_Dollar = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        UAE_Dirham = amount / 315;
        printf("\n%.2f New_Zealand_Dollar = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 19: // Argentinia_Peso
        Rupee = amount / 0.73;
        printf("\n%.2f Argentinia_Peso = %.2f Rupee", amount, South_African_rand);

        US_Dollar = amount / 0.0097;
        printf("\n%.2f Argentinia_Peso = %.2f US_Dollar", amount, US_Dollar);

        British_Pound = amount / 0.0073;
        printf("\n%.2f Argentinia_Peso = %.2f British_Pound", amount, British_Pound);

        Euro = amount / 0.0086;
        printf("\n%.2f Argentinia_Peso = %.2f Euro", amount, Euro);

        Japanese_Yen = amount / 1.12;
        printf("\n%.2f Argentinia_Peso = %.2f Japanese_Yen", amount, Japanese_Yen);

        Australian_Dollar = amount / 0.013;
        printf("\n%.2f Argentinia_Peso = %.2f Australian_Dollar", amount, Australian_Dollar);

        Canadian_Dollar = amount / 0.013;
        printf("\n%.2f Argentinia_Peso = %.2f Canadian_Dollar", amount, Canadian_Dollar);

        South_African_rand = amount / 0.15;
        printf("\n%.2f Argentinia_Peso = %.2f South_African_rand", amount, South_African_rand);

        South_Korean_Won = amount / 11.57;
        printf("\n%.2f Argentinia_Peso = %.2f South_Korean_Won", amount, South_Korean_Won);

        Russian_Ruble = amount / 0.72;
        printf("\n%.2f Argentinia_Peso = %.2f Russian_Ruble", amount, Russian_Ruble);

        Bangladeshi_Taka = amount / 0.84;
        printf("\n%.2f Argentinia_Peso = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Renminbi = amount / 0.062;
        printf("\n%.2f Argentinia_Pesor = %.2f Renminbi", amount, Renminbi);

        Singapore_Dollar = amount / 0.013;
        printf("\n%.2f Argentinia_Peso = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Thai_Baht = amount / 0.33;
        printf("\n%.2f Argentinia_Peso = %.2f Thai_Baht", amount, Thai_Baht);

        Turkish_Lira = amount / 0.12;
        printf("\n%.2f Argentinia_Peso = %.2f Turkish_Lira", amount, Turkish_Lira);

        Swiss_Franc = amount / 0.0089;
        printf("\n%.2f Argentinia_Peso = %.2f Swiss_Franc", amount, Swiss_Franc);

        Mexican_Peso = amount / 0.20;
        printf("\n%.2f Argentinia_Peso = %.2f Mexican_Peso", amount, Mexican_Peso);

        New_Zealand_Dollar = amount / 0.014;
        printf("\n%.2f Argentinia_Peso = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        UAE_Dirham = amount / 0.036;
        printf("\n%.2f Argentinia_Peso = %.2f UAE_Dirham", amount, UAE_Dirham);

        break;

    case 20: // UAE_Dirham
        Rupee = amount / 20.33;
        printf("\n%.2f UAE_Dirham = %.2f Rupee", amount, South_African_rand);

        US_Dollar = amount / 0.27;
        printf("\n%.2f UAE_Dirham = %.2f US_Dollar", amount, US_Dollar);

        British_Pound = amount / 0.20;
        printf("\n%.2f UAE_Dirham = %.2f British_Pound", amount, British_Pound);

        Euro = amount / 0.24;
        printf("\n%.2f UAE_Dirham = %.2f Euro", amount, Euro);

        Japanese_Yen = amount / 31.29;
        printf("\n%.2f UAE_Dirham = %.2f Japanese_Yen", amount, Japanese_Yen);

        Australian_Dollar = amount / 0.38;
        printf("\n%.2f UAE_Dirham = %.2f Australian_Dollar", amount, Australian_Dollar);

        Canadian_Dollar = amount / 0.35;
        printf("\n%.2f UAE_Dirham = %.2f Canadian_Dollar", amount, Canadian_Dollar);

        South_African_rand = amount / 4.32;
        printf("\n%.2f UAE_Dirham = %.2f South_African_rand", amount, South_African_rand);

        South_Korean_Won = amount / 323.09;
        printf("\n%.2f UAE_Dirham = %.2f South_Korean_Won", amount, South_Korean_Won);

        Russian_Ruble = amount / 20.07;
        printf("\n%.2f UAE_Dirham = %.2f Russian_Ruble", amount, Russian_Ruble);

        Bangladeshi_Taka = amount / 23.43;
        printf("\n%.2f UAE_Dirham = %.2f Bangladeshi_Taka", amount, Bangladeshi_Taka);

        Renminbi = amount / 1.73;
        printf("\n%.2f UAE_Dirham = %.2f Renminbi", amount, Renminbi);

        Singapore_Dollar = amount / 0.37;
        printf("\n%.2f UAE_Dirham = %.2f Singapore_Dollar", amount, Singapore_Dollar);

        Thai_Baht = amount / 9.12;
        printf("\n%.2f UAE_Dirham = %.2f Thai_Baht", amount, Thai_Baht);

        Turkish_Lira = amount / 3.36;
        printf("\n%.2f UAE_Dirham = %.2f Turkish_Lira", amount, Turkish_Lira);

        Swiss_Franc = amount / 0.25;
        printf("\n%.2f UAE_Dirham20 = %.2f Swiss_Franc", amount, Swiss_Franc);

        Mexican_Peso = amount / 5.62;
        printf("\n%.2f UAE_Dirham = %.2f Mexican_Peso", amount, Mexican_Peso);

        New_Zealand_Dollar = amount / 0.40;
        printf("\n%.2f UAE_Dirham = %.2f New_Zealand_Dollar", amount, New_Zealand_Dollar);

        Argentinia_Peso = amount / 27.94;
        printf("\n%.2f UAE_Dirham = %.2f Argentinia_Peso", amount, Argentinia_Peso);

        break;
    default:
        printf("Invalid input....Do you want to try again?");
        printf("If yes then enter 1 \nIf you want to exit then press 2 \n");
        while ((getchar()) != '\n');
        scanf("%d", &ch);
        if (ch == 1)
        {
            convert();
        }        
    }
}

