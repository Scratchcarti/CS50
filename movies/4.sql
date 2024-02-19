SELECT count(*)
FROM movies
WHERE (ratings.rating =10)
JOIN ratings on movies.id = ratings.movie_id
