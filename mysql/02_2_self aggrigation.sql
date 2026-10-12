	use startersql;
-- select count(*) from user where gender='male';
-- select min(salary) as min_salary , max(salary) as max_salary from user;
-- select avg(salary) as avareage_total_of_user from user; 
-- select sum(salary) as total_company from user; 
-- select gender , avg(salary) as avareage_total_of_user from user group by gender; 
-- select gender , sum(salary) as avareage_total_of_user from user group by gender; 
--  select id, name ,gender , length(name) as name_length from user;
-- select  lower(name) as name_user , upper(name) as name_upper from user ; 
-- select id, name ,lower(name) as lower_case_name, length(name) as name_lenght, concat(name,"_workers") as staff from user; 
 
-- select name, datediff(curdate() , date_of_birth) as lives,
--  year(date_of_birth) as year_of_birth ,
--  month(date_of_birth) as month_of_birth,
--  day(date_of_birth) as date_of_birth
--  from user ;

--  SELECT salary,
-- ROUND(salary) AS rounded,
-- FLOOR(salary) AS floored,
-- CEIL(salary) AS ceiled
-- FROM user;

-- select id ,mod(id, 2) as list from user;
-- SELECT name, gender,IF(gender = 'Female', concat(name,"_ji" ), concat(name , "_bhai")) as close_one FROM user;
 --  select* from user ;
 