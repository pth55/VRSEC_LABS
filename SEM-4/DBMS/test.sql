INSERT INTO student VALUES
(1, "B PAVAN KUMAR", "VIJ, AP, INDIA", 20, 8.30),
(2, "K HARI", "HYD, TS, INDIA", 20, 8.50),
(3, "V ANIL", "ONG, AP, INDIA", 19, 9.00),
(4, "L RAJ", "VIJ, AP, INDIA", 21, 9.85),
(5, "N KUMAR", "ANTP, AP, INDIA", 20, 7.86),
(6, "B PAVAN KUMAR", "VIJ, AP, INDIA", 20, 8.4),
(7, "N NAGARJUNA", "HYD, TS, INDIA", 20, 6.35),
(8, "KA PAL", "ONG, AP, INDIA", 19, 9.00),
(9, "CH VISHNU", "TPT, AP, INDIA", 21, 7.85),
(10, "M PRANEETH KUMAR", "VIJ, AP, INDIA", 20, 7.5);

SELECT * FROM student;
select * from student where (id >= 3 and sid <= 6);
select * from student where name like "%KUMAR%";

update student set name="B ANJI" where id=6;

-- to change the update column name
alter table student change column std_id id int;

-- Rename the 'old_table' to 'new_table'
-- RENAME TABLE old_table TO new_table;
-- RENAME TABLE student TO std_info; 


select id, name from student where cgpa > 7.5;
select id, name from student where cgpa > 7.5 and address like "%VIJ%";

alter table student add column dno int;

UPDATE student
SET dno = CASE
    WHEN id IN (1, 4, 6, 9) THEN 1
    WHEN id IN (3, 5, 7) THEN 2
    WHEN id IN (2, 8) THEN 3
    ELSE dno
END
WHERE id IN (1, 3, 5, 7, 9, 2, 8); -- these numbers only, bcoz remainig already have value 1, so they are not going to affect

select * from student where dno = 1 and cgpa > 7;

create table dept(dept_id int not null, dept_name varchar(10), primary key(dept_id));

-- say i don't want 10 charcters length as i said in above statement, to modify dataype size / value
ALTER TABLE dept
MODIFY COLUMN dept_name VARCHAR(5);

insert into dept values (1, "IT"), (2, "CS"), (3, "EC"), (4, "EE"), (5, "MECH");

-- slecting from two tables
select id, name, dept_name
from student
JOIN dept ON student.dno = dept.dept_id
where dept_name = "IT"	
GROUP BY id, name;

select id, name from student order by name; -- by deafult order by take ASC, to use DESC --> ORDER BY col_name DESC;
select id, name from student order by name desc;

select * from student;
select * from dept;
