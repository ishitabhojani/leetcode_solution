# Write your MySQL query statement below
select d1.name as Department, e1.name as Employee, e1.salary as Salary from employee e1 join department d1
on e1.departmentId = d1.id where 3 > (
    select count(distinct e2.salary) from employee e2 join department d2
    on e2.departmentId = d2.id where e2.salary > e1.salary and e2.departmentId=e1.departmentId 
)