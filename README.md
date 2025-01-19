# std::vector<bool> Specialization: A Source of Subtle Bugs

This repository demonstrates a common, yet often overlooked, issue with `std::vector<bool>` in C++.  The standard specialization of `std::vector<bool>` optimizes space by storing booleans as bits within a memory block. While this saves memory, it deviates from the standard `std::vector` behavior, leading to unexpected behavior and potential bugs.

**Issues:**

* **Non-standard element access:**  You cannot directly access elements using `vec[i]`.  Instead, you may need to use methods like `vec.at(i)` or iterators.
* **Iterator invalidation:**  Operations that resize the vector can invalidate iterators in ways different from other vector types.
* **Lack of direct element assignment:**  The behavior of assignment (`=`) might be different from your expectations.
* **Algorithm compatibility:**  Some standard algorithms might not work as expected with `std::vector<bool>`.

**Workarounds:**

If you encounter unexpected behavior with `std::vector<bool>`, consider using a standard `std::vector<char>` or `std::vector<int>` to store boolean values (though this will cost more memory).

This example highlights the importance of understanding the implications of using specialized containers in C++.