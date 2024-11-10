# Bank Account Problem

## Problem Description:

Create a class `BankAccount` that models a simple bank account. The class should contain the following:

### Attributes:

- `accountHolder` (string)  
- `accountNumber` (integer)  
- `balance` (double)

### Methods:

1. **Constructor**:  
   - Initializes the `accountHolder` to an empty string, `accountNumber` to `0`, and `balance` to `0.0`.

2. **Setter Method**: `setAccountInfo()`  
   - Takes parameters to set the `accountHolder` name, `accountNumber`, and initial `balance`.
   - Ensures that the `balance` is not negative. If the `balance` is negative, set it to `0.0` and print:  
     `"Balance cannot be negative. Setting balance to 0.0"`.

3. **Getter Method**: `getAccountInfo()`  
   - Prints the `accountHolder` name, `accountNumber`, and `balance`.

4. **Deposit Method**: `deposit()`  
   - Takes an amount to deposit into the account.
   - Validates that the deposit amount is positive. If negative, print:  
     `"Deposit amount must be positive."`.

5. **Withdraw Method**: `withdraw()`  
   - Takes an amount to withdraw from the account.
   - Validates that the withdrawal amount is not more than the current balance. If the withdrawal is more than the balance, print:  
     `"Insufficient funds."`.

### Requirements:

- Use **proper encapsulation** (attributes should be private).
- Use **getter and setter** methods to access and modify the private attributes.
- Perform **input validation** for both the deposit and withdrawal amounts.

---

