#include "stdio.h"
#include "telephone.h"
#include "string.h"

int main(void){
    phone_number pn_called;
    phone_number pn_calling;
    phone_number pn_paied;
    LongCall lc;
    /* pn_called */
    strcpy(pn_called.code,"86");
    strcpy(pn_called.exchange,"0513");
    strcpy(pn_called.station,"89089808");
    /* pn_calling */
    strcpy(pn_calling.code,"86");
    strcpy(pn_calling.exchange,"020");
    strcpy(pn_calling.station,"55880000");    
    /* pn_paied */
    strcpy(pn_paied.code,"86");
    strcpy(pn_paied.exchange,"010");
    strcpy(pn_paied.station,"10010");

    lc.year = 2023;
    lc.month = 12;
    lc.date = 10;
    lc.hour = 15;
    lc.minute = 7;
    lc.second = 45;
    lc.called = &pn_called;
    lc.calling = &pn_calling;
    lc.paied = &pn_paied;

    LongCall *p = &lc;

    printf("LONG_DISTANCE_LIST\n");
    printf("Date: %d/%d/%d %02d:%02d:%02d\n",p->year,p->month,p->date,p->hour,p->minute,p->second);
    printf("From: %s-%s-%s\n",p->calling->code,p->calling->exchange,p->calling->station);
    printf("To:   %s-%s-%s\n",p->called->code,p->called->exchange,p->called->station);
    printf("Paied:%s-%s-%s\n",p->paied->code,p->paied->exchange,p->paied->station);

}