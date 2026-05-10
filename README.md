# ⚡ Low-Level C++ & Systems Programming

Welcome to my personal study tracker and low-level development repository! 🚀

This repository documents my intensive journey of mastering **C++ from the ground up**, designed with a strong focus on **systems programming, computer architecture, memory structures, and software security**.

### 🎯 The Objective
This curriculum is structured to bridge the gap between high-level development and low-level execution. By understanding how the compiler converts code to assembly and how variables reside in RAM, this study path builds a rock-solid foundation for systems programming, security research, and binary analysis.

---

## 🗺️ The 12-Phase Low-Level Curriculum (46 Missions Tracker)

### 📂 Phase 1: Basics & Control Flows — 🟢 91% Completed
*Standard I/O, conditionals, nested loops, modular arithmetic, input validation.*

- [x] **Mission 1: Hello & Input** (Basic I/O, `std::string`, terminal build)
- [x] **Mission 2: Guess The Number** (do-while loops, `<random>` generator)
- [x] **Mission 3: Multiplication Table** (nested loops, uniform brace initialization)
- [x] **Mission 4: Simple Calculator** (switch-case, division-by-zero guard)
- [x] **Mission 5: Prime Number Checker** (custom functions, early return pattern)
- [x] **Mission 6: Number Reversal** (digit extraction via `% 10` and `/ 10`, custom pow())
- [x] **Mission 7: String Reversal** (string indexing, `.length()`, `back()`/`pop_back()`)
- [x] **Mission 8: N-Number Statistics** (`std::vector`, incremental min/max/avg)
- [x] **Mission 9: FizzBuzz** (modular logic, condition ordering)
- [x] **Mission 10: Star Pyramid** (nested loops, centering formula 2i-1)
- [x] **Mission 11: Rock-Paper-Scissors** (`enum class`, `static_cast`, `mt19937`)
- [ ] **Mission 12: Word/Line Counter** (`std::ifstream`, `std::getline`, file parsing)

---

### 📂 Phase 2: Pointers, References & Memory Management — ⚪ Not Started
*Physical memory addresses, stack vs. heap allocation, raw pointer ownership.*

- [ ] **Mission 13: Pointer Swap & Mutators** (pointer dereferencing, pass-by-pointer vs pass-by-reference)
- [ ] **Mission 14: Dynamic Array Allocator** (`new[]`, `delete[]`, runtime sizing, reallocation)
- [ ] **Mission 15: Memory Leak Finder Simulator** (intentional heap leaks, AddressSanitizer, Valgrind)
- [ ] **Mission 16: Linked List — Single & Double** (raw pointer chaining, manual node cleanup, ownership)

---

### 📂 Phase 3: Object-Oriented Programming & Memory Layout — ⚪ Not Started
*Class design, encapsulation, operator overloading, physical struct layout in RAM.*

- [ ] **Mission 17: Date/Time Class** (constructor, destructor, operator overloading (+, -, <, <<), rule of three)
- [ ] **Mission 18: RPG Character Class Hierarchy** (inheritance, polymorphism, virtual destructor)
- [ ] **Mission 19: Account Encapsulation Guard** (access specifiers, invariants, deep copy mechanics)
- [ ] **Mission 20: Class Memory Layout Auditor** (`sizeof`, `offsetof`, struct padding, compiler alignment)

---

### 📂 Phase 4: Virtual Functions & `vtable` Architecture — ⚪ Not Started
*Dynamic dispatch internals — how polymorphism translates to assembly and Ghidra output.*

- [ ] **Mission 21: Virtual Animal Sound Polymorphism** (pure virtual, override, virtual destructor chain)
- [ ] **Mission 22: Manual C-Style `vtable` Simulation** (struct with function pointer arrays, mirroring compiled Ghidra vtable output — direct RE prep)

---

### 📂 Phase 5: Modern C++ — Move Semantics, Templates & Lambdas — ⚪ Not Started
*The most skipped, most important phase. Required before any real-world C++ codebase.*

- [ ] **Mission 23: Custom String Class — Rule of Five** (copy ctor, move ctor, copy/move assignment, destructor, noexcept, `std::move`)
- [ ] **Mission 24: Smart Pointers & RAII** (`unique_ptr`, `shared_ptr`, `make_unique`, resource ownership transfer)
- [ ] **Mission 25: Template Stack & Queue** (class templates, `typename`, template instantiation model)
- [ ] **Mission 26: Event System — Lambdas & std::function** (lambda capture semantics, `std::function`, type erasure, observer pattern)

---

### 📂 Phase 6: STL & Containers — ⚪ Not Started
*Standard data structure internals and safe memory scopes.*

- [ ] **Mission 27: Key-Value Encrypted Locker** (`std::map`, ordered traversal, iterator usage)
- [ ] **Mission 28: STL Vector Growth Inspector** (capacity doubling mechanics, reallocation triggers, iterator invalidation)
- [ ] **Mission 29: Word Frequency Counter** (`std::unordered_map`, custom comparator, lambda-based sort)

---

### 📂 Phase 7: Multi-File Projects & CMake — ⚪ Not Started
*Professional build structure — header/source separation, static libraries, linker stages.*

- [ ] **Mission 30: Header-Source Separation** (include guards, forward declarations, .h/.cpp split)
- [ ] **Mission 31: CMake Multi-Target Library** (CMakeLists.txt, static library build, target_link_libraries)

---

### 📂 Phase 8: Concurrency & System Programming — ⚪ Not Started
*OS-level APIs, thread management, lock-free data structures.*

- [ ] **Mission 32: Process Inspector** (querying PIDs, listing active handles, OS process APIs)
- [ ] **Mission 33: Multi-Threaded Prime Generator** (`std::thread`, `std::mutex`, `condition_variable`, race condition detection)
- [ ] **Mission 34: Thread Pool + Future** (`std::future`, `std::promise`, lambda task dispatch, exception propagation)
- [ ] **Mission 35: Lock-Free SPSC Queue** (`std::atomic`, memory ordering — relaxed / acquire / release / seq_cst)

---

### 📂 Phase 9: Binary Analysis & Low-Level Tools — ⚪ Not Started
*Build the tools RE professionals use daily — from scratch. Understand Ghidra from the inside.*

- [ ] **Mission 36: Hex Dump Tool** (binary file I/O, byte-level formatting, endianness, xxd clone)
- [ ] **Mission 37: ELF Parser** (section headers, program headers, symbol tables, string tables — raw binary struct mapping)
- [ ] **Mission 38: RISC-V Disassembler** (bit-field extraction, R/I/S/B-type decoding — bridges assembly coursework directly to RE)
- [ ] **Mission 39: Mini Bytecode VM** (custom opcode set, stack/register dispatch, execution loop — understand VM-based obfuscation)

---

### 📂 Phase 10: Secure Coding & Vulnerability Analysis — ⚪ Not Started
*Classic memory safety bugs from both defensive and exploit-development angles.*

- [ ] **Mission 40: Custom Memory Allocator — Arena & Pool** (placement new, alignment, free-list — heap internals from scratch, RE prerequisite)
- [ ] **Mission 41: Buffer Overflow Sandbox** (stack smashing simulation in controlled scope, boundary-checked patching)
- [ ] **Mission 42: Integer Wrap-Around Investigator** (unsigned overflow, signed UB, how safety checks get bypassed)

---

### 📂 Phase 11: DLL Injection & API Hooking — ⚪ Not Started
*Runtime code injection, execution flow hijacking, function detours.*

- [ ] **Mission 43: Custom Dynamic Library (DLL)** (exported symbols, DllMain attachment, thread-specific message injection)
- [ ] **Mission 44: API Trampoline Detour** (inline memory patcher, raw assembly JMP override, redirecting execution streams)

---

### 📂 Phase 12: Capstone — ⚪ Not Started
*Everything comes together.*

- [ ] **Mission 45: Memory Scanner — Cheat Engine Mini** (process attachment, virtual memory range scan, real-time 4-byte value modification)
- [ ] **Mission 46: Tiny Language Interpreter** (lexer → parser → AST → tree-walking interpreter — compiler internals, design patterns, Visitor)
