-- https://www.urionlinejudge.com.br/judge/en/problems/view/2605
select products.name, providers.name
from products
join providers on providers.id = products.id_providers
join categories c on products.id_categories = c.id
where c.id = 6