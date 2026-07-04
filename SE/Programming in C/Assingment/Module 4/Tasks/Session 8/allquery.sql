-- Write a PL/SQL block that declares two variables: one for a user's name (VARCHAR2) and one for their age (NUMBER). Assign values and print both using DBMS_OUTPUT.PUT_LINE.


DELIMITER //

CREATE PROCEDURE ShowUser()
BEGIN
    DECLARE user_name VARCHAR(50);
    DECLARE user_age INT;

    SET user_name = 'Mahiman';
    SET user_age = 21;

    SELECT CONCAT('Name: ', user_name) AS Name;
    SELECT CONCAT('Age: ', user_age) AS Age;
END //

DELIMITER ;


CALL `ShowUser`();



-- Create a PL/SQL block that uses an IF statement to check if a given order amount is above 500. If yes, print 'Eligible for free delivery', else print 'Delivery charges apply'.

DELIMITER //

CREATE PROCEDURE CheckDelivery()
BEGIN
    DECLARE order_amount INT DEFAULT 750;

    IF order_amount > 500 THEN
        SELECT 'Eligible for free delivery' AS Message;
    ELSE
        SELECT 'Delivery charges apply' AS Message;
    END IF;
END //

DELIMITER ;


CALL CheckDelivery();






-- Write a PL/SQL block that uses a simple LOOP to print the numbers 1 to 5 using DBMS_OUTPUT.PUT_LINE.Hint: Use a counter variable and EXIT WHEN condition inside the loop.

DELIMITER //

CREATE PROCEDURE PrintNumbers()
BEGIN
    DECLARE counter INT DEFAULT 1;

    my_loop: LOOP
        SELECT counter AS Number;

        SET counter = counter + 1;

        IF counter > 5 THEN
            LEAVE my_loop;
        END IF;
    END LOOP;
END //

DELIMITER ;

CALL `PrintNumbers`();






-- Declare a cursor in PL/SQL to select all product names from a table called PRODUCTS. Fetch each product name and print it using DBMS_OUTPUT.PUT_LINE.Hint: Assume the PRODUCTS table has a column PRODUCT_NAME.

DELIMITER //

CREATE PROCEDURE ShowProducts()
BEGIN
    DECLARE done INT DEFAULT FALSE;
    DECLARE p_name VARCHAR(100);

    DECLARE product_cursor CURSOR FOR
        SELECT PRODUCT_NAME FROM PRODUCTS;

    DECLARE CONTINUE HANDLER FOR NOT FOUND
        SET done = TRUE;

    OPEN product_cursor;

    read_loop: LOOP
        FETCH product_cursor INTO p_name;

        IF done THEN
            LEAVE read_loop;
        END IF;

        SELECT p_name AS Product_Name;
    END LOOP;

    CLOSE product_cursor;
END //

DELIMITER ;


CALL `ShowProducts`();




-- Write a PL/SQL block that tries to divide two numbers entered as variables. If a division by zero occurs, catch the exception and print 'Cannot divide by zero'. Otherwise, print the result.

DELIMITER //

CREATE PROCEDURE DivideNumbers()
BEGIN
    DECLARE num1 INT DEFAULT 10;
    DECLARE num2 INT DEFAULT 0;
    DECLARE result DECIMAL(10,2);

    IF num2 = 0 THEN
        SELECT 'Cannot divide by zero' AS Message;
    ELSE
        SET result = num1 / num2;
        SELECT result AS Result;
    END IF;
END //

DELIMITER ;


CALL DivideNumbers();