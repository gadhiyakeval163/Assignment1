create database task;

show databases;
use task;
create table details(
first_name text not null,
last_name text not null,
Address varchar(25),
city text not null,
Age int primary key
);

insert into details(first_name,last_name,Address,city,Age)values
("Mickey","Mouse","123 Fantasy Way","Anaheim",73),
("Bat","Man","321 Cavern Ave","Gotham",54),
("Wonder","Woman","987 Truth Way","Paradise",39),
("Donald","Duck","555 Quack Street","Mallard",65),
("Bugs","Bunny","567 Carrot Street","Rascal",58),
("Wiley","Coyote","999 Acme Way","Canyon",61),
("Cat","Woman","234 Purrfect Street","Hairball",32),
("Tweety","Bird","543","Itotltaw",28);

select * from details;