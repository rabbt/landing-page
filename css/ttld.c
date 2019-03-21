#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct client{
    char Name[50];
    char Id[10];
    float Credit;
    char Address[100];
};

int main(int argc, char const *argv[])
{
    struct client client1={0};
    strcpy(client1.Name, "nietsnie");
    strcpy(client1.Id, "000000001");
    client1.Credit=100000;
    strcpy(client1.Address, "cllae1, carreq, ciudad1");

    printf("the client is: %s", client1.Name);
    printf("the client id is: %s", client1.Id);
    printf("the client is: %d", client1.Credit);
    printf("the client is: %s", client1.Address);


    return 0;
}
