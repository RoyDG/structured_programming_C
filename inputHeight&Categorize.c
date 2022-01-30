#include <stdio.h>


int main()
{
    float height;
    printf("height of a person: ");
    scanf("%f", &height);

    if (height < 150.0){
        printf("The person is Dwarf. \n");
    }
    else if (height >= 150.0 && height < 165.0){
        printf("The person is  average heighted. \n");
    }
    else if (height >= 165.0 && height <= 195.0){
        printf("The person is taller. \n");
    }
    else{
        printf("Abnormal height. \n");
    }
    return 0;

}
