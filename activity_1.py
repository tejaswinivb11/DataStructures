stu_list=[]
def add_stu_info():
    total_marks=0
    id=int(input("enter the student id:"))
    name=input("enter the name of the student:")
    age=int(input("enter the student age:"))   
    num_of_sub=int(input("enter the number of subjects"))
    max_marks_of_subjects=int(input("enter the maximum marks of the subjects:"))
    for i in range(num_of_sub):
        marks=int(input("enter the marks:"))
        total_marks=total_marks+marks
        percentage=(total_marks/(max_marks_of_subjects*num_of_sub))*100
    stu1={'id':id,"name":name,"age_of_student":age,"total marks":total_marks,"percentage":percentage}
    stu_list.append(stu_list)
    
def retrive_stu_info(): 
    id=int(input("enter the student to display infomation:"))
    if id>=len(stu_list):
        print("no student exits by that id.")        
    else:
        m=stu_list[id]
        print(stu_list)
def display_file():
    print(stu_list)
print("""enter "add" to add the information of student.
enter "retrive" to retive the particular student information.
enter "display" to display all student information.
enter "stop" to stop the function.
""")
while True:
    command=input("enter what you want to do:")
    if command=="add":
        add_stu_info()
    elif command =="retrive":
        retrive_stu_info()
    elif command=="display":
        display_file()    
    elif command == "stop":
        break
    