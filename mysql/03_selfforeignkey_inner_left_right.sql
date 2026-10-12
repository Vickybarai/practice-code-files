use startersql;
 select * from users;
-- select * from addresses;

-- select users.name, users.gender , addresses.city ,addresses.state , 
-- addresses.id as addresses_ids
-- from users inner join addresses 
-- on users.id = addresses.user_id;

select users.name, users.gender , addresses.city ,addresses.state , 
 addresses.id as addresses_ids
 from users 
 right join addresses on users.id = addresses.user_id;
 -- left join addresses on users.id = addresses.user_id;
 