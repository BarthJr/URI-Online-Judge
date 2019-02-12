-- https://www.urionlinejudge.com.br/judge/en/problems/view/2612
select m.id, m.name
from movies m
join genres g on m.id_genres = g.id
join movies_actors ma on ma.id_movies = m.id
join actors a on ma.id_actors = a.id
where g.description = 'Action' and a.name = 'Marcelo Silva' or a.name = 'Miguel Silva'