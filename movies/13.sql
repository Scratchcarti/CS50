SELECT (DISTINCT people.name)
FROM stars
JOIN movies on stars.movie_id = movies.id
JOIN people on stars.person_id = people.id

WHERE stars.movie_id IN
(
SELECT stars.movie_id
FROM stars
JOIN movies on stars.movie_id = movies.id
JOIN people on stars.person_id = people.id
WHERE people.name = 'Kevin Bacon' AND people.birth = (SELECT birth FROM people WHERE name = 'Kevin Bacon')
)
AND people.name != 'Kevin Bacon'
;
