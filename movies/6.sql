SELECT ROUND(AVG(rating), 2)
FROM movies
JOIN ratings on movies.id = ratings.movie_id
;

