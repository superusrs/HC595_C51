

void init(u8 *SCK,u8 *SER,u8 *RCK)
{
    sbit SCK=
}

void transmition(u8*data)
{
    whlile(data!=null)
    {
        SCK=0;
        SER=0x80&data;
        delayms();
        SCK=1;
        delayms();
        data++;
    }

}