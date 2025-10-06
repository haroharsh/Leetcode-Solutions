# Write your MySQL query statement below
SELECT P.product_name AS product_name,S.year AS year,S.price AS price FROM Sales S JOIN Product P ON S.product_id = P.product_id;