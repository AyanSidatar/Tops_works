--Create a view named ActiveUsersView: This view should list the name and email of any user who has logged more than 5 individual expense records.

CREATE VIEW ActiveUsersView AS
SELECT
    name,
    email
FROM users
INNER JOIN expenses
    ON users.user_id = expenses.user_id
GROUP BY users.user_id, users.name, users.email
HAVING COUNT(expenses.expense_id) > 5;

--Query the view: Write a simple SELECT statement to show all data from ActiveUsersView.

SELECT * FROM ActiveUsersView;