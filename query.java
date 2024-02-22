QUERY 1:-

SELECT A.*,B.SEM,B.SECTION FROM STUDENT A, SEMSEC B, CLASS C 
WHERE  A.USN=C.USN AND B.SSID=C.SSID
AND B.SEM=4 AND B.SECTION ='C';

O/P


USN                  SNAME      ADDRESS         PHONE GENDER            SEM S
-------------------- ---------- ---------- ---------- ---------- ---------- -
4SF20CS088           KAVYA      MANGALORE   876514067 FEMALE              4 C

---------------------------------------------------------------------------------------------------------------------------

QUER 2:-

SELECT SEM,SECTION,GENDER,COUNT(*) FROM STUDENT S,SEMSEC SL,CLASS C 
WHERE S.USN =C.USN AND SL.SSID=C.SSID GROUP BY (GENDER,SEM,SECTION)ORDER BY (SEM);
