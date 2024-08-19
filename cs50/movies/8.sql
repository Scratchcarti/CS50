SELECT people.name
FROM stars
JOIN movies on stars.movie_id = movies.id
JOIN people on stars.person_id = people.id
WHERE movies.title = 'Toy Story'
;
