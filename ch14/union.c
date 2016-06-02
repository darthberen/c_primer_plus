#include <stdio.h>

struct owner {
    char ssn[12];
};

struct lease_company {
    char name[40];
    char hq[40];
};

union data {
    struct owner owncar;
    struct lease_company leasecar;
};

struct car_data {
    char make[15];
    int status; // 0: owned, 1: leased
    union data ownerinfo;
};

int main(void)
{
    struct lease_company leasor = { .name = "Enterprise", .hq = "CT" };
    union data owner_info = {.leasecar = leasor };

    union data owner_info2 = {
        .owncar = { .ssn = "123-45-6789" }
    };

    struct car_data data = {
        .make = "Civic",
        .status = 1,
        .ownerinfo = owner_info
    };
    struct car_data data2 = {
        .make = "Camry",
        .status = 0,
        .ownerinfo = owner_info2
    };

    printf("%s has status %d and owner %s in %s\n", data.make, data.status,
           data.ownerinfo.leasecar.name, data.ownerinfo.leasecar.hq);

    printf("%s has status %d and owner ssn %s\n", data2.make, data2.status, data2.ownerinfo.owncar.ssn);

    return 0;
}
