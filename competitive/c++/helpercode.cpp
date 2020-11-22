bool isEven(int n)
{
    // n&1 is 1, then odd, else even 
    return (!(n & 1));
}

int dividePowerOf2(int i){
    // Change the 1 to equal any power of 2
    return i >> 1;
}

int mulitplyPowerOf2(int i){
    // Change the 1 to equal any power of 2
    return i << 1;
}

int count_digit(int number)
{
    int count = 0;
    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    return count;
}
//Alternate count_digit
int countDigit(int i){
    string i_str;
    i_str = to_string(i);
    return(i_str.size());
}