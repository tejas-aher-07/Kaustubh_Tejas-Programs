drop procedure if exists pro6;

delimiter $
create procedure pro6(name varchar(50))
BEGIN
	declare count int;
	declare char1 varchar(1);
	declare upper1 varchar(100);
	declare lower1 varchar(100);
	declare res BOOLEAN;
	
	set upper1="";
	set lower1="";
	
	set count=1;

	lllp:LOOP
	set count= count + 1;
	  if count <= length(name) THEN
	  set char1 = substring(name, count,1);
		if char1 BETWEEN  'A' and 'Z' THEN
			SET upper1 = concat(upper1,char1); 
		ELSEIF char1 BETWEEN 'a' and 'z' THEN
			SET lower1 = concat(lower1,char1);
		
		ELSE
			leave lllp;
		end if;
		
	end if;
	
	end LOOP lllp;
	
	select upper1;
	select lower1;
	

end $

delimiter ;
