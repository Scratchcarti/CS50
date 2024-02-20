SELECT *
FROM stars
JOIN movies on stars.movie_id = movies.id
JOIN people on stars.person_id = people.id
WHERE people.name = 'Bradley Cooper' AND stars.movie_id in
(SELECT stars.movie_id
FROM stars
JOIN movies on stars.movie_id = movies.id
JOIN people on stars.person_id = people.id
WHERE people.name = 'Jennifer Lopez'
)
;
