-- Create a SQL script to insert a new order into an Orders table, then use COMMIT to save the transaction and verify that the new order persists after reconnecting to the database.

//Insert a New Order and Commit the Transaction

START TRANSACTION;

INSERT INTO foodorder (order_id,restaurant_id,user_id,order_total)
VALUES (7, 2,3, 1450.00);

COMMIT;

//Verify the Data
SELECT * FROM foodorder
WHERE order_id = 7;








-- Simulate a Zomato-style food order process: insert two new items into an OrderItems table, then use ROLLBACK to undo the changes before committing. Check that no new items remain in the table after rollback.

CREATE TABLE OrderItems (
    item_id INT PRIMARY KEY,
    order_id INT,
    item_name VARCHAR(100),
    quantity INT
);

START TRANSACTION;

INSERT INTO OrderItems (item_id, order_id, item_name, quantity)
VALUES
(1, 101, 'Margherita Pizza', 2),
(2, 101, 'Cold Drink', 1);

ROLLBACK;

SELECT * FROM OrderItems;










-- In a Flipkart-like shopping cart scenario, use SAVEPOINT to mark a point after adding a product to the Cart table, add another product, then use ROLLBACK TO SAVEPOINT to undo only the last addition. Show the final contents of the Cart table.

CREATE TABLE Cart (
    cart_id INT PRIMARY KEY,
    product_name VARCHAR(100),
    quantity INT,
    price DECIMAL(10,2)
);

START TRANSACTION;

INSERT INTO Cart
VALUES (1, 'Wireless Mouse', 1, 799);

SAVEPOINT sp1;

INSERT INTO Cart
VALUES (2, 'Mechanical Keyboard', 1, 2499);

ROLLBACK TO SAVEPOINT sp1;

COMMIT;

SELECT * FROM Cart;







-- Write a trigger on a Wallet table that automatically deducts the purchase amount from the user's balance whenever a new transaction is inserted, similar to how Paytm updates wallet balance after a payment.

CREATE TABLE Wallet (
    user_id INT PRIMARY KEY,
    user_name VARCHAR(100),
    balance DECIMAL(10,2)
);

CREATE TABLE Transactions (
    transaction_id INT PRIMARY KEY,
    user_id INT,
    purchase_amount DECIMAL(10,2),
    FOREIGN KEY (user_id) REFERENCES Wallet(user_id)
);

INSERT INTO Wallet (user_id, user_name, balance)
VALUES
(1, 'Prins', 5000.00),
(2, 'Rahul', 3000.00);


//trigger created

DELIMITER //

CREATE TRIGGER deduct_wallet_balance
AFTER INSERT ON Transactions
FOR EACH ROW
BEGIN
    UPDATE Wallet
    SET balance = balance - NEW.purchase_amount
    WHERE user_id = NEW.user_id;
END //

DELIMITER ;


//trigger executed

INSERT INTO Transactions (transaction_id, user_id, purchase_amount)
VALUES (101, 1, 1200.00);


//show result
SELECT * FROM Wallet;







-- Use ChatGPT to generate a SQL test scenario where a trigger incorrectly updates a user's balance after an expense entry. Paste the scenario and your corrected trigger code, explaining how you fixed the error.Hint: Ask ChatGPT for a buggy trigger example and a test case that exposes the bug.


DELIMITER //

CREATE TRIGGER wallet_bug
AFTER INSERT ON Transactions
FOR EACH ROW
BEGIN
    UPDATE Wallet
    SET balance = balance + NEW.purchase_amount
    WHERE user_id = NEW.user_id;
END //

DELIMITER ;

INSERT INTO Transactions (transaction_id, user_id, purchase_amount)
VALUES (101, 1, 1000);

SELECT * FROM Wallet;

DROP TRIGGER wallet_bug;

DELIMITER //

CREATE TRIGGER wallet_update
AFTER INSERT ON Transactions
FOR EACH ROW
BEGIN
    UPDATE Wallet
    SET balance = balance - NEW.purchase_amount
    WHERE user_id = NEW.user_id;
END //

DELIMITER ;

UPDATE Wallet
SET balance = 5000
WHERE user_id = 1;

INSERT INTO Transactions (transaction_id, user_id, purchase_amount)
VALUES (102, 1, 1000);

SELECT * FROM Wallet;


Explanation

Bug: The original trigger used:
balance = balance + NEW.purchase_amount;

which added the purchase amount to the wallet balance.

Fix: The corrected trigger uses:

balance = balance - NEW.purchase_amount;

which deducts the purchase amount from the wallet balance whenever a new transaction is inserted, matching the expected behavior of a wallet application like Paytm.