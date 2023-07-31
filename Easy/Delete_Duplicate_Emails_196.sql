--https://leetcode.com/problems/delete-duplicate-emails/
--15 minutes

--Required a DELETE statement, not a SELECT
DELETE a.*
FROM Person a
JOIN Person b
ON a.email = b.email
WHERE a.id > b.id;
