-- https://www.urionlinejudge.com.br/judge/en/problems/view/2606
select products.id, products.name
from products
join categories c on products.id_categories = c.id
where c.name like 'super%'