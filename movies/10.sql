SELECT count(name)
FROM people
WHERE id in
(
    SELECT person_id
    FROM stars
    WHERE movie_id in
    (
        SELECT movie_id
        FROM ratings
        WHERE rating >= 9
    )
)
;


