int main() {
    char str[100];
    char c;


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    printf("Enter a character: ");
    scanf(" %c", &c);   // SPACE before %c is VERY IMPORTANT

    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            str[i]=c;
        }
    }
    for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }
}
