-- https://www.urionlinejudge.com.br/judge/en/problems/view/2738
select distinct c.name, trunc(avg(((s.math*2)+(s.specific*3)+(s.project_plan*5))/10),2) avg
  from candidate c
join score s on c.id = s.candidate_id
group by c.name order by avg desc