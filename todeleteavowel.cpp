int main()
{
    char str[100];
    int i = 0;
    int l=strlen(str);
    printf("Convert lower case into upper case Char  vowel using C \n");
    printf("Please enter a string: ");
    fgets(str, 100, stdin);
    for(int i=0;i<l;i++)
    {
        if( str[i] == 'a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o' || str[i]=='u')
        {
            for(int k=i;k<l;k++){
                str[k]=str[k+1];
            }
            i--;
            l--;
        }
        
    }
    
    printf("Vowel after removing a vowel from string :%s",str);
    

    
    return 0;
}
