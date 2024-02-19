SELECT AVG(rating)
FROM movies
JOIN ratings on movies.id = ratings.movies_id
;

