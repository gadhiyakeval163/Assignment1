use task;
create table employee(
employee_id int,
first_name text not null,
last_name text not null,
salary varchar(20),
joining_date datetime,
department text not null
);

insert into employee values
(1,"john","abraham","100000","2013-01-01 12:00:00","banking"),
(2,"michael","clarke","800000","2013-01-01 12:00:00 ","insurance"),
(3,"roy","thomas","700000","2013-01-01 12:00:00 ","banking"),
(4,"tom","jose","600000","2013-01-01 12:00:00 ","insurance"),
(5,"jerry","pinto","6500000","2013-01-01 12:00:00 ","insurance"),
(6,"philip","mathew","7500000","2013-01-01 12:00:00 ","service"),
(7,"testname1","123","6500000","2013-01-01 12:00:00 ","service"),
(8,"testname2","lname%","600000","2013-01-01 12:00:00 ","insurance");

select * from employee;
drop table employee;
create table incentive(
employee_ref_id int,
incentive_date varchar(30),
incentive_amount varchar(50)
foreign key(employee_ref_id ) references(employee_id )
);

insert into incentive(employee_ref_id,incentive_date,incentive_amount)values
(1,"01-feb-13","5000"),
(2,"01-feb-13","3000"),
(3,"01-feb-13","4000"),
(1,"01-jan-13","4500"),
(2,"01-jan-13","1500");

select * from incentive;

-- Get First_Name from employee table using Tom name “Employee Name”.
select * from employee
where first_name="tom";

-- Get FIRST_NAME, Joining Date, and Salary from employee table.
select first_name,salary,joining_date from employee;

-- Get all employee details from the employee table order by First_Name Ascending and Salary descending?
select * from employee
order by first_name asc, salary desc;

-- Get employee details from employee table whose first name contains ‘J’.
select * from employee
where first_name like "j%";

-- Get department wise maximum salary from employee table order by salaryascending?
select department,max(salary) as max_salary
group by department order by max_salary;

-- Select first_name, incentive amount from employee and incentives table forthose employees who have incentives and incentive amount greater than 3000
select E.first_name,I.incentive_amount from employee E 
inner join incentive I on E.employee_id=I.employee_ref_id
where I.incentive_amount > 3000;

-- Create After Insert trigger on Employee table which insert records in viewtable
create table viewtable(
employee_id int,
first_name text,
last_name text,
salary varchar(20),
joining_date datetime,
department text 
);

select * from viewtable;

create trigger employee1
after insert on employee
for each row
insert into viewtable values (new.employee_id,new.first_name,new.last_name,new.salary,new.joining_date,new.department)

insert into employee values 
 (1,"john","abraham","100000","2013-01-01 12:00:00","banking"),
(2,"michael","clarke","800000","2013-01-01 12:00:00 ","insurance");
