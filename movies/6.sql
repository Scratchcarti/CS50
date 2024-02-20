SELECT ROUND(AVG(rating),3)
FROM movies
JOIN ratings on movies.id = ratings.movie_id
;

