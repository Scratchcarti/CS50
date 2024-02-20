SELECT (movies.title)
FROM stars
JOIN movies on stars.movie_id = movies.id
JOIN people on stars.person_id = people.id
WHERE people.name = 'Jennifer Lawrence' OR people.name = 'Bradley Cooper'
;
