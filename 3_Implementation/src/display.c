#include<stdio.h>
#include<stdlib.h>
#include"flight_operations.h"

void display(struct records *init, struct records *flow)
{
    flow = init;

    while(flow)
    {
        printf("\n\n Passport Number : %-6s",flow->passport);
		printf("\n   Name : %-15s",flow->name);
		printf("\n   E-mail Address: %-15s",flow->email);
		printf("\n   Seat Number: A-%d",flow->seat_num);
		printf("\n\n++*=====================================================*++");
		flow = flow ->next;  
	}


}