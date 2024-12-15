# 🧮 C++ Calculator 🛠️  

> **A console-based C++ application for performing basic arithmetic operations with precision and simplicity.**  

---

## 🌟 Project Overview  

This **C++ Calculator Project** is a lightweight and efficient tool for performing fundamental mathematical operations directly from the console. Designed with **object-oriented programming (OOP)** principles, it ensures clarity, modularity, and extensibility for future improvements.  

---

## ✨ Features  

### 📋 Arithmetic Operations  
- ➕ **Addition**: Add numbers to the current result.  
- ➖ **Subtraction**: Subtract numbers from the current result.  
- ✖️ **Multiplication**: Multiply the current result by a number.  
- ➗ **Division**: Divide the current result by a number (handles division by zero).  

### 🛠️ Utility Functions  
- 🔄 **Undo Last Operation**: Revert to the result before the last calculation.  
- 🗑️ **Clear**: Reset the calculator to its default state.  
- 📜 **Operation Logs**: Display the result after each operation with detailed descriptions.  

---

## 🏗️ Code Structure  

### 🛠️ Class: `clsCalculator`  
Encapsulates all calculator functionalities, ensuring organized and reusable code.  

#### **Private Members**  
- `_Result`: Tracks the current calculation result.  
- `_PreviousResult`: Stores the result before the last operation for easy undo functionality.  
- `_LastOperation` & `_LastNumber`: Log details of the last performed operation.  

#### **Public Methods**  
- **Core Operations**: `Add`, `Subtract`, `Multiply`, `Divide`.  
- **Utilities**: `Clear`, `CancelLastOperation`, `PrintResult`.  

### 🔢 Input Validation  
- Division by zero is handled gracefully to avoid runtime errors.  

---

## ⚙️ How It Works  

### Core Workflow  
1. **Initialize** the calculator.  
2. **Perform Operations**: Input numbers and choose from addition, subtraction, multiplication, or division.  
3. **Log Results**: View results and details after each operation.  
4. **Undo or Clear**: Revert or reset the calculator state as needed.  

### Example Output  
```  
Result After Adding 10 is : 10  
Result After Adding 100 is : 110  
Result After Subtracting 20 is : 90  
Result After Dividing 0 is : 90  
Result After Dividing 2 is : 45  
Result After Multiplying 3 is : 135  
Result After Cancelling Last Operation is : 45  
Result After Clear 0 is : 0  
```  

---

## 📚 Further Improvements  

- 🔒 **Enhanced Input Validation**: Add checks for invalid input formats.  
- 🖥️ **GUI Integration**: Upgrade to a graphical user interface for user-friendly interaction.  
- 🔢 **Advanced Operations**: Extend functionality to include exponential, logarithmic, and trigonometric calculations.  
- 📜 **History Log**: Maintain a session log of all operations for review.  

---

## ⚙️ Technologies Used  

- **Language**: C++ 🖥️  
- **Programming Paradigm**: Object-Oriented Programming (OOP) 💻  
- **Console Application**: Clean and user-friendly CLI-based interactions 📂  

---

## 🎯 Learning Outcomes  

This project reinforces several key concepts in C++:  
- ✅ **OOP Fundamentals**: Class design, encapsulation, and method implementation.  
- ✅ **Error Handling**: Graceful handling of edge cases like division by zero.  
- ✅ **Control Structures**: Leverages loops, conditionals, and functions to build a dynamic application.  
- ✅ **Modular Design**: Ensures code clarity and reusability.  

---

## 📜 License  

This project is open-source. Feel free to modify and expand it! 🚀  

---

## 🤝 Contributions  

Contributions are welcome! Submit a pull request to enhance the project. 🙌  

---
