#include <stdio.h>

int main()
{

    char name[50];
    int Contact;
    int customer_id;

    int body_soap;
    int hair_spray;
    int hair_cream;
    int body_spray;

    int sugar;
    int tea;
    int coffee;
    int rice;
    int wheat;

    int pepsi;
    int sprite;
    int coke;
    int roke_boom;
    int riham_cola;

    int total;
    int cosmetics_total;
    int grocery_total;
    int beverage_total;

    printf("--------------------------------\n");
    printf("BILLING SYSTEM\n");
    printf("--------------------------------\n");
    printf("Customer Details\n\n");

    printf("Customer Name : ");
    gets(name);
    printf("Customer Contact : ");
    scanf("%d", &Contact);
    printf("Customer Id : ");
    printf("%d\n", &customer_id);

    printf("--------------------------------\n");

    printf("COSMETICS\n\n");

    printf("Body Soap ( Ugx 4500) : ");
    scanf("%d", &body_soap);
    printf("Hair Cream ( Ugx 32000 )");
    scanf("%d", &hair_cream);
    printf("Hair Spray ( Ugx 37000)");
    scanf("%d", &hair_spray);
    printf("Body Spray ( Ugx 75000)");
    scanf("%d", &body_spray);

    printf("--------------------------------\n");

    printf("GROCERIES\n\n");

    printf("Sugar ( Ugx 4800 )");
    scanf("%d", &sugar);
    printf("Tea ( Ugx 7500 )");
    scanf("%d", &tea);
    printf("Coffee ( Ugx 9800 )");
    scanf("%d", &coffee);
    printf("Rice ( Ugx 5500 )");
    scanf("%d", &rice);
    printf("Wheat ( Ugx 7500 )");
    scanf("%d", &wheat);

    printf("--------------------------------\n");

    printf("BEVERAGES\n\n");

    printf("Pepsi ( Ugx 4500 )");
    scanf("%d", &pepsi);
    printf("Sprite ( Ugx 4200 )");
    scanf("%d", &sprite);
    printf("Coke ( Ugx 5200 )");
    scanf("%d", &coke);
    printf("Roke boom ( Ugx 2000)");
    scanf("%d", &roke_boom);
    printf("Riham Cola ( Ugx 1200)");
    scanf("%d", &riham_cola);

    printf("--------------------------------\n");

    int boso;
    int bosp;
    int hacr;
    int hasp;

    boso = 10 * body_soap;
    bosp = 17 * body_spray;
    hacr = 25 * hair_cream;
    hasp = 32 * hair_spray;
    cosmetics_total = boso + bosp + hacr + hasp;

    printf("Body Soap : ");
    printf("%d Ugx\n", boso);
    printf("Body Spray : ");
    printf("%d Ugx\n", bosp);
    printf("Hair Cream : ");
    printf("%d Ugx\n", hacr);
    printf("Hair Spray : ");
    printf("%d Ugx\n", hasp);
    printf("Cosmetics Total : ");
    printf("%d Ugx\n", cosmetics_total);

    printf("--------------------------------\n");

    int s;
    int t;
    int c;
    int r;
    int w;

    s = 21 * sugar;
    t = 4 * tea;
    c = 131 * coffee;
    r = 100 * rice;
    w = 24 * wheat;

    grocery_total = s + t + c + r + w;

    printf("Sugar : ");
    printf("%d Ugx\n", s);
    printf("Tea : ");
    printf("%d Ugx\n", t);
    printf("Coffee : ");
    printf("%d Ugx\n", c);
    printf("Rice : ");
    printf("%d Ugx\n", r);
    printf("Wheat : ");
    printf("%d Ugx\n", w);
    printf("Groceries Total : ");
    printf("%d Ugx\n", grocery_total);

    printf("--------------------------------\n");

    int pep;
    int sp;
    int cok;
    int rok;
    int rih;

    pep = 4 * pepsi;
    sp = 17 * sprite;
    cok = 34 * coke;
    rok = 46 * roke_boom;
    rih = 78 * riham_cola;

    beverage_total = pep + sp + cok + rok + rih;

    printf("Pepsi : ");
    printf("%d Ugx\n", pep);
    printf("Sprite : ");
    printf("%d Ugx\n", sp);
    printf("Coke : ");
    printf("%d Ugx\n", cok);
    printf("Roke Boom : ");
    printf("%d Ugx\n", rok);
    printf("Riham Cola : ");
    printf("%d Ugx\n", rih);
    printf("Beverage Total : %d Ugx", beverage_total);

    printf("--------------------------------\n\n");

    total = cosmetics_total + grocery_total + beverage_total;

    printf("Total amount : ");
    printf("%d Ugx\n", total);

    printf("--------------------------------\n");

    printf("--------------------------------------------------------------\n");

    printf("Shoprite Uganda\n\n");

    printf("Customer Name : ");
    printf("%s\n", name);
    printf("Contact : ");
    printf("%d\n", Contact);
    printf("Customer ID : ");
    /*printf("%d\n", customer_id);*/

    printf("Product name                      Quantity                            Price\n\n");
    printf("Body Soap                         %d                                  %d\n", body_soap, boso);
    printf("Hair Cream                        %d                                  %d\n", hair_cream, hacr);
    printf("Body Spray                        %d                                  %d\n", body_spray, bosp);
    printf("Hair Spray                        %d                                  %d\n", hair_spray, hasp);
    printf("Sugar                             %d                                  %d\n", sugar, s);
    printf("Tea                               %d                                  %d\n", tea, t);
    printf("Coffee                            %d                                  %d\n", coffee, c);
    printf("Rice                              %d                                  %d\n", rice, r);
    printf("Wheat                             %d                                  %d\n", wheat, w);
    printf("Pepsi                             %d                                  %d\n", pepsi, pep);
    printf("Sprite                            %d                                  %d\n", sprite, sp);
    printf("Coke                              %d                                  %d\n", coke, cok);
    printf("Roke Boom                         %d                                  %d\n", roke_boom, rok);
    printf("Riham Cola                        %d                                  %d\n", riham_cola, rih);

    printf("Grocery Total Price : %d\n\n", grocery_total);

    printf("Cosmetics Total price : %d \n\n", cosmetics_total);

    printf("Beverages Total Price : %d\n\n", beverage_total);

    printf("Total price : %d\n\n", total);

    printf("-----------------------------------------------------------------------------------");
}