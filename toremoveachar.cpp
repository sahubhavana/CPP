int main() {
    char str[50];
    char c;
    int found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character: ");
    scanf(" %c", &c);   // SPACE before %c is VERY IMPORTANT

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            found = 1;
            for(int j=i;str[j]!='\0';j++){
                str[j]=str[j+1];
            }
            break;
        }
    }

    if (found)
        printf("Element found\n");
    else
        printf("Element not found\n");
    for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }

    return 0;
}
