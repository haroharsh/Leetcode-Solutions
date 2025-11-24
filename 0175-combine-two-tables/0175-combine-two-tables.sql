# Write your MySQL query statement below
SELECT per.firstName,per.lastName,adr.city,adr.state
FROM Person per
LEFT JOIN Address adr ON per.personId = adr.personId;