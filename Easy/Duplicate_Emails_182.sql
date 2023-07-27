--https://leetcode.com/problems/duplicate-emails/
--4 minutes

SELECT DISTINCT(p.email) AS Email
FROM Person p
WHERE p.email = (SELECT DISTINCT (a.email) 
               FROM Person a
               WHERE p.id != a.id AND p.email = a.email);
