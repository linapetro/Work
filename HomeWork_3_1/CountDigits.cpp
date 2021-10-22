int CountDigits(int number)
{
    int count = 0;
    while(number > 0) {
        number = number / 10;
        count = count + 1;
    }
    return count;
}
