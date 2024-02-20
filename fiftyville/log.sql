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


