#include<stdio.h> 
#include<stdlib.h> 
 
struct cadname 
{ 
    char cname[50]; 
}c1[10]; 
int votescount1=0,votescount2=0,votescount3=0,votescount4=0,votescount5=0,votescount6=0; 
int votescount7=0,votescount8=0,votescount9=0,votescount10=0,no,year; 
void caname() 
{ 
    int i; 
    n: 
    printf("Enter the numer of candidates (Min-2 and Max-10)\n"); 
    scanf("%d",&no); 
    if(no!=2 && no!=3 && no!=4 && no!=5 && no!=6 && no!=7 && no!=8 && no!=9 && no!=10) 
    { 
        printf("\n\n!!The number candidates are not prescribed!!\n\n"); 
        goto n; 
    } 
    printf("Enter the names of candidates\n"); 
    for(i=0;i<no;i++) 
        scanf(" %s",&c1[i].cname); 
} 
void castevote() 
{ 
    int choice,n,i,age; 
    if(no==2) 
    { 
        printf("\nEnter the number of voters:"); 
        scanf("%d",&n); 
        for(i=1;i<=n;i++) 
        { 
            printf("\n\nEnter your age:"); 
            scanf("%d",&age); 
            if(age>=18) 
            { 
                re2: 
                printf("\n\n## please choose your Candidate ##\n\n"); 
                printf("1. %s\n",c1[0].cname); 
                printf("2. %s\n",c1[1].cname); 
                printf("3. Exit to menu\n"); 
                printf("Input your choice(1-3):"); 
                scanf("%d",&choice); 
                switch(choice) 
                { 
                    case 1:votescount1++; 
                        break; 
                    case 2:votescount2++; 
                        break; 
                    case 3:goto next; 
                    default: 
                    { 
                        printf("\nError:Wrong choice !! Please Retry"); 
                        goto re2; 
                     
                    } 
                } 
            } 
            else 
                    printf("!! Not eligible for voting !!\n"); 
        }
} 
    else if(no==3) 
    { 
        printf("\nEnter the number of voters:"); 
        scanf("%d",&n); 
        for(i=1;i<=n;i++) 
        { 
            printf("\n\nEnter your age:"); 
            scanf("%d",&age); 
            if(age>=18) 
            { 
                re3: 
                printf("\n\n## please choose your Candidate ##\n\n"); 
                printf("1. %s\n",c1[0].cname); 
                printf("2. %s\n",c1[1].cname); 
                printf("3. %s\n",c1[2].cname); 
                printf("4. Exit to menu\n"); 
                printf("Input your choice(1-4):"); 
                scanf("%d",&choice); 
                switch(choice) 
                { 
                    case 1:votescount1++; 
                        break; 
                    case 2:votescount2++; 
                        break; 
                    case 3:votescount3++; 
                        break; 
                    case 4:goto next; 
                    default: 
                    { 
                        printf("\nError:Wrong choice !! Please Retry"); 
                        goto re3; 
                     
                    } 
                } 
            } 
            else 
                    printf("!! Not eligible for voting !!\n"); 
        } 
         
    } 
    else if(no==4) 
    { 
        printf("\nEnter the number of voters:"); 
        scanf("%d",&n); 
        for(i=1;i<=n;i++) 
        {
printf("\n\nEnter your age:"); 
            scanf("%d",&age); 
            if(age>=18) 
            { 
                re4: 
                printf("\n\n## please choose your Candidate ##\n\n"); 
                printf("1. %s\n",c1[0].cname); 
                printf("2. %s\n",c1[1].cname); 
                printf("3. %s\n",c1[2].cname); 
                printf("4. %s\n",c1[3].cname); 
                printf("5. Exit to menu\n"); 
                printf("Input your choice(1-5):"); 
                scanf("%d",&choice); 
                switch(choice) 
                { 
                    case 1:votescount1++; 
                        break; 
                    case 2:votescount2++; 
                        break; 
                    case 3:votescount3++; 
                        break; 
                    case 4:votescount4++; 
                        break; 
                    case 5:goto next; 
                    default: 
                    { 
                        printf("\nError:Wrong choice !! Please Retry"); 
                        goto re4; 
                     
                    } 
                } 
            } 
            else 
                    printf("!! Not eligible for voting !!\n"); 
        } 
         
    } 
    else if(no==5) 
    { 
        printf("\nEnter the number of voters:"); 
        scanf("%d",&n); 
        for(i=1;i<=n;i++) 
        { 
            printf("\n\nEnter your age:"); 
            scanf("%d",&age); 
            if(age>=18) 
            { 
                re5: 
                printf("\n\n## please choose your Candidate ##\n\n"); 
                printf("1. %s\n",c1[0].cname); 
                printf("2. %s\n",c1[1].cname); 
                printf("3. %s\n",c1[2].cname); 
                printf("4. %s\n",c1[3].cname); 
                printf("5. %s\n",c1[4].cname); 
                printf("6. Exit to menu\n"); 
                printf("Input your choice(1-6):"); 
                scanf("%d",&choice); 
                switch(choice) 
                { 
                    case 1:votescount1++; 
                        break; 
                    case 2:votescount2++; 
                        break; 
                    case 3:votescount3++; 
                        break; 
                    case 4:votescount4++; 
                        break; 
                    case 5:votescount5++; 
                        break; 
                    case 6:goto next; 
                    default: 
                    { 
                        printf("\nError:Wrong choice !! Please Retry"); 
                        goto re5; 
                     
                    } 
                } 
            } 
            else 
                    printf("!! Not eligible for voting !!\n"); 
        } 
         
    }
else if(no==5) 
    { 
        printf("\nEnter the number of voters:"); 
        scanf("%d",&n); 
        for(i=1;i<=n;i++) 
        { 
            printf("\n\nEnter your age:"); 
            scanf("%d",&age); 
            if(age>=18) 
            { 
                re5: 
                printf("\n\n## please choose your Candidate ##\n\n"); 
                printf("1. %s\n",c1[0].cname); 
                printf("2. %s\n",c1[1].cname); 
                printf("3. %s\n",c1[2].cname); 
                printf("4. %s\n",c1[3].cname); 
                printf("5. %s\n",c1[4].cname); 
                printf("6. Exit to menu\n"); 
                printf("Input your choice(1-6):"); 
                scanf("%d",&choice); 
                switch(choice) 
                { 
                    case 1:votescount1++; 
                        break; 
                    case 2:votescount2++; 
                        break; 
                    case 3:votescount3++; 
                        break; 
                    case 4:votescount4++; 
                        break; 
                    case 5:votescount5++; 
                        break; 
                    case 6:goto next; 
                    default: 
                    { 
                        printf("\nError:Wrong choice !! Please Retry"); 
                        goto re5; 
                     
                    } 
                } 
            } 
            else 
                    printf("!! Not eligible for voting !!\n"); 
        } 
         
    } 
    else if(no==6) 
    { 
        printf("\nEnter the number of voters:"); 
        scanf("%d",&n); 
        for(i=1;i<=n;i++) 
        { 
            printf("\n\nEnter your age:"); 
            scanf("%d",&age); 
            if(age>=18) 
            { 
                re6: 
                printf("\n\n## please choose your Candidate ##\n\n"); 
                printf("1. %s\n",c1[0].cname); 
                printf("2. %s\n",c1[1].cname); 
                printf("3. %s\n",c1[2].cname); 
                printf("4. %s\n",c1[3].cname); 
                printf("5. %s\n",c1[4].cname); 
                printf("6. %s\n",c1[5].cname); 
                printf("7. Exit to menu\n"); 
                printf("Input your choice(1-7):"); 
                scanf("%d",&choice); 
                switch(choice) 
                { 
                    case 1:votescount1++; 
                        break; 
                    case 2:votescount2++; 
                        break; 
                    case 3:votescount3++; 
                        break; 
                    case 4:votescount4++; 
                        break; 
                    case 5:votescount5++; 
                        break; 
                    case 6:votescount6++; 
                        break; 
                    case 7:goto next; 
                    default: 
                    { 
                        printf("\nError:Wrong choice !! Please Retry"); 
                        goto re6; 
                     
                    } 
                } 
            } 
            else 
                    printf("!! Not eligible for voting !!\n"); 
        }
 
    else if(no==7) 
    { 
        printf("\nEnter the number of voters:"); 
        scanf("%d",&n); 
        for(i=1;i<=n;i++) 
        { 
            printf("\n\nEnter your age:"); 
            scanf("%d",&age); 
            if(age>=18) 
            { 
                re7: 
                printf("\n\n## please choose your Candidate ##\n\n"); 
                printf("1. %s\n",c1[0].cname); 
                printf("2. %s\n",c1[1].cname); 
                printf("3. %s\n",c1[2].cname); 
                printf("4. %s\n",c1[3].cname); 
                printf("5. %s\n",c1[4].cname); 
                printf("6. %s\n",c1[5].cname); 
                printf("7. %s\n",c1[6].cname); 
                printf("8. Exit to menu\n"); 
                printf("Input your choice(1-8):"); 
                scanf("%d",&choice); 
                switch(choice) 
                { 
                    case 1:votescount1++; 
                        break; 
                    case 2:votescount2++; 
                        break; 
                    case 3:votescount3++; 
                        break; 
                    case 4:votescount4++; 
                        break; 
                    case 5:votescount5++; 
                        break; 
                    case 6:votescount6++; 
                        break; 
                    case 7:votescount7++; 
                        break; 
                    case 8:goto next; 
                    default: 
                    { 
                        printf("\nError:Wrong choice !! Please Retry"); 
                        goto re7; 
                     
                    } 
                } 
            } 
            else 
                    printf("!! Not eligible for voting !!\n"); 
        } 
         
    } 
    else if(no==8) 
    { 
        printf("\nEnter the number of voters:"); 
        scanf("%d",&n); 
        for(i=1;i<=n;i++) 
        { 
            printf("\n\nEnter your age:"); 
            scanf("%d",&age); 
            if(age>=18) 
            { 
                re8: 
                printf("\n\n## please choose your Candidate ##\n\n"); 
                printf("1. %s\n",c1[0].cname); 
                printf("2. %s\n",c1[1].cname); 
                printf("3. %s\n",c1[2].cname); 
                printf("4. %s\n",c1[3].cname); 
                printf("5. %s\n",c1[4].cname); 
                printf("6. %s\n",c1[5].cname); 
                printf("7. %s\n",c1[6].cname); 
                printf("8. %s\n",c1[7].cname); 
                printf("9. Exit to menu\n"); 
                printf("Input your choice(1-9):"); 
                scanf("%d",&choice); 
                switch(choice) 
                { 
                    case 1:votescount1++; 
                        break;
case 2:votescount2++; 
                        break; 
                    case 3:votescount3++; 
                        break; 
                    case 4:votescount4++; 
                        break; 
                    case 5:votescount5++; 
                        break; 
                    case 6:votescount6++; 
                        break; 
                    case 7:votescount7++; 
                        break; 
                    case 8:votescount8++; 
                        break; 
                    case 9:goto next; 
                    default: 
                    { 
                        printf("\nError:Wrong choice !! Please Retry"); 
                        goto re8; 
                     
                    } 
                } 
            } 
            else 
                    printf("!! Not eligible for voting !!\n"); 
        } 
         
    } 
    else if(no==9) 
    { 
        printf("\nEnter the number of voters:"); 
        scanf("%d",&n); 
        for(i=1;i<=n;i++) 
        { 
            printf("\n\nEnter your age:"); 
            scanf("%d",&age); 
            if(age>=18) 
            { 
                re9: 
                printf("\n\n## please choose your Candidate ##\n\n"); 
                printf("1. %s\n",c1[0].cname); 
                printf("2. %s\n",c1[1].cname); 
                printf("3. %s\n",c1[2].cname); 
                printf("4. %s\n",c1[3].cname); 
                printf("5. %s\n",c1[4].cname); 
                printf("6. %s\n",c1[5].cname); 
                printf("7. %s\n",c1[6].cname); 
                printf("8. %s\n",c1[7].cname); 
                printf("9. %s\n",c1[8].cname); 
                printf("10. Exit to menu\n"); 
                printf("Input your choice(1-10):"); 
                scanf("%d",&choice); 
                switch(choice) 
                { 
                    case 1:votescount1++; 
                        break; 
                    case 2:votescount2++; 
                        break; 
                    case 3:votescount3++; 
                        break; 
                    case 4:votescount4++; 
                        break; 
                    case 5:votescount5++; 
                        break; 
                    case 6:votescount6++; 
                        break; 
                    case 7:votescount7++; 
                        break; 
                    case 8:votescount8++; 
                        break; 
                    case 9:votescount9++; 
                        break; 
                    case 10:goto next; 
                    default: 
                    {case 2:votescount2++; 
                        break; 
                    case 3:votescount3++; 
                        break; 
                    case 4:votescount4++; 
                        break; 
                    case 5:votescount5++; 
                        break; 
                    case 6:votescount6++; 
                        break; 
                    case 7:votescount7++; 
                        break; 
                    case 8:votescount8++; 
                        break; 
                    case 9:goto next; 
                    default: 
                    { 
                        printf("\nError:Wrong choice !! Please Retry"); 
                        goto re8; 
                     
                    } 
                } 
            } 
            else 
                    printf("!! Not eligible for voting !!\n"); 
        } 
         
    } 
    else if(no==9) 
    { 
        printf("\nEnter the number of voters:"); 
        scanf("%d",&n); 
        for(i=1;i<=n;i++) 
        { 
            printf("\n\nEnter your age:"); 
            scanf("%d",&age); 
            if(age>=18) 
            { 
                re9: 
                printf("\n\n## please choose your Candidate ##\n\n"); 
                printf("1. %s\n",c1[0].cname); 
                printf("2. %s\n",c1[1].cname); 
                printf("3. %s\n",c1[2].cname); 
                printf("4. %s\n",c1[3].cname); 
                printf("5. %s\n",c1[4].cname); 
                printf("6. %s\n",c1[5].cname); 
                printf("7. %s\n",c1[6].cname); 
                printf("8. %s\n",c1[7].cname); 
                printf("9. %s\n",c1[8].cname); 
                printf("10. Exit to menu\n"); 
                printf("Input your choice(1-10):"); 
                scanf("%d",&choice); 
                switch(choice) 
                { 
                    case 1:votescount1++; 
                        break; 
                    case 2:votescount2++; 
                        break; 
                    case 3:votescount3++; 
                        break; 
                    case 4:votescount4++; 
                        break; 
                    case 5:votescount5++; 
                        break; 
                    case 6:votescount6++; 
                        break; 
                    case 7:votescount7++; 
                        break; 
                    case 8:votescount8++; 
                        break; 
                    case 9:votescount9++; 
                        break; 
                    case 10:goto next; 
                    default: 
                    {
printf("\nError:Wrong choice !! Please Retry"); 
                        goto re9; 
                     
                    } 
                } 
            } 
            else 
                    printf("!! Not eligible for voting !!\n"); 
        } 
         
    } 
    else if(no==10) 
    { 
        printf("\nEnter the number of voters:"); 
        scanf("%d",&n); 
        for(i=1;i<=n;i++) 
        { 
            printf("\n\nEnter your age:"); 
            scanf("%d",&age); 
            if(age>=18) 
            { 
                re: 
                printf("\n\n## please choose your Candidate ##\n\n"); 
                printf("1. %s\n",c1[0].cname); 
                printf("2. %s\n",c1[1].cname); 
                printf("3. %s\n",c1[2].cname); 
                printf("4. %s\n",c1[3].cname); 
                printf("5. %s\n",c1[4].cname); 
                printf("6. %s\n",c1[5].cname); 
                printf("7. %s\n",c1[6].cname); 
                printf("8. %s\n",c1[7].cname); 
                printf("9. %s\n",c1[8].cname); 
                printf("10. %s\n",c1[9].cname); 
                printf("11. Exit to menu\n"); 
                printf("Input your choice(1-11):"); 
                scanf("%d",&choice); 
                switch(choice) 
                { 
                    case 1:votescount1++; 
                        break; 
                    case 2:votescount2++; 
                        break; 
                    case 3:votescount3++; 
                        break; 
                    case 4:votescount4++; 
                        break; 
                    case 5:votescount5++; 
                        break; 
                    case 6:votescount6++; 
                        break; 
                    case 7:votescount7++; 
                        break; 
                    case 8:votescount8++; 
                        break; 
                    case 9:votescount9++; 
                        break; 
                    case 10:votescount10++; 
                        break; 
                    case 11:goto next; 
                    default: 
                    { 
                        printf("\nError:Wrong choice !! Please Retry"); 
                        goto re; 
                     
                    } 
                } 
            } 
            else 
                    printf("!! Not eligible for voting !!\n"); 
        }
} 
        next: 
        getchar(); 
} 
void votescount() 
{ 
    int code; 
    printf("\n\nEnter Passcode : "); 
    scanf("%d",&code); 
    if(code==1234) 
    { 
        if(no==2) 
        { 
            printf("\n\n ### Voting Statistics ###\n\n"); 
            printf("\n %s - %d",c1[0].cname,votescount1); 
            printf("\n %s - %d",c1[1].cname,votescount2); 
        } 
        if(no==3) 
        { 
            printf("\n\n ### Voting Statistics ###\n\n"); 
            printf("\n %s - %d",c1[0].cname,votescount1); 
            printf("\n %s - %d",c1[1].cname,votescount2); 
            printf("\n %s - %d",c1[2].cname,votescount3); 
        } 
        if(no==4) 
        { 
            printf("\n\n ### Voting Statistics ###\n\n"); 
            printf("\n %s - %d",c1[0].cname,votescount1); 
            printf("\n %s - %d",c1[1].cname,votescount2); 
            printf("\n %s - %d",c1[2].cname,votescount3); 
            printf("\n %s - %d",c1[3].cname,votescount4); 
        } 
        if(no==5) 
        { 
            printf("\n\n ### Voting Statistics ###\n\n"); 
            printf("\n %s - %d",c1[0].cname,votescount1); 
            printf("\n %s - %d",c1[1].cname,votescount2); 
            printf("\n %s - %d",c1[2].cname,votescount3); 
            printf("\n %s - %d",c1[3].cname,votescount4); 
            printf("\n %s - %d",c1[4].cname,votescount5); 
        } 
        if(no==6) 
        { 
            printf("\n\n ### Voting Statistics ###\n\n"); 
            printf("\n %s - %d",c1[0].cname,votescount1); 
            printf("\n %s - %d",c1[1].cname,votescount2); 
            printf("\n %s - %d",c1[2].cname,votescount3); 
            printf("\n %s - %d",c1[3].cname,votescount4); 
            printf("\n %s - %d",c1[4].cname,votescount5); 
            printf("\n %s - %d",c1[5].cname,votescount6); 
        } 
        if(no==7) 
        { 
            printf("\n\n ### Voting Statistics ###\n\n"); 
            printf("\n %s - %d",c1[0].cname,votescount1); 
            printf("\n %s - %d",c1[1].cname,votescount2); 
            printf("\n %s - %d",c1[2].cname,votescount3); 
            printf("\n %s - %d",c1[3].cname,votescount4); 
            printf("\n %s - %d",c1[4].cname,votescount5); 
            printf("\n %s - %d",c1[5].cname,votescount6); 
            printf("\n %s - %d",c1[6].cname,votescount7); 
        } 
        if(no==8) 
        { 
            printf("\n\n ### Voting Statistics ###\n\n"); 
            printf("\n %s - %d",c1[0].cname,votescount1); 
            printf("\n %s - %d",c1[1].cname,votescount2); 
            printf("\n %s - %d",c1[2].cname,votescount3); 
            printf("\n %s - %d",c1[3].cname,votescount4); 
            printf("\n %s - %d",c1[4].cname,votescount5); 
            printf("\n %s - %d",c1[5].cname,votescount6); 
            printf("\n %s - %d",c1[6].cname,votescount7); 
            printf("\n %s - %d",c1[7].cname,votescount8); 
        }
if(no==9) 
        { 
            printf("\n\n ### Voting Statistics ###\n\n"); 
            printf("\n %s - %d",c1[0].cname,votescount1); 
            printf("\n %s - %d",c1[1].cname,votescount2); 
            printf("\n %s - %d",c1[2].cname,votescount3); 
            printf("\n %s - %d",c1[3].cname,votescount4); 
            printf("\n %s - %d",c1[4].cname,votescount5); 
            printf("\n %s - %d",c1[5].cname,votescount6); 
            printf("\n %s - %d",c1[6].cname,votescount7); 
            printf("\n %s - %d",c1[7].cname,votescount8); 
            printf("\n %s - %d",c1[8].cname,votescount9); 
        } 
        if(no==10) 
        { 
            printf("\n\n ### Voting Statistics ###\n\n"); 
            printf("\n %s - %d",c1[0].cname,votescount1); 
            printf("\n %s - %d",c1[1].cname,votescount2); 
            printf("\n %s - %d",c1[2].cname,votescount3); 
            printf("\n %s - %d",c1[3].cname,votescount4); 
            printf("\n %s - %d",c1[4].cname,votescount5); 
            printf("\n %s - %d",c1[5].cname,votescount6); 
            printf("\n %s - %d",c1[6].cname,votescount7); 
            printf("\n %s - %d",c1[7].cname,votescount8); 
            printf("\n %s - %d",c1[8].cname,votescount9); 
            printf("\n %s - %d",c1[9].cname,votescount10); 
        } 
    } 
    else 
            printf("\n !!! Wrong Password !!!\n"); 
} 
void result() 
{ 
    if(votescount1==0 && votescount2==0 && votescount3==0 && votescount4==0 && 
       votescount5==0 && votescount6==0 && votescount7==0 && votescount8==0 &&  
       votescount9==0 && votescount10==0) 
        printf("\n Please cast minimum number of votes before trying to view the results!!\n"); 
    else if(votescount10>votescount9 && votescount10>votescount8 && votescount10>votescount7 && 
            votescount10>votescount6 && votescount10>votescount5 && votescount10>votescount4 && 
            votescount10>votescount3 && votescount10>votescount2 && votescount10>votescount1) 
        printf("\n###The Winner of %d is %s with %d number of votes###\n",year,c1[9].cname,votescount10); 
    else if(votescount9>votescount10 && votescount9>votescount8 && votescount9>votescount7 && 
            votescount9>votescount6 && votescount9>votescount5 && votescount9>votescount4 && 
            votescount9>votescount3 && votescount9>votescount2 && votescount9>votescount1) 
        printf("\n###The Winner of %d is %s with %d number of votes###\n",year,c1[8].cname,votescount9); 
    else if(votescount8>votescount9 && votescount8>votescount10 && votescount8>votescount7 && 
            votescount8>votescount6 && votescount8>votescount5 && votescount8>votescount4 && 
            votescount8>votescount3 && votescount8>votescount2 && votescount8>votescount1) 
        printf("\n###The Winner of %d is %s with %d number of votes###\n",year,c1[7].cname,votescount8); 
    else if(votescount7>votescount10 && votescount7>votescount8 && votescount7>votescount9 && 
            votescount7>votescount6 && votescount7>votescount5 && votescount7>votescount4 && 
            votescount7>votescount3 && votescount7>votescount2 && votescount7>votescount1) 
        printf("\n###The Winner of %d is %s with %d number of votes###\n",year,c1[6].cname,votescount7); 
    else if(votescount6>votescount10 && votescount6>votescount8 && votescount6>votescount7 && 
            votescount6>votescount9 && votescount6>votescount5 && votescount6>votescount4 && 
            votescount6>votescount3 && votescount6>votescount2 && votescount6>votescount1) 
        printf("\n###The Winner of %d is %s with %d number of votes###\n",year,c1[5].cname,votescount6); 
    else if(votescount5>votescount10 && votescount5>votescount8 && votescount5>votescount7 && 
            votescount5>votescount6 && votescount5>votescount9 && votescount5>votescount4 && 
            votescount5>votescount3 && votescount5>votescount2 && votescount5>votescount1) 
        printf("\n###The Winner of %d is %s with %d number of votes###\n",year,c1[4].cname,votescount5); 
    else if(votescount4>votescount10 && votescount4>votescount8 && votescount4>votescount7 && 
            votescount4>votescount6 && votescount4>votescount5 && votescount4>votescount9 && 
            votescount4>votescount3 && votescount4>votescount2 && votescount4>votescount1) 
        printf("\n###The Winner of %d is %s with %d number of votes###\n",year,c1[3].cname,votescount4); 
    else if(votescount3>votescount10 && votescount3>votescount8 && votescount3>votescount7 && 
            votescount3>votescount6 && votescount3>votescount5 && votescount3>votescount4 && 
            votescount3>votescount9 && votescount3>votescount2 && votescount3>votescount1) 
        printf("\n###The Winner of %d is %s with %d number of votes###\n",year,c1[2].cname,votescount3); 
    else if(votescount2>votescount10 && votescount2>votescount8 && votescount2>votescount7 && 
            votescount2>votescount6 && votescount2>votescount5 && votescount2>votescount4 && 
            votescount2>votescount3 && votescount2>votescount9 && votescount2>votescount1) 
        printf("\n###The Winner of %d is %s with %d number of votes###\n",year,c1[1].cname,votescount2); 
    else if(votescount1>votescount10 && votescount1>votescount8 && votescount1>votescount7 && 
            votescount1>votescount6 && votescount1>votescount5 && votescount1>votescount4 && 
            votescount1>votescount3 && votescount1>votescount2 && votescount1>votescount9) 
        printf("\n###The Winner of %d is %s with %d number of votes###\n",year,c1[0].cname,votescount1);  
} 
void main() 
{ 
    int i,choice; 
    printf("Enter the year: \n"); 
    scanf("%d",&year); 
    printf("Enter the candidate details: \n"); 
    caname(); 
    do 
    { 
        retry: 
                printf("\n\n### Welcome to Election/Voting %d ###",year); 
                printf("\n\n1. Cast the vote"); 
                printf("\n2. Find Vote Count"); 
                printf("\n3. Results"); 
                printf("\n0. Exit"); 
                printf("\n Please enter your choice: "); 
                scanf("%d",&choice); 
                switch(choice) 
                { 
                    case 1: castevote(); 
                            break; 
                    case 2: votescount(); 
                            break; 
                    case 3: result(); 
                            break; 
                    case 0:exit(1); 
                    default:{ 
                                printf("\n Error: Invalid choice\n"); 
                                goto retry; 
                            }                 
                } 
    } while (choice!=0); 
    getchar(); 
     
}

