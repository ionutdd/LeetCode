--https://leetcode.com/problems/rising-temperature/
--15 minutes

--DATEDIFF is a must
SELECT w.id 
FROM Weather w
WHERE w.temperature > (SELECT v.temperature
                       FROM Weather v 
                       WHERE DATEDIFF(w.recordDate, v.recordDate) = 1);
