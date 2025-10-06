# Write your MySQL query statement below
SELECT EU.unique_id, E.name FROM Employees E NATURAL LEFT JOIN EmployeeUNI EU;