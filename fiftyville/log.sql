-- Keep a log of any SQL queries you execute as you solve the mystery.

--crime scene report
SELECT *
FROM crime_scene_reports
WHERE month = 7 AND day = 28 AND year = 2023;

/*
| id  | year | month | day |     street      |                                                                                                       description                                                                                                        |
+-----+------+-------+-----+-----------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| 293 | 2023 | 7     | 28  | Axmark Road     | Vandalism took place at 12:04. No known witnesses.                                                                                                                                                                       |
| 294 | 2023 | 7     | 28  | Boyce Avenue    | Shoplifting took place at 03:01. Two people witnessed the event.                                                                                                                                                         |
| 295 | 2023 | 7     | 28  | Humphrey Street | Theft of the CS50 duck took place at 10:15am at the Humphrey Street bakery. Interviews were conducted today with three witnesses who were present at the time – each of their interview transcripts mentions the bakery. |
| 296 | 2023 | 7     | 28  | Widenius Street | Money laundering took place at 20:30. No known witnesses.                                                                                                                                                                |
| 297 | 2023 | 7     | 28  | Humphrey Street | Littering took place at 16:36. No known witnesses.
*/
-- to read the interviews
SELECT *
FROM interviews
WHERE month = 7 AND day = 28 AND year = 2023 AND transcript LIKE '%bakery%';

/*3 interviews
 | 161 | Ruth    | 2023 | 7     | 28  | Sometime within ten minutes of the theft, I saw the thief get into a car in the bakery parking lot and drive away. If you have security footage from the bakery parking lot, you might want to look for cars that left the parking lot in that time frame.                                                          |
| 162 | Eugene  | 2023 | 7     | 28  | I don't know the thief's name, but it was someone I recognized. Earlier this morning, before I arrived at Emma's bakery, I was walking by the ATM on Leggett Street and saw the thief there withdrawing some money.                                                                                                 |
163 | Raymond | 2023 | 7     | 28  | As the thief was leaving the bakery, they called someone who talked to them for less than a minute. In the call, I heard the thief say that they were planning to take the earliest flight out of Fiftyville tomorrow. The thief then asked the person on the other end of the phone to purchase the flight ticket. |
*/

-- bakery secuity logs
SELECT *
FROM bakery_security_logs
WHERE month = 7 AND day = 28 AND year = 2023 AND hour = 10 AND minute > 15 AND minute < 28 AND activity = 'exit'
;
/*
+-----+------+-------+-----+------+--------+----------+---------------+
| id  | year | month | day | hour | minute | activity | license_plate |
+-----+------+-------+-----+------+--------+----------+---------------+
| 260 | 2023 | 7     | 28  | 10   | 16     | exit     | 5P2BI95       |
| 261 | 2023 | 7     | 28  | 10   | 18     | exit     | 94KL13X       |
| 262 | 2023 | 7     | 28  | 10   | 18     | exit     | 6P58WS2       |
| 263 | 2023 | 7     | 28  | 10   | 19     | exit     | 4328GD8       |
| 264 | 2023 | 7     | 28  | 10   | 20     | exit     | G412CB7       |
| 265 | 2023 | 7     | 28  | 10   | 21     | exit     | L93JTIZ       |
| 266 | 2023 | 7     | 28  | 10   | 23     | exit     | 322W7JE       |
| 267 | 2023 | 7     | 28  | 10   | 23     | exit     | 0NTHK55       |
+-----+------+-------+-----+------+--------+----------+---------------+
*/

/* early morning leggett street atm details, withdrawing money  */

SELECT *
FROM atm_transactions
WHERE month = 7 AND day = 28 AND year = 2023 AND transaction_type = 'withdraw' AND atm_location = 'Leggett Street';
/*
+-----+----------------+------+-------+-----+----------------+------------------+--------+
| id  | account_number | year | month | day |  atm_location  | transaction_type | amount |
+-----+----------------+------+-------+-----+----------------+------------------+--------+
| 246 | 28500762       | 2023 | 7     | 28  | Leggett Street | withdraw         | 48     |
| 264 | 28296815       | 2023 | 7     | 28  | Leggett Street | withdraw         | 20     |
| 266 | 76054385       | 2023 | 7     | 28  | Leggett Street | withdraw         | 60     |
| 267 | 49610011       | 2023 | 7     | 28  | Leggett Street | withdraw         | 50     |
| 269 | 16153065       | 2023 | 7     | 28  | Leggett Street | withdraw         | 80     |
| 288 | 25506511       | 2023 | 7     | 28  | Leggett Street | withdraw         | 20     |
| 313 | 81061156       | 2023 | 7     | 28  | Leggett Street | withdraw         | 30     |
| 336 | 26013199       | 2023 | 7     | 28  | Leggett Street | withdraw         | 35     |
+-----+----------------+------+-------+-----+----------------+------------------+--------+
*/

-- fiftyville flight tickets

--flights outta fifty
SELECT *
FROM flights
WHERE origin_airport_id = 8 AND month = 7 AND day = 29 AND year = 2023
ORDER BY hour;
/*
+----+-------------------+------------------------+------+-------+-----+------+--------+
| id | origin_airport_id | destination_airport_id | year | month | day | hour | minute |
+----+-------------------+------------------------+------+-------+-----+------+--------+
| 36 | 8                 | 4                      | 2023 | 7     | 29  | 8    | 20     |
| 43 | 8                 | 1                      | 2023 | 7     | 29  | 9    | 30     |
| 23 | 8                 | 11                     | 2023 | 7     | 29  | 12   | 15     |
| 53 | 8                 | 9                      | 2023 | 7     | 29  | 15   | 20     |
| 18 | 8                 | 6                      | 2023 | 7     | 29  | 16   | 0      |
+----+-------------------+------------------------+------+-------+-----+------+--------+

IF witness 3 isnt lying; desitnation airport is LGA ID 4 in nyc
*/


-- airport query
SELECT *
FROM airports;

/* airport names
+----+--------------+-----------------------------------------+---------------+
| id | abbreviation |                full_name                |     city      |
+----+--------------+-----------------------------------------+---------------+
| 1  | ORD          | O'Hare International Airport            | Chicago       |
| 2  | PEK          | Beijing Capital International Airport   | Beijing       |
| 3  | LAX          | Los Angeles International Airport       | Los Angeles   |
| 4  | LGA          | LaGuardia Airport                       | New York City |
| 5  | DFS          | Dallas/Fort Worth International Airport | Dallas        |
| 6  | BOS          | Logan International Airport             | Boston        |
| 7  | DXB          | Dubai International Airport             | Dubai         |
| 8  | CSF          | Fiftyville Regional Airport             | Fiftyville    |
| 9  | HND          | Tokyo International Airport             | Tokyo         |
| 10 | CDG          | Charles de Gaulle Airport               | Paris         |
| 11 | SFO          | San Francisco International Airport     | San Francisco |
| 12 | DEL          | Indira Gandhi International Airport     | Delhi         |
+----+--------------+-----------------------------------------+---------------+

CSF IS THE REQUIRED ABBREVATION
*/

-- PHONE CALL
SELECT *
FROM phone_calls
WHERE duration < 60 AND month = 7 AND day = 28 AND year = 2023;
/*
+-----+----------------+----------------+------+-------+-----+----------+
| id  |     caller     |    receiver    | year | month | day | duration |
+-----+----------------+----------------+------+-------+-----+----------+
| 221 | (130) 555-0289 | (996) 555-8899 | 2023 | 7     | 28  | 51       |
| 224 | (499) 555-9472 | (892) 555-8872 | 2023 | 7     | 28  | 36       |
| 233 | (367) 555-5533 | (375) 555-8161 | 2023 | 7     | 28  | 45       |
| 251 | (499) 555-9472 | (717) 555-1342 | 2023 | 7     | 28  | 50       |
| 254 | (286) 555-6063 | (676) 555-6554 | 2023 | 7     | 28  | 43       |
| 255 | (770) 555-1861 | (725) 555-3243 | 2023 | 7     | 28  | 49       |
| 261 | (031) 555-6622 | (910) 555-3251 | 2023 | 7     | 28  | 38       |
| 279 | (826) 555-1652 | (066) 555-9701 | 2023 | 7     | 28  | 55       |
| 281 | (338) 555-6650 | (704) 555-2131 | 2023 | 7     | 28  | 54       |
+-----+----------------+----------------+------+-------+-----+----------+
*/
-- for flight id
SELECT *
FROM passengers
WHERE flight_id = 36;

/*flight ids
+-----------+-----------------+------+
| flight_id | passport_number | seat |
+-----------+-----------------+------+
| 36        | 7214083635      | 2A   |
| 36        | 1695452385      | 3B   |
| 36        | 5773159633      | 4A   |
| 36        | 1540955065      | 5C   |
| 36        | 8294398571      | 6C   |
| 36        | 1988161715      | 6D   |
| 36        | 9878712108      | 7A   |
| 36        | 8496433585      | 7B   |
+-----------+-----------------+------+
*/
SELECT *
FROM people

WHERE
passport_number IN
(
SELECT passport_number
FROM passengers
WHERE flight_id = 36;

)
