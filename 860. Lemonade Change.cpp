bool lemonadeChange(int* bills, int billsSize) {
    int i=0,m5=0,m10=0,m20=0;
    for(i=0;i<billsSize;i++)
    {
        if(bills[i]==5)
        {
            m5++;
        }
        else if(bills[i]==10)
        {
            m10++;
            m5--;
        }
        else
        {
            m20++;
            if(m10==0)
            {
                m5=m5-3;
            }
            else
            {
                m10--;
                m5--;
            }
        }
        if((m5<0)||(m10<0)||(m20<0))
        {
            return false;
        }
    }
    return true;
}
