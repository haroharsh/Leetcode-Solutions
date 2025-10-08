# Write your MySQL query statement below
SELECT day1.id FROM Weather day1, Weather day2 WHERE DATEDIFF(day1.recordDate, day2.recordDate) = 1 AND day1.temperature > day2.temperature;