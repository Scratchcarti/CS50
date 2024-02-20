SELECT (movies.title)
FROM stars
JOIN movies on stars.movie_id = movies.id
JOIN people on stars.person_id = people.id
JOIN ratings on stars.movie_id = ratings.movie_id
WHERE people.name = 'Chadwick Boseman'
ORDER BY ratings.rating
