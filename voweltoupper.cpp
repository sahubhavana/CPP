int main()
{
    char str[100];
    int i = 0;
    printf("Convert lower case into upper case Char  vowel using C \n");
    printf("Please enter a string: ");
    fgets(str, 100, stdin);
    while( str[i] != '\0' )
    {
        if( str[i] == 'a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o' || str[i]=='u')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("Vowel after converting into upper case : \n%s", str);
    return 0;
}
