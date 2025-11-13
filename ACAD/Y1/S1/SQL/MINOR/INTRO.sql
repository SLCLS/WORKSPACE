-- INIT database
CREATE TABLE STUDENT (
  STUDENT_ID INT NOT NULL,
  LastName VARCHAR(100),
  FirstName VARCHAR(100),
  Email VARCHAR(200),
  Subject VARCHAR(255),
  PRIMARY KEY (STUDENT_ID)
);
 
INSERT INTO STUDENT(STUDENT_ID, LastName, FirstName, Email, Subject) VALUES ('202510808', 'BAYON-ON', 'SHAN KENNETH', 'shankenneth21@gmail.com', 'ITC');
INSERT INTO STUDENT(STUDENT_ID, LastName, FirstName, Email, Subject) VALUES ('202511872', 'ASUMBRADO', 'FRANK LONGGANISA', 'frank@hotties.gov', 'ITC');
INSERT INTO STUDENT(STUDENT_ID, LastName, FirstName, Email, Subject) VALUES ('202510816', 'LOPEZ', 'GAB TOCINO', 'gab@sulasok.com', 'ITC');
INSERT INTO STUDENT(STUDENT_ID, LastName, FirstName, Email, Subject) VALUES ('202510285', 'FERRER', 'CHARLES KANOR', 'cf@mangkanor.tv', 'ITC');
INSERT INTO STUDENT(STUDENT_ID, LastName, FirstName, Email, Subject) VALUES ('202510505', 'TUZON', 'GEO', 'rock.hard@geo.net', 'ITC');
 
-- QUERY database
SELECT * FROM STUDENT;
SELECT * FROM STUDENT WHERE STUDENT_ID = 202510808;