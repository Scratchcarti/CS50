SELECT (SELECT title
FROM movies
ORDER BY title),rating
FROM movies
JOIN ratings on movies.id = ratings.movie_id
WHERE year = 2010
ORDER BY rating
;
