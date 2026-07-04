--Display all expenses with details

SELECT
    expense_date,
    amount,
    name,
    category_name
FROM expenses 
INNER JOIN users 
    ON expenses.user_id = users.user_id
INNER JOIN categories
    ON expenses.category_id = categories.category_id;

--Show total expense amount per category

SELECT
    category_name,
    SUM(amount) AS total_expense
FROM expenses
INNER JOIN categories 
    ON expenses.category_id = categories.category_id
GROUP BY categories.category_name;


--Display users sorted by total spending

SELECT
    name,
    SUM(amount) AS total_spending
FROM users
INNER JOIN expenses
    ON users.user_id = expenses.user_id
GROUP BY users.user_id, users.name
ORDER BY total_spending DESC;