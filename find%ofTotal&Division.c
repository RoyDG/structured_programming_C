#include <stdio.h>


int main(){

    int roll,phy,chem,com,total,per;
    char name[20];

    printf("Input the Roll Number of the student: ");
    scanf("%d",&roll);

    printf("\nInput the Name of the Student: ");
    scanf("%s",&name);

    printf("Input the marks of Physics, Chemistry and Computer Application: ");
    scanf("%d%d%d",&phy,&chem,&com);

    total = phy+chem+com;
    per = total/3;

        if(per >= 80 && per <= 100){
            printf("Roll number: %d\n", roll);
            printf("Name of Student: %s\n", name);
            printf("Marks in Physics: %d\n",phy);
            printf("Marks in Chemistry: %d\n",chem);
            printf("Marks in Computer: %d\n",com);
            printf("\nTotal marks: %d\n", total);
            printf("Percentage: %d\n", per);
            printf("Grade = A+");
        }
        else if(per >= 70 && per <= 79){
            printf("Roll number: %d\n", roll);
            printf("Name of Student: %s\n", name);
            printf("Marks in Physics: %d\n",phy);
            printf("Marks in Chemistry: %d\n",chem);
            printf("Marks in Computer: %d\n",com);
            printf("\nTotal marks: %d\n", total);
            printf("Percentage: %d\n", per);
            printf("Grade = A");
        }
        else if(per >= 60 && per <= 69){
            printf("Roll number: %d\n", roll);
            printf("Name of Student: %s\n", name);
            printf("Marks in Physics: %d\n",phy);
            printf("Marks in Chemistry: %d\n",chem);
            printf("Marks in Computer: %d\n",com);
            printf("\nTotal marks: %d\n", total);
            printf("Percentage: %d\n", per);
            printf("Grade = A-");
        }
        else if(per >= 50 && per <= 59){
            printf("Roll number: %d\n", roll);
            printf("Name of Student: %s\n", name);
            printf("Marks in Physics: %d\n",phy);
            printf("Marks in Chemistry: %d\n",chem);
            printf("Marks in Computer: %d\n",com);
            printf("\nTotal marks: %d\n", total);
            printf("Percentage: %d\n", per);
            printf("Grade = B");
        }
        else if(per >= 40 && per <= 49){
            printf("Roll number: %d\n", roll);
            printf("Name of Student: %s\n", name);
            printf("Marks in Physics: %d\n",phy);
            printf("Marks in Chemistry: %d\n",chem);
            printf("Marks in Computer: %d\n",com);
            printf("\nTotal marks: %d\n", total);
            printf("Percentage: %d\n", per);
            printf("Grade = C");
        }
        else if(per >= 33 && per <= 39){
            printf("Roll number: %d\n", roll);
            printf("Name of Student: %s\n", name);
            printf("Marks in Physics: %d\n",phy);
            printf("Marks in Chemistry: %d\n",chem);
            printf("Marks in Computer: %d\n",com);
            printf("\nTotal marks: %d\n", total);
            printf("Percentage: %d\n", per);
            printf("Grade = D");
        }
        else{
            printf("Roll number: %d\n", roll);
            printf("Name of Student: %s\n", name);
            printf("Marks in Physics: %d\n",phy);
            printf("Marks in Chemistry: %d\n",chem);
            printf("Marks in Computer: %d\n",com);
            printf("\nTotal marks: %d\n", total);
            printf("Percentage: %d\n", per);
            printf("Grade = F");
        }

    return 0;
}
