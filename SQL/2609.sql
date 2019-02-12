-- https://www.urionlinejudge.com.br/judge/en/problems/view/2609
select c.name, sum(products.amount)
from products
join categories c on products.id_categories = c.id
group by c.name