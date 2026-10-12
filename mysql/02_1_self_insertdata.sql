use startersql;
-- select * from user where date_of_birth='2002-03-15';
-- select * from user where id >10
-- select * from user where salary <='50000';
-- select * from user where date_of_birth is not null;
-- select * from user where date_of_birth is null;
-- select * from user where gender in ('male','female');
-- select * from user where gender ='female'and salary='50000';
-- select * from user where gender ='male'and salary>='50000';
-- select * from user where gender ='male'and salary>='50000' order by date_of_birth;
-- select * from user where gender ='male'and salary>='50000' order by date_of_birth desc;
-- select * from user where gender ='male'and salary>='50000' order by date_of_birth desc limit 3;

-- select *from user where salary>60000 order by date_of_birth desc limit 3;
-- select *from user order by salary desc;
select * from user where salary between 50000 and 70000 order by salary desc
