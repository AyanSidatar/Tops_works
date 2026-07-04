--
-- Database: `assessment`
--

DELIMITER $$
--
-- Procedures
--
CREATE DEFINER=`root`@`localhost` PROCEDURE `GetMonthlyUserExpense` (IN `p_user_id` INT, IN `p_month` INT, IN `p_year` INT)   BEGIN
    SELECT
        u.name,
        SUM(e.amount) AS TotalExpense
    FROM users u
    INNER JOIN expenses e
        ON u.user_id = e.user_id
    WHERE e.user_id = p_user_id
      AND MONTH(e.expense_date) = p_month
      AND YEAR(e.expense_date) = p_year
    GROUP BY u.name;
END$$

DELIMITER ;

-- --------------------------------------------------------

--
-- Stand-in structure for view `activeusersview`
-- (See below for the actual view)
--
CREATE TABLE `activeusersview` (
`name` varchar(50)
,`email` varchar(100)
);

-- --------------------------------------------------------

--
-- Table structure for table `categories`
--

CREATE TABLE `categories` (
  `category_id` int(11) NOT NULL,
  `category_name` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `categories`
--

INSERT INTO `categories` (`category_id`, `category_name`) VALUES
(1, 'Food'),
(2, 'Rent'),
(3, 'Entertainment');

-- --------------------------------------------------------

--
-- Table structure for table `expenses`
--

CREATE TABLE `expenses` (
  `expense_id` int(11) NOT NULL,
  `user_id` int(11) DEFAULT NULL,
  `category_id` int(11) DEFAULT NULL,
  `amount` decimal(10,2) DEFAULT NULL,
  `expense_date` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `expenses`
--

INSERT INTO `expenses` (`expense_id`, `user_id`, `category_id`, `amount`, `expense_date`) VALUES
(101, 1, 1, 450.00, '2026-06-01'),
(102, 1, 2, 8000.00, '2026-06-02'),
(103, 2, 1, 350.00, '2026-06-03'),
(104, 2, 3, 1200.00, '2026-06-05'),
(105, 3, 2, 7500.00, '2026-06-07'),
(107, 4, 3, 950.00, '2026-06-12'),
(108, 4, 1, 600.00, '2026-06-15'),
(109, 5, 2, 9000.00, '2026-06-18'),
(110, 5, 3, 1500.00, '2026-06-20'),
(112, 3, 2, 2500.00, '2026-06-28');

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `user_id` int(11) NOT NULL,
  `name` varchar(50) DEFAULT NULL,
  `email` varchar(100) DEFAULT NULL,
  `created_at` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`user_id`, `name`, `email`, `created_at`) VALUES
(1, 'Alice Johnson', 'alice@example.com', '2026-01-10'),
(2, 'Bob Smith', 'bob@example.com', '2026-02-15'),
(3, 'Charlie Brown', 'charlie@example.com', '2026-03-20'),
(4, 'Diana Patel', 'diana@example.com', '2026-04-05'),
(5, 'Ethan Shah', 'ethan@example.com', '2026-05-12');

-- --------------------------------------------------------

--
-- Structure for view `activeusersview`
--
DROP TABLE IF EXISTS `activeusersview`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `activeusersview`  AS SELECT `users`.`name` AS `name`, `users`.`email` AS `email` FROM (`users` join `expenses` on(`users`.`user_id` = `expenses`.`user_id`)) GROUP BY `users`.`user_id`, `users`.`name`, `users`.`email` HAVING count(`expenses`.`expense_id`) > 5 ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `categories`
--
ALTER TABLE `categories`
  ADD PRIMARY KEY (`category_id`);

--
-- Indexes for table `expenses`
--
ALTER TABLE `expenses`
  ADD PRIMARY KEY (`expense_id`),
  ADD KEY `user_id` (`user_id`),
  ADD KEY `category_id` (`category_id`);

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`user_id`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `expenses`
--
ALTER TABLE `expenses`
  ADD CONSTRAINT `expenses_ibfk_1` FOREIGN KEY (`user_id`) REFERENCES `users` (`user_id`),
  ADD CONSTRAINT `expenses_ibfk_2` FOREIGN KEY (`category_id`) REFERENCES `categories` (`category_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
