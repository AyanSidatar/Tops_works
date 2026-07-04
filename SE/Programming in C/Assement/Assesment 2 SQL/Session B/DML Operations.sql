--insert data in tables

INSERT INTO users (user_id, name, email, created_at) VALUES
(1, 'Alice Johnson', 'alice@example.com', '2026-01-10'),
(2, 'Bob Smith', 'bob@example.com', '2026-02-15'),
(3, 'Charlie Brown', 'charlie@example.com', '2026-03-20'),
(4, 'Diana Patel', 'diana@example.com', '2026-04-05'),
(5, 'Ethan Shah', 'ethan@example.com', '2026-05-12');

INSERT INTO categories (category_id, category_name) VALUES
(1, 'Food'),
(2, 'Rent'),
(3, 'Entertainment');

INSERT INTO expenses (expense_id, user_id, category_id, amount, expense_date) VALUES
(101, 1, 1, 450.00, '2026-06-01'),
(102, 1, 2, 8000.00, '2026-06-02'),
(103, 2, 1, 320.50, '2026-06-03'),
(104, 2, 3, 1200.00, '2026-06-05'),
(105, 3, 2, 7500.00, '2026-06-07'),
(106, 3, 1, 280.00, '2026-06-10'),
(107, 4, 3, 950.00, '2026-06-12'),
(108, 4, 1, 600.00, '2026-06-15'),
(109, 5, 2, 9000.00, '2026-06-18'),
(110, 5, 3, 1500.00, '2026-06-20');


--Update one incorrect expense

UPDATE expenses
SET amount = 350.00
WHERE expense_id = 103;

--delete one expense

DELETE FROM expenses
WHERE amount < 300;