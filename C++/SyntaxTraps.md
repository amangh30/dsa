### **The "Most Vexing Parse" Can Apply to Function Arguments Too**
Most C++ developers know about the **"Most Vexing Parse"**, where something like:
```cpp
std::vector<int> v();  // Declares a function, not a vector!
```
is interpreted as a function declaration instead of a default-constructed vector.

But did you know this can also happen in **function arguments**? For example:
```cpp
void foo(std::string());
```
This doesn’t take a `std::string`—it declares a function parameter that is itself a function returning a `std::string`!

To fix it, you’d need extra parentheses or braces:
```cpp
void foo((std::string()));  // Error in C++03, but fixed in C++11 with {}
void foo(std::string{});    // OK in C++11+
```

### **Bonus: The `>>` Surprise Before C++11**
Before C++11, nested template declarations required a space:
```cpp
std::vector<std::vector<int>> v;  // Error in C++98/03 (>> is shift operator)
std::vector<std::vector<int> > v; // Correct in C++98/03
```
C++11 fixed this, making `>>` valid for closing templates.
