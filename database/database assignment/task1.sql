use task;
create table student(
roll_no int,
name text not null,
branch text  not null
);
alter table student
modify rollno int primary key;

insert into student(rollno,name,branch)values
(1,"jay","computer science"),
(2,"suhani","electric and com"),
(3,"kriti","electronic and com");

select * from student;

create table exams(
roll_no int,
s_code varchar(25),
marks varchar(25),
p_code text not null
Foreign key(roll_no) reference student(roll_no)
);

insert into exams(roll_no,s_code,marks,p_code)values
(1,"CS11",50,"CS"),
(1,"CS11",60,"CS"),
(2,"ES101",66,"ES"),
(2,"ES102",70,"ES"),
(3,"ES101",45,"ES"),
(3,"ES101",50,"ES");

select * from exams;