#include<stdio.h>
#include<string.h>

//grouping student details in data structure.
struct studentdetails{ 
       char firstName[20];
       char lastName[20];
       char courseName[20];
       int stdNo;
       int grade;
      
}details[20];   //This varable stores 20 varaibles and it can be changed based on requirements

int main(){
   int select,i,count=0,j;
   int avgGrade = 0;
   int num;
   int stNo;
   char numVar[20];
   do{
     
   printf("Please select:\n 1-	Enter student's information\n 2-	View student's inforamtion\n 3-	Search Student by Number/Name\n 4-	Register new student\n 5-	Edit student fist name\n 6-	Edit student last name\n 7-	Edit student No\n 8-	Edit student grade\n 9-	Edit Student Course\n 10-	Remove student\n 11-	Get totall average of grades\n 12-	Get average of grades by course\n 13-	Sort student by grade\n 14-	Sort students by name( A-Z)\n 15-	exit\n\n");

    scanf("%d",&select);
       
    switch(select){
               case 1:
                       printf("Enter firstName, lastName, studentNumber, courseName, grade of student\n",count+1);
                       scanf("%s %s %d %s %d",details[count].firstName,details[count].lastName,&details[count].stdNo,details[count].courseName,&details[count].grade);
                       count++;
                      
                   break;
                    printf("\n\n\n");
               case 2:
                   for(i=0;i<count;i++){
                       if(details[i].stdNo != -1)
                           printf("%s %s %d %s %d\n",details[i].firstName,details[i].lastName,details[i].stdNo,details[i].courseName,details[i].grade);
                   }
                   printf("\n\n\n");
                   break;
               case 3:
                   printf("1. Using Student Number : " );
                   printf("2. Using Name : ");
                   int ch;
                   char name[20];
                   scanf("%d",&ch);
           
                   if(ch == 1){
                     
                     printf("Enter Student Number: ");
                      scanf("%d", &stNo);
                          
                           for (i=0;i<count;i++){
                             
                               
                                   if(stNo == details[i].stdNo){
                                   
                                       printf("%s %s %d %s %d\n",details[i].firstName,details[i].lastName,details[i].stdNo,details[i].courseName,details[i].grade);
                     
                                   }
                     
                           }
                   }
                   else if (ch==2)
                   {
                     printf("Enter First Name :");
                      scanf("%s",name);
                     
                           for (i=0;i<count;i++){
                                   if(strcmp(name,details[i].firstName)==0)
                                       printf("%s %s %d %s %d\n",details[i].firstName,details[i].lastName,details[i].stdNo,details[i].courseName,details[i].grade);
                           }
                           
                   }
                   else{
                     printf("Oops!!! 1 0r 2 are only VALID\n");
                   }
                   printf("\n\n\n");
                   break;
                   
                  case 4:
                  printf("Registering new student..........\n");
                       printf("Enter firstName, lastName, studentNumber, courseName, grade of student\n",count+1);
                       scanf("%s %s %d %s %d",details[count].firstName,details[count].lastName,&details[count].stdNo,details[count].courseName,&details[count].grade);
                       count++; 
                   break;
                   printf("\n\n\n");
                   
                   
                   case 5:
                  
                   printf("Enter student number(stdNo) : ");
                   scanf("%d",&num);
                   for (i=0;i<count;i++){
                           if(num == details[i].stdNo){
                                   printf("Update first Name for this student");
                                   scanf("%s",details[i].firstName);
                                   break;
                           }
                   }
                   break;
                   
                   printf("\n\n\n");
                   
                   case 6:
                  
                   printf("Enter student number(stdNo) : ");
                   scanf("%d",&num);
                   for (i=0;i<count;i++){
                           if(num == details[i].stdNo){
                                   printf("Update last Name for this student");
                                   scanf("%s",details[i].lastName);
                                   break;
                           }
                   }
                   break;
                   
                   printf("\n\n\n");
                   
                   
                   case 7:
                  
                   printf("Enter student number(stdNo) : ");
                   scanf("%d",&num);
                   for (i=0;i<count;i++){
                           if(num == details[i].stdNo){
                                   printf("Update student number for this student");
                                   scanf("%d",&details[i].stdNo);
                                   break;
                           }
                   }
                   break;
                   
                   printf("\n\n\n");
                   
                   
                    case 8:
                  
                   printf("Enter student number(stdNo) : ");
                   scanf("%d",&num);
                   for (i=0;i<count;i++){
                           if(num == details[i].stdNo){
                                   printf("Update student's grade");
                                   scanf("%d",&details[i].grade);
                                   break;
                           }
                   }
                   break;
                   
                   printf("\n\n\n");
                   
                   
                   case 9:
                  
                   printf("Enter student number(stdNo) : ");
                   scanf("%d",&num);
                   for (i=0;i<count;i++){
                           if(num == details[i].stdNo){
                                   printf("Update student's course name ");
                                   scanf("%s",details[i].courseName);
                                   break;
                           }
                   }
                   break;
                   
                   printf("\n\n\n");
                   
                    case 10:
                   printf("Enter student number(stdNo) : ");
                   scanf("%d",&num);
                   for (i=0;i<count;i++){
                           if(num == details[i].stdNo){
                               strcpy(details[i].firstName,"none");
                               strcpy(details[i].lastName,"none");
                               strcpy(details[i].courseName,"none");
                               details[i].stdNo = -1;
                               details[i].grade = -1;
                               break;
                           }
                   }
                   break;
                   
                   printf("\n\n\n");
                   
                   case 11:
                   avgGrade = 0;
                   for(i=0;i<count;i++)
                       if(details[i].stdNo!=-1)//to exclude deleted students details.
                           avgGrade = avgGrade + details[i].grade;
                   printf("Total average of grades = %d\n", (avgGrade/count));
                   
                   break;
                   
                   printf("\n\n\n");
                   
                   
                   case 12:
                  avgGrade = 0;  
                   char course[20];
                   printf("Enter coursename: ");
                   scanf("%s", course);
                   for(i=0; i<count; i++){
                     if((strcmp(course, details[i].courseName) == 0) && details[i].stdNo!=-1)
                      avgGrade = avgGrade + details[i].grade;
                      }
                      printf("Grades of this course: %d\n", (avgGrade/count));
                      
                      break;
                      printf("\n\n\n");
                      
                    case 13:
                  
                   for(i=0;i<count;i++){
                           for(j=i;j<count;j++){
                                   if(details[i].grade>details[j].grade){
                                           strcpy(numVar,details[i].firstName);strcpy(details[i].firstName,details[j].firstName);strcpy(details[j].firstName,numVar);
                                           strcpy(numVar,details[i].lastName);strcpy(details[i].lastName,details[j].lastName);strcpy(details[j].lastName,numVar);
                                           strcpy(numVar,details[i].courseName);strcpy(details[i].courseName,details[j].courseName);strcpy(details[j].courseName,numVar);
                                           num = details[i].stdNo;details[i].stdNo = details[j].stdNo;details[j].stdNo = num;
                                           num = details[i].grade;details[i].grade = details[j].grade;details[j].grade = num;
                                   }
                           }
                   }
                   printf("Ascending order sorted grades and its details: \n");
                    for(i=0;i<count;i++){
                       if(details[i].stdNo != -1)
                           printf("%s %s %d %s %d\n",details[i].firstName,details[i].lastName,details[i].stdNo,details[i].courseName,details[i].grade);
                   }
                   
                   break;
                   printf("\n\n\n");  
                   
                    case 14:
                   for(i=0;i<count;i++){
                           for(j=i;j<count;j++){
                                   if(strcmp(details[i].firstName,details[j].firstName)>0){
                                           strcpy(numVar,details[i].firstName);strcpy(details[i].firstName,details[j].firstName);strcpy(details[j].firstName,numVar);
                                           strcpy(numVar,details[i].lastName);strcpy(details[i].lastName,details[j].lastName);strcpy(details[j].lastName,numVar);
                                           strcpy(numVar,details[i].courseName);strcpy(details[i].courseName,details[j].courseName);strcpy(details[j].courseName,numVar);

                                           num = details[i].stdNo;details[i].stdNo = details[j].stdNo;details[j].stdNo = num;
                                           num = details[i].grade;details[i].grade = details[j].grade;details[j].grade = num;
                                   }
                           }
                   }
                   printf("Ascending order sorted by firstname with its details:  \n");
                   for(i=0;i<count;i++){
                       if(details[i].stdNo != -1)
                           printf("%s %s %d %s %d\n",details[i].firstName,details[i].lastName,details[i].stdNo,details[i].courseName,details[i].grade);
                   }
                   break;
                   printf("\n\n\n");
                   
                  
       }
   }while(select!=15);
   return 0;
}

