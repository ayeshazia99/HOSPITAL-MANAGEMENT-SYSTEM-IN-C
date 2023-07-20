#include<stdio.h>
#include<windows.h>
#include"mmsystem.h"
#include<string.h>
void teacher();
int student();
void classes();
void direction();
void assignment();
void course_details();
void attendance();
void free_slots();
void quiz();
struct students{
	char attend[5];
};
int main()
{
	int choice;
	printf("\t\t<><><><><><><><><><><><><><><><><><><>\n\n");
    printf("\t\tWelcome To Timetable Management System\n\n");
    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/1.wav", NULL, SND_FILENAME);
	printf("\t\t<><><><><><><><><><><><><><><><><><><>\n\n\n"); 
    printf("\t\t\tPick your choice:\n");
    printf("\t\t\t 1-Teacher(1) \n\t\t\t 2-Student(2) \n\t\t\t 3-Exit(3)");
    printf("\n\t\tEnter 1 for teacher, Enter 2 for student,\n\t\t\t Enter 3 to exit\n");
    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/teacher.wav", NULL, SND_FILENAME);
    printf("\n\t\t\tEnter your choice: ");
    //PlaySound("C:/Users/Ejaz/Desktop//audio-files/choice.wav", NULL, SND_FILENAME);     
    scanf("%d", &choice);
    printf("\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n");
    switch(choice)
    {
    	case 1:{
		   teacher();
    	   break;
        }
    	case 2:{
    		student();
			break;
		}
    	case 3:{
    		system("CLS");
			printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
			//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);  
			printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
			break;
		}
	}
}
int student()
{
	system("CLS");
	int num1;
	printf("\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n");
    printf("\t\t\t What do you want to know about?\n\t\t\t         Enter(1, 2,or 3)");
    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/What do you want to know about.wav", NULL, SND_FILENAME);
    printf("\n\n\t\t\t\t1. Classes \n\t\t\t\t2. Upcoming assignments/quizes \n\t\t\t\t3. Course Details");
	printf("\n\n\n\t\t\tEnter your choice: ");  
	//PlaySound("C:/Users/Ejaz/Desktop//audio-files/choice.wav", NULL, SND_FILENAME);
	scanf("%d", &num1);
	switch(num1)
	{
		case 1:{
			classes();
			break;
		}
		case 2:{
			assignment();
			break;
		}
		case 3:{
			course_details();
			break;
	    }
	}	
}
void classes()
{
	system("CLS");
	int i, j;
	int var1, var2, var3;
	char day[15];
	int Time[8] = { 8,9,10,11,12,2,3,4 };
    char Monday[8][15] = { "Physics", "Calculus", "IRS", "Break", "Programming", "ICT", "ICT", "ICT" };
    char Tuesday[8][15] = { "English", "Break", "Calculus", "Physics", "Break", "Programming", "Programming", "Programming"};
    char Wednesday[8][15] = { "Physics", "IRS", "English", "Break", "Programming", "Calculus", "Calculus", "ICT" };
    char Thursday[8][15] = { "Calculus", "Physics", "Physics", "Break", "IRS", "English", "Programming", "ICT" };
    char Friday[8][15] = { "ICT", "Calculus", "Break", "Calculus", "IRS", "English", "Programming", "Physics" };
    char Saturday[8][15] = { "Physics", "Break", "Programming", "IRS", "English", "IRS", "Calculus", "ICT" };
    printf("\n\n\n\t\t\t<><><><><> CLASSES <><><><><>\n\n");
	printf("\n\t\t\t* Enter the time of class: ");
	//PlaySound("C:/Users/Ejaz/Desktop/audio-files/enter the time of class.wav", NULL, SND_FILENAME);
	scanf("%d", &var1);
	
	switch(var1)
	{
	    case 8:
	    {
		    fflush(stdin);
			printf("\t\t\t* Enter the day of the class: ");
			//PlaySound("C:/Users/Ejaz/Desktop/audio-files/enter the day of class.wav", NULL, SND_FILENAME);
			scanf("%s", &day);
		    var2 = strlen(day);
            if(strlen(day)==6)
            {
                if(day[1]=='o'){
                system("CLS");
                printf("\n\n\n\t\t    <><><><><> MONDAY <><><><><>\n\n");
                printf("\t\t\t* Monday at 8 AM:\n ");
                printf("\t\t\t* Class = ");
                fflush(stdin);
                for(i=0;i<=7;i++)
                    printf("%c", Monday[0][i]);
                printf("\n\t\t\t* Classroom = CR-4");
                printf("\n\t\t\t* Course instructor = Sir Waqar Ahmed");
                direction();
			}
                else{
                system("CLS");
                printf("\n\n\n\t\t     <><><><><> FRIDAY <><><><><>\n\n");
                printf("\t\t\t* Friday at 8 AM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<7;i++)
                    printf("%c", Friday[0][i]);
                printf("\n\t\t\t* Classroom = LAB-4");
				printf("\n\t\t\t* Course instructor = Miss Fizza Aqeel");
				direction();
            }
            }
            if(strlen(day)==7){
            system("CLS");
            printf("\n\n\n\t\t     <><><><><> TUESDAY <><><><><>\n\n");
            printf("\t\t\t* Tuesday at 8 AM:\n ");
            printf("\t\t\t* Class = ");
            for(i=0;i<8;i++)
                printf("%c", Tuesday[0][i]);
            printf("\n\t\t\t* Classroom = CR-7");
			printf("\n\t\t\t* Course instructor = Miss Nazia Imam");
			direction();
            }
            if(strlen(day)==9){
            system("CLS");
            printf("\n\n\n\t\t     <><><><><> WEDNESDAY <><><><><>\n\n");
            printf("\t\t\t* Wednesday at 8 AM:\n ");
            printf("\t\t\t* Class = ");
            for(i=0;i<10;i++)
                printf("%c", Wednesday[0][i]);
            printf("\n\t\t\t* Classroom = CR-4");
            printf("\n\t\t\t* Course instructor = Sir Waqar Ahmed");
            direction();
            }
            if(strlen(day)==8)
            {
                if(day[1]=='h'){
                system("CLS");
				printf("\n\n\n\t\t      <><><><><> THURSDAY <><><><><>\n\n");
                printf("\n\n\n\t\t\t* Thursday at 8 AM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<9;i++)
                    printf("%c", Thursday[0][i]);
                printf("\n\t\t\t* Classroom = E-3");
                printf("\n\t\t\t* Course instructor = Sir Jammil Usmani");
                direction();
			    }           
                else{
                system("CLS");
                printf("\n\n\n\t\t      <><><><><> SATURDAY <><><><><>\n\n");
				printf("\t\t\t* Saturday at 8 AM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<9;i++)
                    printf("%c", Saturday[0][i]);
                printf("\n\t\t\t* Classroom = LAB-10");
                printf("\n\t\t\t* Course instructor = Sir Waqar Ahmed");
                direction();
			    }
            }
            break;
        }
        case 9:
        {
            printf("\t\t\t* Enter the day of the class: ");
            //PlaySound("C:/Users/Ejaz/Desktop/audio-files/enter the day of class.wav", NULL, SND_FILENAME);
        	fflush(stdin);
			scanf("%s", &day);
		    var2 = strlen(day);
            if(strlen(day)==6)
			{
                if(day[1]=='o'){
                	system("CLS");
                printf("\n\n\n\t\t    <><><><><> MONDAY <><><><><>\n\n");
                printf("\t\t\t* Monday at 9 AM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<9;i++)
                    printf("%c", Monday[1][i]);
                printf("\n\t\t\t* Classroom = CR-16");
                printf("\n\t\t\t* Course instructor = Sir Jamil Usmani");
                direction();
			}
                else{
                	system("CLS");
                printf("\n\n\n\t\t     <><><><><> FRIDAY <><><><><>\n\n");
                printf("\t\t\t* Friday at 9 AM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<9;i++)
                    printf("%c", Friday[1][i]);
                printf("\n\t\t\t* Classroom = E-2");
                printf("\n\t\t\t* Course instructor = Sir Jamil Usmani");
                direction();
                }
            }
            if(strlen(day)==7){
            	system("CLS");
            printf("\n\n\n\t\t     <><><><><> TUESDAY <><><><><>\n\n");
            printf("\t\t\t* Tuesday at 9 AM:\n ");
            printf("\t\t\t* Class = ");
            for(i=0;i<8;i++)
                printf("%c", Tuesday[1][i]);
            printf("\n\t\t\t* Classroom = ---");
            printf("\n\t\t\t* Course instructor = ---");
            int x;
            printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
            //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop//audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
						break;
					}
            }
            if(strlen(day)==9){
            system("CLS");
            printf("\n\n\n\t\t     <><><><><> WEDNESDAY <><><><><>\n\n");
            printf("\t\t\t* Wednesday at 9 AM:\n ");
            printf("\t\t\t* Class = ");
            for(i=0;i<10;i++)
                printf("%c", Wednesday[1][i]);
            printf("\n\t\t\t* Classroom = CR-7");
            printf("\n\t\t\t* Course instructor = Dr Muhammad Shehzad Shaikh");
            direction();
            }
            if(strlen(day)==8)
            {
                if(day[1]=='h'){
                system("CLS");
				printf("\n\n\n\t\t      <><><><><> THURSDAY <><><><><>\n\n");
                printf("\t\t\t* Thursday at 9 AM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<9;i++)
                    printf("%c", Thursday[1][i]);
                printf("\n\t\t\t* Classroom = E-4");
                printf("\n\t\t\t* Course instructor = Sir Waqar Ahmed");
                direction();
			    }           
                else{
                system("CLS");
                printf("\n\n\n\t\t      <><><><><> SATURDAY <><><><><>\n\n");
                printf("\t\t\t* Saturday at 9 AM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<9;i++)
                    printf("%c", Saturday[1][i]);
                printf("\n\t\t\t* Classroom = ---");
                printf("\n\t\t\t* Course instructor = ---");
			    int x;
                printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop//audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
						break;
					}
                }
            break;
        }
        case 10:
	    {
            printf("\t\t\t* Enter the day of the class: ");
            //PlaySound("C:/Users/Ejaz/Desktop/audio-files/enter the day of class.wav", NULL, SND_FILENAME);
			fflush(stdin);
			scanf("%s", &day);
		    var2 = strlen(day);
            if(strlen(day)==6)
            {
                if(day[1]=='o'){
                	system("CLS");
                printf("\n\n\n\t\t    <><><><><> MONDAY <><><><><>\n\n");
                printf("\t\t\t* Monday at 10 AM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<7;i++)
                    printf("%c", Monday[2][i]);
                printf("\n\t\t\t* Classroom = E-4");
                printf("\n\t\t\t* Course instructor = Dr Muhammad Shehzad Shaikh");
                direction();
			    }
                else{
                	system("CLS");
                printf("\n\n\n\t\t     <><><><><> FRIDAY <><><><><>\n\n");
                printf("\t\t\t* Friday at 10 AM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<7;i++)
                    printf("%c", Friday[2][i]);
                printf("\n\t\t\t* Classroom = ---");
                printf("\n\t\t\t* Course instructor = ---");
                int x;
                printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop//audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					    break;
					}
                }
            }
            if(strlen(day)==7){
            	system("CLS");
            printf("\n\n\n\t\t     <><><><><> TUESDAY <><><><><>\n\n");
            printf("\t\t\t* Tuesday at 10 AM:\n ");
            printf("\t\t\t* Class = ");
            for(i=0;i<9;i++)
                printf("%c", Tuesday[2][i]);
            printf("\n\t\t\t* Classroom = CR-16");
            printf("\n\t\t\t* Course instructor = Sir Jammil Usmani");
            direction();
            }
            if(strlen(day)==9){
            system("CLS");
            printf("\n\n\n\t\t     <><><><><> WEDNESDAY <><><><><>\n\n");
            printf("\t\t\t* Wednesday at 10 AM:\n ");
            printf("\t\t\t* Class = ");
            for(i=0;i<10;i++)
                printf("%c", Wednesday[2][i]);
            printf("\n\t\t\t* Classroom = E-3");
            printf("\n\t\t\t* Course instructor = Miss Nazia Imam");
            direction();
            }
            if(strlen(day)==8)
            {
                if(day[1]=='h'){
                system("CLS");
				printf("\n\n\n\t\t      <><><><><> THURSDAY <><><><><>\n\n");
                printf("\t\t\t* Thursday at 10 AM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<9;i++)
                    printf("%c", Thursday[2][i]);
                printf("\n\t\t\t* Classroom = CR-11");
                printf("\n\t\t\t* Course instructor = Sir Waqar Ahmed");
                direction();
			    }           
                else{
                system("CLS");
                printf("\n\n\n\t\t      <><><><><> SATURDAY <><><><><>\n\n");
                printf("\t\t\t* Saturday at 10 AM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<12;i++)
                    printf("%c", Saturday[2][i]);
                printf("\n\t\t\t* Classroom = CR-4");
                printf("\n\t\t\t* Course instructor = Sir Muhammad Shehzad");
                direction();
			    }
            }
            break;
	    }
	    case 11:
	    {
            printf("\t\t\t* Enter the day of the class: ");
            //PlaySound("C:/Users/Ejaz/Desktop/audio-files/enter the day of class.wav", NULL, SND_FILENAME);
		    fflush(stdin);
			scanf("%s", &day);
		    var2 = strlen(day);
            if(strlen(day)==6)
            {
                if(day[1]=='o'){
                	system("CLS");
                printf("\n\n\n\t\t    <><><><><> MONDAY <><><><><>\n\n");
                printf("\t\t\t* Monday at 11 AM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<7;i++)
                    printf("%c", Monday[3][i]);
                printf("\n\t\t\t* Classroom = ---");
                printf("\n\t\t\t* Course instructor = ---");
                int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop//audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					    break;
					}
			    }
                else{
                	system("CLS");
                printf("\n\n\n\t\t     <><><><><> FRIDAY <><><><><>\n\n");
                printf("\t\t\t* Friday at 11 AM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<9;i++)
                   printf("%c", Friday[3][i]);
                printf("\n\t\t\t* Classroom = CR-7");
                printf("\n\t\t\t* Course instructor = Sir Jamil Usmani");
                direction();
                }
            }
            if(strlen(day)==7){
            	system("CLS");
            printf("\n\n\n\t\t     <><><><><> TUESDAY <><><><><>\n\n");
            printf("\t\t\t* Tuesday at 11 AM:\n ");
            printf("\t\t\t* Class = ");
            for(i=0;i<8;i++)
               printf("%c", Tuesday[3][i]);
            printf("\n\t\t\t* Classroom = E-4");
            printf("\n\t\t\t* Course instructor = Sir Waqar Ahmed");
            direction();
            }
            if(strlen(day)==9){
            system("CLS");
            printf("\n\n\n\t\t     <><><><><> WEDNESDAY <><><><><>\n\n");
            printf("\t\t\t* Wednesday at 11 AM:\n ");
            printf("\t\t\t* Class = ");
            for(i=0;i<10;i++)
                printf("%c", Wednesday[3][i]);
            printf("\n\t\t\t* Classroom = ---");
            printf("\n\t\t\t* Course instructor = ---");
            int x;
            printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
            //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop//audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					    break;
					}
		    }
		    if(strlen(day)==8)
            {
                if(day[1]=='h'){
                system("CLS");
				printf("\n\n\n\t\t      <><><><><> THURSDAY <><><><><>\n\n");
                printf("\t\t\t* Thursday at 11 AM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<9;i++)
                   printf("%c", Thursday[3][i]);
                printf("\n\t\t\t* Classroom = ---");
                printf("\n\t\t\t* Course instructor = ---");
			    int x;
                printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop//audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
				}           
                else{
                system("CLS");
                printf("\n\n\n\t\t      <><><><><> SATURDAY <><><><><>\n\n");
                printf("\t\t\t* Saturday at 11 AM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<9;i++)
                    printf("%c", Saturday[3][i]);
                printf("\n\t\t\t* Classroom = CR-4");
                printf("\n\t\t\t* Course instructor = Dr Muhammad Shehzad Shaikh");
                direction();
			    }
            }
            break;
        }
	    case 12:
	    {
            printf("\t\t\t* Enter the day of the class: ");
			//PlaySound("C:/Users/Ejaz/Desktop/audio-files/enter the day of class.wav", NULL, SND_FILENAME);
			fflush(stdin);
			scanf("%s", &day);
		    var2 = strlen(day);
            if(strlen(day)==6)
            {
            	if(day[1]=='o'){
            		system("CLS");
                printf("\n\n\n\t\t    <><><><><> MONDAY <><><><><>\n\n");
                printf("\t\t\t* Monday at 12 PM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<12;i++)
                    printf("%c", Monday[4][i]);
                printf("\n\t\t\t* Classroom = CR-11");
                printf("\n\t\t\t* Course instructor = Sir Muhammad Shehzad");
                direction();
			    }
                else{
                	system("CLS");
                printf("\n\n\n\t\t     <><><><><> FRIDAY <><><><><>\n\n");
                printf("\t\t\t* Friday at 12 PM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<7;i++)
                   printf("%c", Friday[4][i]);
                printf("\n\t\t\t* Classroom = E-4");
                printf("\n\t\t\t* Course instructor = Dr Muhammad Shehzad Shaikh");
                direction();
                }
            }
            if(strlen(day)==7){
            system("CLS");
            printf("\n\n\n\t\t     <><><><><> TUESDAY <><><><><>\n\n");
            printf("\t\t\t* Tuesday at 12 PM:\n ");
            printf("\t\t\t* Class = ");
            for(i=0;i<8;i++)
               printf("%c", Tuesday[4][i]);
            printf("\n\t\t\t* Classroom = ---");
            printf("\n\t\t\t* Course instructor = ---");
            int x;
            printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
            //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop//audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
						break;
					}
			}
            if(strlen(day)==9){
            system("CLS");
            printf("\n\n\n\t\t     <><><><><> WEDNESDAY <><><><><>\n\n");
            printf("\t\t\t* Wednesday at 12 PM:\n ");
            printf("\t\t\t* Class = ");
            for(i=0;i<12;i++)
                printf("%c", Wednesday[4][i]);
            printf("\n\t\t\t* Classroom = E-6");
            printf("\n\t\t\t* Course instructor = Sir Muhammad Shehzad");
            direction();
            }
            if(strlen(day)==8)
            {
                if(day[1]=='h'){
                system("CLS");
				printf("\n\n\n\t\t      <><><><><> THURSDAY <><><><><>\n\n");
                printf("\t\t\t* Thursday at 12 PM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<9;i++)
                   printf("%c", Thursday[4][i]);
                printf("\n\t\t\t* Classroom = CR-7");
                printf("\n\t\t\t* Course instructor = Dr Muhammad Shehzad Shaikh");
                direction();
			    }           
                else{
                system("CLS");
                printf("\n\n\n\t\t      <><><><><> SATURDAY <><><><><>\n\n");
                printf("\t\t\t* Saturday at 12 PM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<9;i++)
                    printf("%c", Saturday[4][i]);
                printf("\n\t\t\t* Classroom = CR-4");
                printf("\n\t\t\t* Course instructor = Miss Nazia Imam");
                direction();
			    }
            }
            break;
        }
        case 1:
		{
        	printf("\t\t\t* Enter the day of the class: ");
        	//PlaySound("C:/Users/Ejaz/Desktop/audio-files/enter the day of class.wav", NULL, SND_FILENAME);
		    fflush(stdin);
			scanf("%s", &day);
		    var2 = strlen(day);
		    system("CLS");
            printf("\n\n\n\t\t     <><><><><> %s <><><><><>\n\n", day);
            printf("\t\t\t* %s at 1 PM:\n ", day);
            printf("\t\t\t* Class = ");
        	for(i=0;i<9;i++)
                    printf("%c", Saturday[1][i]);
            printf("\n\t\t\t* Classroom = ---");
            printf("\n\t\t\t* Course instructor = ---");
			int x;
            printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
            //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop//audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
			break;
		}
	    case 2:
	    {
            printf("\t\t\t* Enter the day of the class: ");
            //PlaySound("C:/Users/Ejaz/Desktop/audio-files/enter the day of class.wav", NULL, SND_FILENAME);
		    fflush(stdin);
			scanf("%s", &day);
		    var2 = strlen(day);
            if(strlen(day)==6)
            {
            	if(day[1]=='o'){
            		system("CLS");
                printf("\n\n\n\t\t    <><><><><> MONDAY <><><><><>\n\n");
                printf("\t\t\t* Monday at 2 PM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<7;i++)
                    printf("%c", Monday[5][i]);
                printf("\n\t\t\t* Classroom = LAB-10");
                printf("\n\t\t\t* Course instructor = Miss Fizza Aqeel");
                direction();
			    }
                else{
                	system("CLS");
                printf("\n\n\n\t\t     <><><><><> FRIDAY <><><><><>\n\n");
                printf("\t\t\t* Friday at 2 PM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<7;i++)
                   printf("\t\t\t%c", Friday[5][i]);
                printf("\n\t\t\t* Classroom = E-4");
                printf("\n\t\t\t* Course instructor = Miss Nazia Imam");
                direction();
                }
            }
            if(strlen(day)==7){
            	system("CLS");
            printf("\n\n\n\t\t     <><><><><> TUESDAY <><><><><>\n\n");
            printf("\t\t\t* Tuesday at 2 PM:\n ");
            printf("\t\t\t* Class = ");
            for(i=0;i<12;i++)
               printf("%c", Tuesday[5][i]);
            printf("\n\t\t\t* Classroom = CR-4");
            printf("\n\t\t\t* Course instructor = Sir Muhammad Shehzad");
            direction();
            }
            if(strlen(day)==9){
            system("CLS");
            printf("\n\n\n\t\t     <><><><><> WEDNESDAY <><><><><>\n\n");
            printf("\t\t\t* Wednesday at 2 PM:\n ");
            printf("\t\t\t* Class = ");
            for(i=0;i<10;i++)
                printf("%c", Wednesday[5][i]);
            printf("\n\t\t\t* Classroom = E-3");
            printf("\n\t\t\t* Course instructor = Sir Jamil Usmani");
            direction();
            }
            if(strlen(day)==8)
            {
                if(day[1]=='h'){
                system("CLS");
				printf("\n\n\n\t\t      <><><><><> THURSDAY <><><><><>\n\n");
                printf("\t\t\t* Thursday at 2 PM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<9;i++)
                   printf("%c", Thursday[5][i]);
                printf("\n\t\t\t* Classroom = CR-11");
                printf("\n\t\t\t* Course instructor = Miss Nazia Imam");
                direction();
			    }           
                else{
                system("CLS");
                printf("\n\n\n\t\t      <><><><><> SATURDAY <><><><><>\n\n");
                printf("\t\t\t* Saturday at 2 PM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<9;i++)
                    printf("%c", Saturday[5][i]);
                printf("\n\t\t\t* Classroom = CR-16");
                printf("\n\t\t\t* Course instructor = Dr Muhammad Shehzad Shaikh");
                direction();
			    }
            }
            break;
        }     
	    case 3:
	    {
            printf("\t\t\t* Enter the day of the class: ");
            //PlaySound("C:/Users/Ejaz/Desktop/audio-files/enter the day of class.wav", NULL, SND_FILENAME);
		    fflush(stdin);
			scanf("%s", &day);
		    var2 = strlen(day);
            if(strlen(day)==6)
            {
            	if(day[1]=='o'){
            		system("CLS");
                printf("\n\n\n\t\t    <><><><><> MONDAY <><><><><>\n\n");
                printf("\t\t\t* Monday at 3 PM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<7;i++)
                    printf("%c", Monday[6][i]);
                printf("\n\t\t\t* Classroom = LAB-4");
                printf("\n\t\t\t* Course instructor = Miss Fizza Aqeel");
                direction();
			    }
                else{
                	system("CLS");
                printf("\n\n\n\t\t     <><><><><> FRIDAY <><><><><>\n\n");
                printf("\t\t\t* Friday at 3 PM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<12;i++)
                   printf("%c", Friday[6][i]);
                printf("\n\t\t\t* Classroom = CR-4");
                printf("\n\t\t\t* Course instructor = Sir Muhammad Shehzad");
                direction();
                }
            }
            if(strlen(day)==7){
            	system("CLS");
            printf("\t\t\t* Tuesday at 3 PM:\n ");
            printf("\t\t\t* Class = ");
            for(i=0;i<12;i++)
               printf("%c", Tuesday[6][i]);
            printf("\n\t\t\t* Classroom = CR-7");
            printf("\n\t\t\t* Course instructor = Sir Muhammad Shehzad");
            direction();
            }
            if(strlen(day)==9){
            system("CLS");
            printf("\n\n\n\t\t     <><><><><> WEDNESDAY <><><><><>\n\n");
            printf("\t\t\t* Wednesday at 3 PM:\n ");
            printf("\t\t\t* Class = ");
            for(i=0;i<10;i++)
                printf("%c", Wednesday[6][i]);
            printf("\n\t\t\t* Classroom = E-4");
            printf("\n\t\t\t* Course instructor = Sir Jamil Usmani");
            direction();
            }
            if(strlen(day)==8)
            {
                if(day[1]=='h'){
                system("CLS");
				printf("\n\n\n\t\t      <><><><><> THURSDAY <><><><><>\n\n");
                printf("\t\t\t* Thursday at 3 PM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<12;i++)
                   printf("%c", Thursday[6][i]);
                printf("\n\t\t\t* Classroom = CR-16");
                printf("\n\t\t\t* Course instructor = Sir Muhammad Shehzad");
                direction();
			    }           
                else{
                system("CLS");
                printf("\n\n\n\t\t      <><><><><> SATURDAY <><><><><>\n\n");
                printf("\t\t\t* Saturday at 3 PM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<9;i++)
                    printf("%c", Saturday[6][i]);
                printf("\n\t\t\t* Classroom = E-6");
                printf("\n\t\t\t* Course instructor = Sir Jamil Usmani");
                direction();
			    }
            }
            break;
        }
	    case 4:
	    {
            printf("\t\t\t* Enter the day of the class: ");
            //PlaySound("C:/Users/Ejaz/Desktop/audio-files/enter the day of class.wav", NULL, SND_FILENAME);
		    fflush(stdin);
			scanf("%s", &day);
		    var2 = strlen(day);
            if(strlen(day)==6)
            {
            	if(day[1]=='o'){
            		system("CLS");
                printf("\n\n\n\t\t    <><><><><> MONDAY <><><><><>\n\n");
                printf("\t\t\t* Monday at 4 PM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<7;i++)
                    printf("%c", Monday[7][i]);
                printf("\n\t\t\t* Classroom = LAB-10");
                printf("\n\t\t\t* Course instructor = Miss Fizza Aqeel");
                direction();
			    }
                else{
                	system("CLS");
                printf("\n\n\n\t\t     <><><><><> FRIDAY <><><><><>\n\n");
                printf("\t\t\t* Friday at 4 PM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<7;i++)
                   printf("%c", Friday[7][i]);
                printf("\n\t\t\t* Classroom = LAB-4");
                printf("\n\t\t\t* Course instructor = Sir Waqar Ahmed");
                direction();
                }
            }
            if(strlen(day)==7){
            	system("CLS");
            printf("\n\n\n\t\t     <><><><><> TUESDAY <><><><><>\n\n");
            printf("\t\t\t* Tuesday at 4 PM:\n ");
            printf("\t\t\t* Class = ");
            for(i=0;i<12;i++)
               printf("%c", Tuesday[7][i]);
            printf("\n\t\t\t* Classroom = CR-11");
            printf("\n\t\t\t* Course instructor = Sir Muhammad Shehzad");
            direction();
            }
            if(strlen(day)==9){
            system("CLS");
            printf("\n\n\n\t\t     <><><><><> WEDNESDAY <><><><><>\n\n");
            printf("\t\t\t* Wednesday at 4 PM:\n ");
            printf("\t\t\t* Class = ");
            for(i=0;i<10;i++)
                printf("%c", Wednesday[7][i]);
            printf("\n\t\t\t* Classroom = LAB-2");
            printf("\n\t\t\t* Course instructor = Miss Fizza Aqeel");
            direction();
            }
            if(strlen(day)==8)
            {
                if(day[1]=='h'){
                system("CLS");
				printf("\n\n\n\t\t      <><><><><> THURSDAY <><><><><>\n\n");
                printf("\t\t\t* Thursday at 4 PM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<9;i++)
                   printf("%c", Thursday[7][i]);
                printf("\n\t\t\t* Classroom = Lab-3");
                printf("\n\t\t\t* Course instructor = Miss Fizza Aqeel");
                direction();
			    }           
                else{
                system("CLS");
                printf("\n\n\n\t\t      <><><><><> SATURDAY <><><><><>\n\n");
                printf("\t\t\t* Saturday at 4 PM:\n ");
                printf("\t\t\t* Class = ");
                for(i=0;i<9;i++)
                    printf("%c", Saturday[7][i]);
                printf("\n\t\t\t* Classroom = LAB-10");
                printf("\n\t\t\t* Course instructor = Miss Fizza Aqeel");
                direction();
			    }
            }
            break;
        }
}}}
void direction()
{
	int num3;
	printf("\n\n\t\tDo you want to know the direction of the class?\n\t\t       Enter(1)if yes or (2)if no");
	//PlaySound("C:/Users/Ejaz/Desktop/audio-files/direct.wav", NULL, SND_FILENAME);
    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/yes.wav", NULL, SND_FILENAME);
	printf("\n\n\t\t\t1. YES\n\t\t\t2. No");
	printf("\n\n\t\tEnter your choice: ");
	//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
	scanf("%d", &num3);
	
	switch(num3)
	{
		case 1:{
			system("CLS");
			int num4;
			FILE *ptr;
			printf("\n\n\n\t\t<><><><><><> DIRECTIONS OF CLASS <><><><><><>\n\n");
			printf("\n\t\tSelect the room from the below list to know the directions.\n\n\t");
			//PlaySound("C:/Users/Ejaz/Desktop/audio-files/room.wav", NULL, SND_FILENAME);
			printf("\t1. CR-4 \t 5. E-2 \t  9. LAB-2\n \t\t2. CR-7 \t 6. E-3 \t 10. LAB-3");
			printf("\n\t\t3. CR-11 \t 7. E-4 \t 11. LAB-4 \n\t\t4. CR-16 \t 8. E-6 \t 12. LAB-10");
			printf("\n\n\t\tEnter your choice: ");
			//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
			scanf("%d", &num4);
			switch(num4)
			{
				    case 1:{
					    char ch;
					    int x;
					    system("CLS");
					    printf("\n\n\n\t\t<><><><><><> DIRECTIONS OF CLASS <><><><><><>");
					    ptr = fopen("CR-4.txt", "r");
	                    if(ptr==NULL){
		                    printf("File not opened!");
		                    exit(1);
	                    }
                        printf("\n\n\t\t     <><><><><>CLASSROOM-4<><><><><>");
                    printf("\n\n\t\t\t*");
					for(ch==getc(ptr);ch!=EOF;ch=getc(ptr))
	                {
		                if(ch=='\n')
		                    printf("\n\t\t\t* ");
		                else
		                    printf("%c", ch); 
	                }
	                fclose(ptr);
	                fflush(stdin);
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
					break;
				}
				case 2:{
					char ch;
					int x;
                    system("CLS");
					printf("\n\n\n\t\t<><><><><><> DIRECTIONS OF CLASS <><><><><><>");
					ptr = fopen("CR-7.txt", "r");
	                if(ptr==NULL){
		                printf("File not opened!");
		                exit(1);
	                }
                    printf("\n\n\t\t     <><><><><>CLASSROOM-7<><><><><>");
                    printf("\n\n\t\t\t*");
					for(ch==getc(ptr);ch!=EOF;ch=getc(ptr))
	                {
		                if(ch=='\n')
		                    printf("\n\t\t\t* ");
		                else
		                    printf("%c", ch); 
	                }
	                fclose(ptr);
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
					break;
				}
				case 3:{
					char ch;
					int x;
					system("CLS");
					printf("\n\n\n\t\t<><><><><><> DIRECTIONS OF CLASS <><><><><><>");
					ptr = fopen("CR-11.txt", "r");
	                if(ptr==NULL){
		                printf("File not opened!");
		                exit(1);
	                }
                    printf("\n\n\t\t     <><><><><>CLASSROOM-11<><><><><>");
                    printf("\n\n\t\t\t*");
					for(ch==getc(ptr);ch!=EOF;ch=getc(ptr))
	                {
		                if(ch=='\n')
		                    printf("\n\t\t\t* ");
		                else
		                    printf("%c", ch); 
	                }
	                fclose(ptr);
					fflush(stdin);
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
					break;
                }
				case 4:{
					char ch;
					int x;
					system("CLS");
					printf("\n\n\n\t\t<><><><><><> DIRECTIONS OF CLASS <><><><><><>");
					ptr = fopen("CR-16.txt", "r");
	                if(ptr==NULL){
		                printf("File not opened!");
		                exit(1);
	                }
                    printf("\n\n\t\t     <><><><><>CLASSROOM-16<><><><><>");
                    printf("\n\n\t\t\t*");
					for(ch==getc(ptr);ch!=EOF;ch=getc(ptr))
	                {
		                if(ch=='\n')
		                    printf("\n\t\t\t* ");
		                else
		                    printf("%c", ch); 
	                }
	                fclose(ptr);
					fflush(stdin);
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
					break;
				}
                case 5:{
                	char ch;
                	int x;
                	system("CLS");
					printf("\n\n\n\t\t<><><><><><> DIRECTIONS OF CLASS <><><><><><>");
					ptr = fopen("E-2.txt", "r");
	                if(ptr==NULL){
		                printf("File not opened!");
		                exit(1);
	                }
                    printf("\n\n\t\t     <><><><><>EXTENSION-2<><><><><>");
                    printf("\n\n\t\t\t*");
					for(ch==getc(ptr);ch!=EOF;ch=getc(ptr))
	                {
		                if(ch=='\n')
		                    printf("\n\t\t\t* ");
		                else
		                    printf("%c", ch); 
	                }
	                fclose(ptr);
					fflush(stdin);
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
					break;
				}
                case 6:{
				    char ch;
				    int x;
                	system("CLS");
					printf("\n\n\n\t\t<><><><><><> DIRECTIONS OF CLASS <><><><><><>");
					ptr = fopen("E-3.txt", "r");
	                if(ptr==NULL){
		                printf("File not opened!");
		                exit(1);
	                }
                    printf("\n\n\t\t     <><><><><>EXTENSION-3<><><><><>");
                    printf("\n\n\t\t\t*");
					for(ch==getc(ptr);ch!=EOF;ch=getc(ptr))
	                {
		                if(ch=='\n')
		                    printf("\n\t\t\t* ");
		                else
		                    printf("%c", ch); 
	                }
	                fclose(ptr);
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
					break;
				}	  
				case 7:{
					char ch;
					int x;
                	system("CLS");
					printf("\n\n\n\t\t<><><><><><> DIRECTIONS OF CLASS <><><><><><>");
					ptr = fopen("E-4.txt", "r");
	                if(ptr==NULL){
		                printf("File not opened!");
		                exit(1);
	                }
                    printf("\n\n\t\t     <><><><><>EXTENSION-4<><><><><>");
                    printf("\n\n\t\t\t*");
					for(ch==getc(ptr);ch!=EOF;ch=getc(ptr))
	                {
		                if(ch=='\n')
		                    printf("\n\t\t\t* ");
		                else
		                    printf("%c", ch); 
	                }
	                fclose(ptr);
					fflush(stdin);
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
					break;
				}
				case 8:{
					char ch;
					int x;
                	system("CLS");
					printf("\n\n\n\t\t<><><><><><> DIRECTIONS OF CLASS <><><><><><>");
					ptr = fopen("E-6.txt", "r");
	                if(ptr==NULL){
		                printf("File not opened!");
		                exit(1);
	                }
                    printf("\n\n\t\t     <><><><><>EXTENSION-6<><><><><>");
                    printf("\n\n\t\t\t*");
					for(ch==getc(ptr);ch!=EOF;ch=getc(ptr))
	                {
		                if(ch=='\n')
		                    printf("\n\t\t\t* ");
		                else
		                    printf("%c", ch); 
	                }
	                fclose(ptr);
					fflush(stdin);
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
					break;
				}
				case 9:{
					char ch;
					int x;
                	system("CLS");
					printf("\n\n\n\t\t<><><><><><> DIRECTIONS OF CLASS <><><><><><>");
					ptr = fopen("Lab-2.txt", "r");
	                if(ptr==NULL){
		                printf("File not opened!");
		                exit(1);
	                }
                    printf("\n\n\t\t     <><><><><>COMPUTER LAB-2<><><><><>");
                    printf("\n\n\t\t\t*");
					for(ch==getc(ptr);ch!=EOF;ch=getc(ptr))
	                {
		                if(ch=='\n')
		                    printf("\n\t\t\t* ");
		                else
		                    printf("%c", ch); 
	                }
	                fclose(ptr);
					fflush(stdin);
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
					break;
				}
				case 10:{
					char ch;
					int x;
                	system("CLS");
					printf("\n\n\n\t\t<><><><><><> DIRECTIONS OF CLASS <><><><><><>");
					ptr = fopen("Lab-3.txt", "r");
	                if(ptr==NULL){
		                printf("File not opened!");
		                exit(1);
	                }
                    printf("\n\n\t\t     <><><><><>COMPUTER LAB-3<><><><><>");
                    printf("\n\n\t\t\t*");
					for(ch==getc(ptr);ch!=EOF;ch=getc(ptr))
	                {
		                if(ch=='\n')
		                    printf("\n\t\t\t* ");
		                else
		                    printf("%c", ch); 
	                }
	                fclose(ptr);
	                fflush(stdin);
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
					break;
				}
				case 11:{
					char ch;
					int x;
                	system("CLS");
					printf("\n\n\n\t\t<><><><><><> DIRECTIONS OF CLASS <><><><><><>");
					ptr = fopen("Lab-4.txt", "r");
	                if(ptr==NULL){
		                printf("File not opened!");
		                exit(1);
	                }
                    printf("\n\n\t\t     <><><><><>COMPUTER LAB-4<><><><><>");
                    printf("\n\n\t\t\t*");
					for(ch==getc(ptr);ch!=EOF;ch=getc(ptr))
	                {
		                if(ch=='\n')
		                    printf("\n\t\t\t* ");
		                else
		                    printf("%c", ch); 
	                }
	                fclose(ptr);
	                fflush(stdin);
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
					break;
				}
				case 12:{
					char ch;
					int x;
                	system("CLS");
					printf("\n\n\n\t\t<><><><><><> DIRECTIONS OF CLASS <><><><><><>");
					ptr = fopen("Lab-10.txt", "r");
	                if(ptr==NULL){
		                printf("File not opened!");
		                exit(1);
	                }
                    printf("\n\n\t\t     <><><><><>COMPUTER LAB-10<><><><><>");
                    printf("\n\n\t\t\t*");
					for(ch==getc(ptr);ch!=EOF;ch=getc(ptr))
	                {
		                if(ch=='\n')
		                    printf("\n\t\t\t* ");
		                else
		                    printf("%c", ch); 
	                }
	                fclose(ptr);
	                fflush(stdin);
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
					break;
				}
			}
			break;
		}
		case 2:{
            fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
			break;
		}
    }
}
void assignment()
{
	system("CLS");
	int var1;
	char day[10];
	printf("\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n");
    printf("\t\t\t < UPCOMING ASSIGNMENTS/QUIZES >\n\n");
    printf("\n\t\tEnter the day: ");
    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/day.wav", NULL, SND_FILENAME);
    scanf("%s", &day);
    var1 = strlen(day);
    if(var1 == 6)
    {
    	if(day[1]=='o'){
    	int num5;
    	system("CLS");	
    	printf("\n\n\t\t\t   <><><><><>MONDAY<><><><><>\n\n");
		printf("\t\t\tOn Monday 2 assignments are due ");
    	printf("\n\n\t\t\t1. PF LAB TASK 11(Dynamic Memory Allocation) \n\t\t\t2. IRS Book Review(Medinan Period of Life of Prophet Muhmammad (S.A.W))");
        fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
		}
        else
        {
        	int num5;
        	system("CLS");
        	printf("\n\n\t\t\t   <><><><><>FRIDAY<><><><><>");
        	printf("\n\n\t\t\tOn Friday you will be having a quiz ");
        	printf("\n\n\t\t\tSUBJECT = English Composition and Comprehension");
        	printf("\n\t\t\tTIME = 3:30 to 3:50 (20 mins quiz)");
        	printf("\n\t\t\tTOPICS INCLUDED:\n\t\t\t    1. Runons \n\t\t\t    2. Modifiers \n\t\t\t    3. Parallelism");
		    fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
		}
	}
	else if(var1 == 7)
	{
		int num5;
		system("CLS");
		printf("\n\n\t\t\t   <><><><><>TUESDAY<><><><><>");
		printf("\n\n\t\t\tWoohoo, no work due soon!");
	    fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
	}
	else if(var1 == 9)
	{
		int num5;
		system("CLS");
		printf("\n\n\t\t\t   <><><><><>WEDNESDAY<><><><><>");
		printf("\n\n\t\t\tOn Wednesday only one assignment is due ");
		printf("\n\n\t\t\t* SUBJECT = ICT \n\t\t\t* TASK = Html form");
	    fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
	}
	else if(var1 == 8)
	{
		if(day[1]=='h')
		{
			int num5;
			system("CLS");
			printf("\n\n\t\t\t   <><><><><>THURSDAY<><><><><>");
			printf("\n\n\t\t\tWoohoo, no work due soon!");
			fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
		}
		else
		{
			int num5;
			system("CLS");
			printf("\n\n\t\t\t   <><><><><>SATURDAY<><><><><>");
			printf("\n\n\t\t\tOn Saturday one project submission is due");
			printf("\n\n\t\t\t* SUBJECT = Physics \n\t\t\t* Task = VPython notebook(containing source code)");
			fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
		}
	}
}
void course_details()
{
	system("CLS");
	int num2;
	printf("\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n");
    printf("\t\t\t <COURSE DETAILS >\n\n");
    printf("\t\tCHOOSE THE COURSE FROM THE BELOW LIST TO KNOW THE DETAILS\n\n");
    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/details.wav", NULL, SND_FILENAME);
    printf("\t\t\t1. Programming Fundamentals\n\t\t\t2. Calculus\n\t\t\t3. Applied Physics\n\t\t\t");
    printf("4. English composition and comprehension\n\t\t\t5. Islamic Religious Studies");
    printf("\n\n\t\tEnter your choice: ");
    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
    scanf("%d", &num2);
    switch(num2)
    {
    	case 1:{
    		int num5;
    		system("CLS");
    		printf("\n\n\n\t\t\t<><><>PROGRAMMING FUNDAMENTALS<><><>\n\n");
    		printf("\t\t\t* Course code = CS-118\n\t\t\t* Credit hours = 3 + 1\n\t\t\t* Course Instructor = Muhammad Shehzad");
    		fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
						break;
					}
            break;    
		}
		case 2:{
			int num5;
			system("CLS");
			printf("\n\n\n\t\t\t<><><>CALCULUS AND ANALYTICAL GEOMETRY<><><>\n\n");
    		printf("\t\t\t* Course code = MT-119\n\t\t\t* Credit hours = 3 + 0\n\t\t\t* Course Instructor = Muhammad Jammil Usmani");
    		fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
						break;
					}
			break;
		}
		case 3:{
			int num5;
			system("CLS");
			printf("\n\n\n\t\t\t<><><>APPLIED PHYSICS<><><>\n\n");
    		printf("\t\t\t* Course code = NS-101\n\t\t\t* Credit hours = 2 + 1\n\t\t\t* Course Instructor = Syed Waqar Ahmed");
    		fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
						break;
					}
			break;
		}
		case 4:{
			int num5;
			system("CLS");
			printf("\n\n\n\t\t<><><>ENGLISH COMPOSITION AND COMPREHENSION<><><>\n\n");
    		printf("\t\t\t* Course code = SS-150\n\t\t\t* Credit hours = 2 + 1\n\t\t\t* Course Instructor = Nazia Imam");
    		fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
						break;
					}
			break;
		}
		case 5:{
			int num5;
			system("CLS");
			printf("\n\n\n\t\t\t<><><>ISLAMIC AND RELIGIOUS STUDIES<><><>\n\n");
    		printf("\t\t\t* Course code = SS-111\n\t\t\t* Credit hours = 3\n\t\t\t* Course Instructor = Muhammad Shehzad Shaikh");
    		fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						student();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						//PlaySound("C:/Users/Ejaz/Desktop//audio-files/thanks.wav", NULL, SND_FILENAME);
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
						break;
					}
			break;
		}
	}
}


void attendance()
{
	struct students st[30];
int i,str,n;
char std,section;
             system("CLS");
		 	printf("\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n");
		 	printf("\t\t\t\tSection A\n\t\t\t\tSection B\n\t\t\t\tSection C\n\t\t\t\tSection D\n\t\t\t\tSection E\n\t\t\t\tSection F\n\n");
		 	printf("\t\t\tChoose the section to mark attendance:");
		 	//PlaySound("C:/Users/Ejaz/Desktop/audio-files/attendance.wav", NULL, SND_FILENAME);
		 	fflush(stdin);
		 	scanf("%c",&section);
		    system("CLS");
		 	printf("\n\n\t\t <><><><><><><><><><><><><><><><><><><>");
            printf("\n\t\t\t\tATTENDANCE\n");
            printf("\t\tMark P for present, Mark A for absent\n\n");
			//PlaySound("C:/Users/Ejaz/Desktop/audio-files/mark.wav", NULL, SND_FILENAME);           
			printf("Enter the class strength : ");
			//PlaySound("C:/Users/Ejaz/Desktop/audio-files/strength.wav", NULL, SND_FILENAME);
            scanf("%d",&str);
            fflush(stdin);
            FILE *fptr;
	         fptr=(fopen("student.txt","w"));
	         if(fptr==NULL) {
		        printf("file not opened!");
		        exit(1);
	              }
			for(i=0;i<str;i++){
            printf("Student %d : ",i+1);
            scanf("%s", &st[i].attend);
            fprintf(fptr,"\nStudent: %d \n Present/Absent=%s \n",i+1,st[i].attend);
            fflush(stdin);
			}
			fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						teacher();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
}

void free_slots()
{
int var5;
char day[15];
char Monday[8],Tuesday[8],Wednesday[8],Thursday[8],Friday[8],Saturday[8];
system("CLS");
printf("\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n");
printf("\n\t\t\tFREE AVAILABLE SLOTS FOR TODAY\n\n");
printf("\t\tEnter the day to find free slots available : ");
//PlaySound("C:/Users/Ejaz/Desktop/audio-files/slots.wav", NULL, SND_FILENAME);
scanf("%s",&day);
fflush(stdin);
var5 = strlen(day);
if(strlen(day)==6)
{
     if(day[1]=='o'){
     printf("\t\tYou have free slots from:\n\n\t\t 1)11 am-1 pm\n\n\t\t2)2 pm-3 pm ");}
     else{
     printf("\t\tYou have free slots from:\n\n\t\t 1)9 am-11 am\n\n\t\t2)1 pm-3 pm ");}
     fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						teacher();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
}
else if(strlen(day)==7)
{
    printf("\t\tYou have free slots from:\n\n\t\t 1)8 am-9 pm\n\n\t\t2)11 am-12 pm ");
    fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						teacher();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
}
else if(strlen(day)==9)
{
     printf("\t\tYou have free slots from:\n\n\t\t 1)11 am-1 pm\n\n\t\t2)2 pm-3pm ");
     fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						teacher();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
}

else if(strlen(day)==8)
{
     if(day[1]=='h'){
     printf("\t\tYou have free slots from:\n\n\t\t 1)1 am-2 pm\n\n\t\t2)3 pm-4pm ");
     fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						teacher();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}}
     else{
     printf("\t\tYou have free slots from:\n\n\t\t 1)12 pm-2 pm\n\n\t\t2)3 pm-4pm ");
     fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						teacher();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}}
}

}
void quiz()
{
char section;
char day[15];
char assign[10];
int i;
FILE *fp1;
fp1=fopen("record.txt","w");
if(fp1==NULL){
	printf("file not opened!");
	exit(1);
}
     system("CLS");
     printf("\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n");
     printf("\n\t\t\tPOST NEW ASSIGNMENT/QUIZ\n\n");
     printf("\t\t\t\tSection A\n\t\t\t\tSection B\n\t\t\t\tSection C\n\t\t\t\tSection D\n\t\t\t\tSection E\n\t\t\t\tSection F\n\n");
     printf("Enter the section to which you want to give quiz or assignment : ");
     //PlaySound("C:/Users/Ejaz/Desktop/audio-files/assignment.wav", NULL, SND_FILENAME);
     scanf("%c\n",&section);
     fflush(stdin);
     printf("Enter the day for which you want to post assignment/quiz : ");
     //PlaySound("C:/Users/Ejaz/Desktop/audio-files/quiz.wav", NULL, SND_FILENAME);
     scanf("%s",&day);
     fflush(stdin);
     printf("Enter assignment details\n");
     printf("Enter 0 after entering details to exit");
while(assign[i]!='0'){
scanf("%s",&assign);
fprintf(fp1,"%s ",assign);
}
     fflush(stdin);
     printf("Assignment uploaded successfully!");
     //PlaySound("C:/Users/Ejaz/Desktop/audio-files/success.wav", NULL, SND_FILENAME);
     fflush(stdin);
					int x;
                    printf("\n\n\n\n\t\t\tDo you want to know anything else?\n\t\t\t\t1.yes\n\t\t\t\t2.No");
                    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/else.wav", NULL, SND_FILENAME);
					printf("\n\n\t\t\tEnter your choice: ");
					//PlaySound("C:/Users/Ejaz/Desktop/audio-files/choice.wav", NULL, SND_FILENAME);
					scanf("%d", &x);
					if(x == 1)
					{
						teacher();
					}
					else if(x == 2)
					{
						system("CLS");
						printf("\n\n\n\n\n\n\t\t\tThank you for using time table management system!!!!");
						printf("\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\n\n\n\n\n");
					}
}
void teacher()
{
int coursenum,ch1;
     system("CLS");
     printf("\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n");
     printf("\t\t\tSelect your course from below:\n");
    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/course.wav", NULL, SND_FILENAME);
     printf("\n\t\t\t1-Programming Fundamentals(1)\n\t\t\t2-Calculus(2)\n\t\t\t3-Physics(3)\n\t\t\t4-English(4)\n\t\t\t5-Islamiat(5)\n");
     printf("\n\t\t\tEnter course number:");
     scanf("%d",&coursenum);
     system("CLS");
     printf("\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n");
     printf("\n\t\t\t1-Mark Attendance(1)\n\t\t\t2-Check free slots available(2)\n\t\t\t3-Post an assignment/Quiz(3)\n\n");
     printf("\t\t\t What do you want to do?\n\n ");
    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/do.wav", NULL, SND_FILENAME);
     printf("\t\t\t(Enter 1,2 or 3):");
    //PlaySound("C:/Users/Ejaz/Desktop/audio-files/one.wav", NULL, SND_FILENAME);
     scanf("%d",&ch1);
     switch (ch1) 
		 {
		 	case 1:
		 	attendance();
		 	break;
	        case 2:
	        free_slots();
	        break;
	        case 3:
	        quiz();
	        break;
    
		}
}

