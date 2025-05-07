# ATM Simulation Program

This project is a simple ATM simulation program written in C++. It allows users to perform basic banking operations such as withdrawing cash, depositing cash, and checking their account balance.

## Features
1. **Withdraw Cash**: Users can withdraw a specified amount from their account, provided they have sufficient funds and the amount is a multiple of 10.
2. **Deposit Cash**: Users can deposit a specified amount into their account, provided the amount is a multiple of 10.
3. **Check Balance**: Users can view their current account balance.
4. **Exit**: Users can exit the program at any time.

## How It Works
1. The program initializes a bank card with predefined details (e.g., card owner, card number, balance, and PIN).
2. Users are prompted to enter their PIN to access the ATM.
3. Once authenticated, users can select an operation from the menu.
4. The program validates inputs (e.g., positive amounts, multiples of 10) and updates the account balance accordingly.

## Usage
1. Compile the program using a C++ compiler (e.g., `g++ ATM.cpp -o ATM`).
2. Run the compiled program (`ATM.exe` on Windows or `./ATM` on other platforms).
3. Follow the on-screen instructions to perform ATM operations.

## Example
- **Initial Balance**: $1000.00
- **Withdraw**: $100
- **New Balance**: $900.00
- **Deposit**: $200
- **New Balance**: $1100.00

## Notes
- The program uses a hardcoded PIN (`1234`) for authentication.
- The initial balance is set to `$1000.00`.
- Only amounts that are multiples of 10 are accepted for withdrawal and deposit.

## Future Improvements
- Add support for multiple bank cards.
- Implement persistent storage for account data.
- Enhance security by masking PIN input.
- Add support for currency denominations during withdrawal.

## Acknowledgments
This algorithm was written by Padmaraj Nidagundi, a lecturer at RTU, as part of the **Algorithmization Practice** course.  
The implementation of the algorithm in C++ was done by myself, a student at RTU (Riga Technical University in Latvia).

## References
- [Additional Task To Students - Mini Project Using Algorithm To Code](https://estudijas.rtu.lv/course/view.php?id=693683)
- [Constructors and Member Initializer Lists](https://en.cppreference.com/w/cpp/language/constructor)

## Author
This project was created for educational purposes.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact
For any inquiries or feedback, please contact:
- Email: batexbafik1@gmail.com
- GitHub:https://github.com/batexbafika/Mini-project