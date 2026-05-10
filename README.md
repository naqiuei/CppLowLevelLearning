# ⚡ Low-Level C++ & Systems Programming

Welcome to my personal study tracker and low-level development repository! 🚀

This repository documents my intensive journey of mastering **C++ from the ground up**, designed with a strong focus on **systems programming, computer architecture, memory structures, and software security**.

### 🎯 The Objective
This curriculum is structured to bridge the gap between high-level development and low-level execution. By understanding how the compiler converts code to assembly and how variables reside in RAM, this study path builds a rock-solid foundation for systems programming, security research, and binary analysis.

---

## 🗺️ The 10-Phase Low-Level Curriculum (32 Missions Tracker)

### 📂 Phase 1: Basics & Control Flows — 🟢 66% Completed
Focusing on standard input/output, conditionals, nested loops, binary and modular arithmetic, input validation, and early returns.

- [x] **Mission 1: Hello & Input** (Basic I/O, `std::string`, terminal g++ build)
- [x] **Mission 2: Guess The Number** (Do-while loops, `<random>` generator, logic control)
- [x] **Mission 3: Multiplication Table** (Nested loops, uniform brace initialization)
- [x] **Mission 4: Simple Calculator** (Switch-case break/fall-through prevention, division-by-zero check)
- [x] **Mission 5: Prime Number Checker** (Custom functions, Early Return pattern, guard clauses)
- [x] **Mission 6: Number Reversal** (Digit extraction via `% 10` and `/ 10`, shifting-and-appending, custom mathematically-correct `pow()`)
- [x] **Mission 7: String Reversal** (String indexing, memory sequence, `.length()` analysis)
- [x] **Mission 8: N-Number Statistics** (`std::vector` dynamic arrays, statistics calculator)
- [ ] **Mission 9: FizzBuzz** (Classic modular logic flow)
- [ ] **Mission 10: Star Pyramid** (Nested loops visual formatting)
- [ ] **Mission 11: Rock-Paper-Scissors** (Type-safe `enum class` state management)
- [ ] **Mission 12: Word/Line Counter** (File parser using `std::ifstream` & `std::getline`)

---

### 📂 Phase 2: Pointers, References & Memory Management — ⚪ Not Started
Demystifying physical memory addresses, stack vs. heap allocation, and safe pointer usage.

- [ ] **Mission 13: Pointer Swap & Mutators** (Manipulating variables across stack frames using pointer dereferencing)
- [ ] **Mission 14: Dynamic Array Allocator** (Allocating dynamic memory arrays using `new` and `delete[]` based on dynamic runtime sizes)
- [ ] **Mission 15: Memory Leak Finder Simulator** (Creating intentional memory leaks on the Heap, then tracking and resolving them)

---

### 📂 Phase 3: Object-Oriented Programming (OOP) & Memory Layout — ⚪ Not Started
Building modular class systems and auditing how objects are mapped inside physical RAM bytes.

- [ ] **Mission 16: RPG Character Class Hierarchy** (Constructing class inheritance trees with polymorphism)
- [ ] **Mission 17: Class Memory Layout Auditor** (Calculating physical member offsets and investigating compiler struct-padding alignments via `sizeof` and offset pointer math)
- [ ] **Mission 18: Account Encapsulation Guard** (Securing sensitive data inside objects using access specifiers and deep-copy mechanics)

---

### 📂 Phase 4: Virtual Functions & `vtable` Architecture — ⚪ Not Started
Deep-diving into dynamic dispatch, Virtual Method Tables, and how compiler polymorphism translates to assembly.

- [ ] **Mission 19: Virtual Animal Sound Polymorphism** (Setting up polymorphic interfaces and virtual destructor sequences)
- [ ] **Mission 20: Manual C-Style `vtable` Simulation** (Manually recreating dynamic dispatch using struct-embedded function pointer arrays, mirroring compiled Ghidra assembly outputs)

---

### 📂 Phase 5: Standard Template Library (STL) & Containers Analysis — ⚪ Not Started
Analyzing standard data structure architectures and safe memory scopes.

- [ ] **Mission 21: Key-Value Encrypted Locker** (Building an in-memory secure vault using `std::map`)
- [ ] **Mission 22: STL Vector Growth Inspector** (Monitoring the dynamic reallocation and capacity-doubling mechanics of standard vectors)
- [ ] **Mission 23: Custom Unique Pointer (`MyUniquePtr`)** (Implementing an RAII-compliant smart pointer wrapper to prevent double-free bugs)

---

### 📂 Phase 6: Multi-File Projects, CMake & Compilation Stages — ⚪ Not Started
Working with header files, compilers, dynamic/static linkers, and professional build configurations.

- [ ] **Mission 24: Header-Source Separation Project** (Organizing source code across multiple `.h` and `.cpp` modules)
- [ ] **Mission 25: CMake Multi-Target Library** (Building a CMake structure that compiles static libraries and links them into executables)

---

### 📂 Phase 7: System Programming & Operating System APIs — ⚪ Not Started
Interfacing directly with kernel/system-level boundaries via APIs to understand OS execution contexts.

- [ ] **Mission 26: Process Inspector** (Querying system processes, listing active Process IDs (PIDs), and scanning handle maps)
- [ ] **Mission 27: Multi-Threaded Prime Generator** (Spawning concurrent threads using `std::thread` and resolving race conditions with mutexes)

---

### 📂 Phase 8: Secure Coding & Vulnerability Analysis — ⚪ Not Started
Investigating classic memory safety bugs from both defensive and binary exploit-development angles.

- [ ] **Mission 28: Buffer Overflow Sandbox** (Simulating stack overflow vulnerabilities in controlled buffer scopes, then patching with boundary-checked functions)
- [ ] **Mission 29: Integer Wrap-Around Investigator** (Demonstrating how unexpected integer overflows bypass safety check logic)

---

### 📂 Phase 9: DLL Injection & API Hooking (Function Detours) — ⚪ Not Started
Writing dynamic runtime injectors, modifying target process control flows, and hijacking program execution.

- [ ] **Mission 30: Custom Dynamic Library (DLL)** (Building an exportable dynamic library that pops thread-specific message boxes upon attachment)
- [ ] **Mission 31: API Trampoline Detour** (Writing an inline memory patcher that redirects target execution streams via a raw assembly `JMP` override)

---

### 📂 Phase 10: Memory Scanning & Capstone Project — ⚪ Not Started
Unifying all components to develop a functional systems-level memory manipulation utility.

- [ ] **Mission 32: The Memory Scanner (Cheat Engine Mini)** (An advanced systems utility that attaches to external processes, scans virtual memory ranges for dynamic 4-byte integers, filters matches, and modifies the targeted address values in real-time)
