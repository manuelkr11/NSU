# Solution of the exercises

## Exercise 1

### What is the difference between git and github?

Git is a version control system that allows developers to manage and track changes to their code over time. It is a command-line tool that can be used locally on a developer's machine. GitHub, on the other hand, is a web-based hosting service for Git repositories. It provides a centralized platform for developers to store and collaborate on Git repositories, as well as additional features such as issue tracking, pull requests, and code review tools.

### Name 3 benefits of a version control system:

- Version control systems allow for the tracking of changes to code over time, making it easier to roll back to previous versions if necessary.
- They enable multiple developers to collaborate on the same codebase without conflicts or confusion, with the ability to merge changes together.
- They provide a centralized location for code storage and collaboration, which can help improve organization, documentation, and transparency.

### Name 3 alternatives to git:

- Mercurial
- Subversion (SVN)
- Perforce

### Name 2 differences between git and other version control systems:

- Git is a distributed version control system, which means that every developer has a full copy of the repository, including the entire history of changes. Other version control systems like Subversion (SVN) are centralized, which means that there is a single server that contains the repository.
- Git uses a content-addressable filesystem to store and manage changes to files, while other version control systems use delta-based storage mechanisms. This allows Git to handle large codebases more efficiently and with better performance.

### Name known issues related to game engines (Unreal, Unity) and version control systems:

- One common issue with game engines such as Unreal and Unity is that they generate large binary files, such as textures and models, that are difficult to manage and version with traditional version control systems. This can result in slow performance and large repository sizes.
- Another issue is that game engine projects often involve multiple developers working on different components of the game, which can lead to conflicts and merge issues when changes are made simultaneously. This can be compounded by the fact that game engines often have complex file structures and dependencies between files.

## Exercise 2

### Describe a logging system with your own words:
A logging system is a software tool that records information about the events occurring in a computer application (ore even a computer system). It can also stores the information and therefore is useful for troubleshooting issues and/or monitoring and upgrading system performance.

### What is the difference between git submodules and git subtrees?
Both git submodules and git subtrees are tools that allow developers to include and manage code from external repositories within a git repository. Git submodules allow external repositories to be included as separate submodules in a git repository, while git subtrees allow external repositories to be merged and treated as part of the main repository.

### What is a build system in C++? Name 3 build systems:
A build system is a software tool or set of tools that automates the process of compiling source code into executable programs or libraries. A build system typically manages dependencies, compiles source code, links object files, and generates the final executable or library.
- premake5 (as used in our project by the cherno)
- CMake
- GNU Make

### What is a package manager in C++? Name 3 package manager:
A package manager is a software tool or system that automates the process of installing, upgrading, and managing libraries, dependencies, and other software components used in C++ projects. A package manager typically provides a centralized repository of packages, metadata about packages, and tools to download and install packages.
- Conan
- Vcpkg
- Cget

## Exercise 3

### What is the difference between a dynamic linked library and a static library?
Dynamic linked libraries are loaded into memory at runtime. This is why the application does not have to be recompiled when a change/update happens in the DLL. Static libraries on the other hand are linked directly to the application at runtime. This increases the size of the executable of course, as the static library becomes part of it.

### Describe an event system with your own words:
A game engine needs an event system to enable and coordinate interactions between various elements of the game. An event system is a way to respond to events in the game such as key presses, mouse movements, collisions, player actions, or timer events. Without an event system, the engine would constantly monitor all elements of the game to see if an action needs to be taken.

### What is a Design Pattern?
In software engineering, a design pattern is a general, reusable solution to a commonly occurring problem in software design. It is a proven approach to solving a specific type of problem that can be adapted and reused in different situations. They can be categorized into three groups. Creational patterns are concerned with object creation mechanisms, trying to create objects in a manner suitable to the situation. Structural patterns are concerned with object composition and aim to provide relationships between objects. Behavioral patterns are concerned with communication between objects and how they operate with one another.

### Name and describe 2 Design Patterns (except façade or adapter):
The Singleton pattern is a creational design pattern that ensures that only one instance of a class can be created, and provides a global point of access to that instance. This is achieved by making the class's constructor private and providing a static method that returns a single instance of the class. This is useful when a single instance of a class needs to coordinate actions across the system, such as managing a shared resource or configuration settings. The Observer pattern is a behavioral design pattern that defines a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically. In this pattern, the subject maintains a list of its dependents (observers) and notifies them automatically of any changes to its state. This is useful when you need to maintain consistency between related objects or when you want to be notified of changes in a system.

## Exercise 4

### What is a precompiled header? Name pros and cons:
A precompiled header is a tool used to speed up the compilation progress when having multiple source files. It creates a precompiled file that contains commonly used header files and definitions that can be reused across multiple files, rather than compiling these headers from scratch everytime.
- Pros:
  - Faster compilation
  - Reduced Memory Usage
  - Easier to fix/change header files, as only the PCH-file has to be recompiled
- Cons:
  - Increased build time for the first compilation
  -  If header files are modified frequently, the precompiled header may become outdated, which can lead to longer compilation times or even build errors.

### Describe the layer of abstraction with your own words:

Abstraction means providing a simpler view of code or system that helps users or developers interact with it without needing to know all the underlying details. Abstraction is like using a remote control to operate a TV - you don't need to understand all the technical details of how the TV works, but you can use the remote to perform the functions you need.

### Name the SOLID principles and describe them briefly:

The SOLID principles are a set of five design principles that are commonly used in object-oriented software development. They consist of:

- Single Responsibility Principle (SRP): A class should have only one responsibility, and all of its methods and properties should be related to that responsibility.
- Open/Closed Principle (OCP): This principle states that a class should be open for extension but closed for modification.
- Liskov Substitution Principle (LSP): A subclass should be able to be used anywhere its parent class is used, without causing unexpected behavior or errors.
- Interface Segregation Principle (ISP): This principle states that a class should not be forced to depend on methods it does not use.
- Dependency Inversion Principle (DIP): This principle states that high-level modules should not depend on low-level modules.