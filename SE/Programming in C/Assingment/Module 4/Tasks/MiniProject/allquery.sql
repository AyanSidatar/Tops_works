-- Create a MySQL table called playlists to store Spotify-style music playlists, with columns: playlist_id (primary key), user_id (foreign key), name (varchar), and created_at (datetime). Write the CREATE TABLE statement.
CREATE TABLE playlists (
    playlist_id INT PRIMARY KEY,
    user_id INT,
    name VARCHAR(100),
    created_at DATETIME,
    FOREIGN KEY (user_id) REFERENCES SpotifyUser(user_id)
);




-- Insert three sample records into the playlists table: one for a user with a 'Workout Mix', one with a 'Chill Vibes', and one with a 'Top Hits' playlist. Use realistic data for each field.

INSERT INTO playlists (playlist_id, user_id, name, created_at)
VALUES
(1, 1, 'Workout Mix', '2026-06-28 09:00:00'),
(2, 2, 'Chill Vibes', '2026-06-28 14:30:00'),
(3, 3, 'Top Hits', '2026-06-28 18:45:00');






-- Write an SQL UPDATE statement to rename the 'Chill Vibes' playlist to 'Evening Chill' for a specific user_id.

UPDATE playlists
SET name = 'Evening Chill'
WHERE user_id = 2
AND name = 'Chill Vibes';





-- Write a DELETE statement to remove a playlist named 'Workout Mix' for a given user_id from the playlists table.Hint:Make sure your WHERE clause targets only the intended row.

DELETE FROM playlists
WHERE user_id = 1
AND name = 'Workout Mix';





-- Create a stored procedure named GetMonthlyPlaylistCount that takes a user_id and a month (as an integer) as input, and returns the total number of playlists the user created in that month.Hint:Use the MONTH() function in your WHERE clause.
DELIMITER //

CREATE PROCEDURE GetMonthlyPlaylistCount(
    IN p_user_id INT,
    IN p_month INT
)
BEGIN
    SELECT COUNT(*) AS total_playlists
    FROM playlists
    WHERE user_id = p_user_id
      AND MONTH(created_at) = p_month;
END //

DELIMITER ;

CALL GetMonthlyPlaylistCount(2, 6);