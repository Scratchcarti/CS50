SELECT people.name
FROM movies
INNER JOIN people on stars.person_id = people.id
LEFT JOIN stars on movies.id = stars.movie_id
WHERE movies.title = "TOY STORY"
;
