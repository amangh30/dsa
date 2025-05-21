### **C++ Smart Pointers**
In C++, raw pointers (`T*`) require manual memory management (`new`/`delete`). **Smart pointers** (`unique_ptr`, `shared_ptr`, `weak_ptr`) from the `<memory>` header handle deletion automatically when the pointer goes out of scope.

#### **1. `unique_ptr`: Exclusive Ownership**
- Only one pointer can own the memory.
- Automatically deletes the object when the `unique_ptr` is destroyed.

```cpp
#include <iostream>
#include <memory> // For smart pointers
using namespace std;

class Book {
public:
    string title;
    Book(string t) : title(t) {
        cout << "Book \"" << title << "\" created." << endl;
    }
    ~Book() {
        cout << "Book \"" << title << "\" destroyed." << endl;
    }
};

int main() {
    // Create a unique_ptr to a Book
    unique_ptr<Book> bookPtr = make_unique<Book>("The C++ Programming Language");

    // Access the object like a raw pointer
    cout << "Reading: " << bookPtr->title << endl;

    // No need to delete! Memory is freed automatically when bookPtr goes out of scope.
    return 0;
}
```

**Output:**
```
Book "The C++ Programming Language" created.
Reading: The C++ Programming Language
Book "The C++ Programming Language" destroyed.
```

---

#### **2. `shared_ptr`: Shared Ownership**
- Multiple pointers can own the same object.
- Memory is freed when the **last** `shared_ptr` is destroyed.

```cpp
shared_ptr<Book> book1 = make_shared<Book>("Clean Code");
shared_ptr<Book> book2 = book1; // Both point to the same Book
cout << book1->title << endl;   // "Clean Code"
// Memory freed after book1 and book2 are gone.
```

---

#### **3. `weak_ptr`: Break Circular References**
- Used with `shared_ptr` to avoid reference cycles (e.g., in graphs).
- Does not increase the reference count.

```cpp
weak_ptr<Book> weakBook = book1;
if (auto temp = weakBook.lock()) { // Convert to shared_ptr temporarily
    cout << temp->title << endl;
}
```

---

### **Why Smart Pointers?**
✅ **No memory leaks**: Automatic deletion when pointers go out of scope.
✅ **Safer code**: Avoids dangling pointers and double-deletion.
✅ **Clear ownership semantics**:
   - Use `unique_ptr` for exclusive ownership.
   - Use `shared_ptr` for shared ownership.
