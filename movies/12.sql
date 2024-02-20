SELECT (movies.title)
FROM stars
JOIN movies on stars.movie_id = movies.id
JOIN people on stars.person_id = people.id
WHERE stars.person_id = (
SELECT id
FROM people
WHERE name = 'Jennifer Lawrence'
)
;
