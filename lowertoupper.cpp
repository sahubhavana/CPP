int main()
{
    char str[100];
    int i = 0;
    printf("Convert lower case into upper case Char using C \n");
    printf("Please enter a string: ");
    fgets(str, 100, stdin);
    while( str[i] != '\0' )
    {
        if( str[i] >= 'a' && str[i] <= 'z' )
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("String after converting into upper case : \n%s", str);
    return 0;
}
C
Output
