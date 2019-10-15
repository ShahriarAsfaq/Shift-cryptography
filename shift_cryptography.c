#include<stdio.h>
#include<math.h>
#include<string.h>
main()
{
    int k;
    printf("Enter the key: \n");
    scanf("%d",&k);
    int p,i;
    char a[100],b[100];
    printf("Enter normal text: ");
    scanf("%s",a);
    printf("The encrypted text is: ");
    for (i=0;i<strlen(a);i++){
        if(a[i]>='A'&&a[i]<='Z'){
            p=(a[i]-64+k)%26;
            if(p==0){printf("Z");}
            else{printf("%c",p+64);}
        }
        else if(a[i]>='a'&&a[i]<='z'){
            p=(a[i]-96+k)%26;
            if(p==0){printf("z");}
            else{printf("%c",p+96);}

        }
        else {printf("%c",a[i]);}



}
printf("\nEnter an encrypt text: ");
scanf("%s",b);
printf("The decrypted text is: ");
    for (i=0;i<strlen(b);i++){
        if(b[i]>='A'&&b[i]<='Z'){
            p=(b[i]-64-k)%26;
            if(p<=0){p=26+p;}
            if(p==0){printf("Z");}

            else {printf("%c",p+64);}
        }
        else if(b[i]>='a'&&b[i]<='z'){
            p=(b[i]-96-k)%26;
            if(p<=0){p=26+p;}
            if(p==0){printf("z");}

            else{printf("%c",p+96);}

        }
        else {printf("%c",b[i]);}
}
}
