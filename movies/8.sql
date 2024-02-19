SELECT names
FROM movies
JOIN stars on movies.id = stars.movie_id
WHERE name = "TOY STORY"
;
