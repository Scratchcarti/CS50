SELECT people.name
FROM movies
JOIN stars on movies.id = stars.movie_id
JOIN people on stars.person_id = people.id
WHERE movies.title = "TOY STORY"
;
