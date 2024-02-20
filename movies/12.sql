SELECT (movies.title)
FROM stars
JOIN movies on stars.movie_id = movies.id
JOIN people on stars.person_id = people.id
WHERE people.id = (
SELECT id
FROM people
WHERE name = 'Jennifer Lawrence'
)
AND  people.id =
(
SELECT id
FROM people
WHERE name = 'Bradley Cooper'
)
;
