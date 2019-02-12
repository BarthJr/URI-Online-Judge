-- https://www.urionlinejudge.com.br/judge/en/problems/view/2614
select c.name, r.rentals_date
from customers c
join rentals r on c.id = r.id_customers
where r.rentals_date::text like '2016-09%'