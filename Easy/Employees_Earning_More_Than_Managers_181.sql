--https://leetcode.com/problems/employees-earning-more-than-their-managers/
--3 minutes

SELECT e.name AS Employee
FROM employee e
WHERE e.salary > (SELECT d.salary
                  FROM employee d
                  WHERE d.id = e.managerId) AND managerId IS NOT NULL;
