-- https://www.urionlinejudge.com.br/judge/en/problems/view/2742
select life_registry.name, trunc(life_registry.omega*1.618, 3) as "The N Factor"
from life_registry
join dimensions d on life_registry.dimensions_id = d.id
where life_registry.dimensions_id in (1,5) and life_registry.name like 'Richard%'
order by "The N Factor"