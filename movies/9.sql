SELECT people.name
FROM stars
JOIN movies on stars.movie_id = movies.id
JOIN people on stars.person_id = people.id
WHERE (movies.year = 2004)
ORDER BY 
