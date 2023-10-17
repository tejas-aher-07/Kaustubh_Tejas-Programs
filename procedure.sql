/*
drop procedure if exists addUser;
delimiter $
create PROCEDURE addUser(username varchar(20), password varchar(20), email varchar(50))
BEGIN
	insert into login VALUES(username,password,email);
end $
delimiter ;


drop procedure if exists checkUser;
delimiter $
create procedure checkUser(emailid varchar(40))
BEGIN
	declare check_email bool;
	select true into check_email from login where email=emailid;
	if check_email then
		select username,password from login where email=emailid;
	ELSE
		insert into log(curr_date, curr_time, message)
		values(CURRENT_DATE,CURRENT_TIME,"Wrong email id Please try again!!");
		select * from log where id=(SELECT max(id) from log);
	end if;
end $
delimiter ;



-- 3.	Write a procedure(named getQualification) that takes studentID as a parameter.
--If studentID is present in the student table, then print his student details
-- along with STUDENT_QUALIFICATION details and if the studentID is not present
-- display message “Student not found…” (Use: STUDENT, and STUDENT_QUALIFICATION tables)

drop procedure if EXISTS getQualification;
delimiter $

create procedure getQualification(studentID int)
BEGIN
	if studentID in (select id from student) THEN
		select * from student join student_qualifications 
		where student.id= student_qualifications.studentID and student.id= studentID;
	ELSE
		select "Student Not Found";
	end if;
end $
delimiter ;



4.Write a procedure (named addStudent) that inserts a new student with his phone number
 and his address into the STUDENT, PHONE, and ADDRESS table.


DROP PROCEDURE IF EXISTS addStudent;
delimiter $
create procedure addStudent(_namefirst VARCHAR(30), _namelast VARCHAR (30),_DOB DATE ,_emailID varchar(30)
,_number varchar(10),_isActive bool, _address varchar(50))
BEGIN
	declare _idStudent int;
	declare _idStudentPhone int;
	declare _idStudentAddress int;
	select max(id)+1 into _idStudent from student;
	select max(id)+1 into _idStudentPhone from student_phone;
	select max(id)+1 into _idStudentAddress from student_address;
	
	Insert into student VALUES(_idStudent,_namefirst,_namelast,_DOB,_emailID);
	insert into student_phone VALUES(_idStudentPhone,_idStudent,_number,_isActive);
	Insert into student_address VALUES(_idStudentAddress,_idStudent,_address);
end $
delimiter ;

5.	Write a procedure (named addQualification) that takes studentID, and qualification details 
as a parameter. If studentID is present in the STUDENT table, then insert the qualification in 
STUDENT_QUALIFICATION table and return a message “Record inserted” or else print ‘Student not found’. 
(hint: using OUT parameter) (Use: STUDENT, and STUDENT_QUALIFICATION tables)



drop procedure if exists addQualification;

delimiter $
create procedure addQualification(_studentID int ,_name varchar(20),_college varchar(20),
_university varchar(20),_marks int, _YEAR year)
BEGIN
	declare _idStudentQualification int;
	declare rec_Present BOOLEAN;
	select max(id)+1 into _idStudentQualification from student_qualifications;
	select DISTINCT true into rec_Present from student_qualifications where 
	_studentid= student_qualifications.studentid;
	
	if rec_Present THEN
	Insert into student_qualifications VALUES
	(_idStudentQualification,_studentID,_name,_college, _university,_marks,_YEAR);
	select "Record inserted";
	
	ELSE
	select "Student not found";
	end if ;

end $
delimiter ;


5.	Write a procedure to print all upper and lower characters separately. 
Input: - AbCdEfG
Output: - ACEG
          bdf


drop procedure if exists pro6;

delimiter $
create procedure pro6(name varchar(50))
BEGIN
	declare count;
	count=1;
	lllp:LOOP
	  if count <= length(name) THEN
	  set ch = 
	

end


delimiter ;

drop procedure if exists pro1;
delimiter $
drop table if exists String1;
create table String1 (character1 varchar(1));
create procedure pro1(name1 varchar(50))
begin
	declare ch varchar(1);
    declare ct int;
    set ct := 1;
	loop1:loop
		if ct <= length(name1) then
			set ch := substring(name1,ct,1);
			set ct := ct + 1;
			insert into String1 values(ch);
		else
			leave loop1;
		end if;
    end loop loop1;
    select * from String1;
end $
delimiter ;


5.	Write a procedure to print all upper and lower characters separately. 
Input: - AbCdEfG
Output: - ACEG
                  bdf
/*
drop procedure if exists pro5;
delimiter $
create procedure pro5(name varchar(100))
begin
	declare ch varchar(1);
    declare ct int ;
    declare lower1 varchar(50);
    declare upper1 varchar(50);
    set lower1 := " ";
    set upper1 := " ";
    set ct := 1;
	loop3:loop
		if ct <= length(name) then
			set ch := substring(name,ct,1);
			if ch between 'A' and 'Z' then
				set upper1 := concat(upper1,ch);
			elseif ch  between 'a' and 'z' then
				set lower1 := concat(lower1,ch);
			end if;
		else
			leave loop3;
        end if;
	end loop loop3;
    select substring(upper1,2);
    select substring(lower1,2);
end $
delimiter ;




drop procedure if exists pro6;

delimiter $
create procedure pro6(name varchar(50))
BEGIN
	declare count;
	count=1;
	lllp:LOOP
	  if count <= length(name) THEN
	  set ch = substring(name, count,1);
	  select 
	

end 

delimiter ;

5.	Write a procedure to print all upper and lower characters separately. 
Input: - AbCdEfG
Output: - ACEG
          bdf
				  

 
*/

/*
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
			
		end if;
		
	end if;
	
	end LOOP lllp;
	
	select upper1;
	select lower1;
	

end $

delimiter ;

*/

/* 
6.	Write a procedure to find the number of vowels, digits and white spaces 
/*


/*

drop procedure if exists separation;

delimiter $ 
create PROCEDURE separation(string1 varchar(20))
begin	
	declare count1 int;
	declare char1 varchar(1);
	declare vowels VARCHAR(20);
	
	set vowels = " ";
	
	set count1=0;
	
	loop1:loop
	set count1 = count1 + 1;
		if count1 <= length(string1) then
			set char1 = substring(string1,count1,1);
			if char1 in ('a','e' ) THEN
				set vowels = CONCAT(vowels, char1);
	
			end if ;
		ELSE
			leave loop1;
		end if ;
		
	end loop loop1;
	select vowels;
	
end $

delimiter ;

*/