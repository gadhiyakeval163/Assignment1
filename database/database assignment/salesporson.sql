create database salespersons;
use salespersons;
create table salesperson(
sno int,
sname text not null,
city text not null,
comm decimal(4,2)
);
insert into salesperson values
(1001,"peel","london",.12),
(1002,"serres","san jose",.13),
(1004,"motika","london",.11),
(1007,"rafkin","barcelona",.15),
(1003,"axelrod","new york",.1);

select *from salesperson;

create table customer(
cnm int primary key,
cname varchar(50) not null,
city varchar(50),
rating int,
sno int
 Foreign key (sno) references salesperson(sno)
);

insert into customer (cnm,cname,city,rating,sno)values
(201,"hoffman","london","100","1001"),
(202,"govanne","roe","200","1003"),
(203,"liu","san jose","300","1002"),
(204,"grass","barcelona","100","1002"),
(206,"clemens","london","300","1007"),
(207,"pereira","roe","100","1004");

select * from customer;

-- a) Names and cities of all salespeople in London with commission above 0.12
select  sname,city
from salesperson
where city="london" and comm >0.12;

-- b) All salespeople either in Barcelona or in London
select * from salesperson
where city in ("barcelona","london");
-- c) All salespeople with commission between 0.10 and 0.12. (Boundary valuesshould be excluded).
select * from salesperson 
where comm> 0.10 and comm < 0.12;
-- d) All customers excluding those with rating <= 100 unless they are located inRoe
select * from customer
where (rating >100 or city="roe");