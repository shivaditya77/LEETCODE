# Write your MySQL query statement below
 
select max(e1.salary) as SecondHighestSalary
 from Employee e1 join Employee e2
  on e1.salary<e2.salary;