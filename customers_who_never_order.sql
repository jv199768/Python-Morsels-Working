# Write your MySQL query statement below
SELECT c.name AS customers
FROM Customers c
LEFT JOIN Orders o on c.id = o.customerId
WHERE o.customerId IS NULL;
