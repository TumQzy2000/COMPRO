#include <stdio.h>
#include <conio.h>

char choice;
char select;
char name[100];
float C,F,V,I,R;

main()
{
    // Function enter to program //
    printf("Do you want to continue? (y/n): ");
    choice = getche();

    if(choice == 'y')
    {
        printf("\nLoading next level...\n");
        printf("Enter Your Name : ");
        scanf("%s", name); // ตัด & ออก (สำหรับ string ไม่ต้องใส่ & หน้าตัวแปร)
        printf("Hi %s Welcome To Program\n", name);

        // --- ส่วนที่เปลี่ยนมาใช้ switch case --- //
        printf("Program 1 : C to F\n");
        printf("Program 2 : Resistor\n");
        printf("Choose the program : ");
        select = getche();

        switch(select)
        {
            case '1': // กรณีเลือก 1
                printf("\nWelcome to C to F\n");
                printf("Enter Your C : ");
                scanf("%f", &C);
                F = (1.8 * C) + 32;
                printf("F result %.3f", F);
                break; // ต้องมี break เพื่อไม่ให้ไหลไปทำเคสอื่น

            case '2': // กรณีเลือก 2
                printf("\nWelcome to Resistor\n");
                printf("Enter Your V : ");
                scanf("%f", &V);
                printf("Enter Your I : ");
                scanf("%f", &I);
                R = V / I;
                printf("R result %.3f", R);
                break; // ต้องมี break

            default: // กรณีพิมพ์นอกเหนือจาก 1 หรือ 2
                printf("\nError: Invalid Selection");
                break;
        }
        // ------------------------------------ //

        // Function exit or stay program //
        printf("\nDo you want to exit program? (y/n): \n");
        choice = getch();

        if (choice == 'y')
        {
            printf("\nExit program.\n");
            printf("Goodbye %s\n", name);
        }
        else if (choice == 'n')
        {
            printf ("You can stay in program\n");
        }
    }
    else
    {
        // กรณีตอบ n ตั้งแต่แรก
        printf("\nProgram Terminated.\n");
    }
}
