# Memory Visualizer — Teaching Toolkit (minimalist single file visualization for cpp memory)

This repo contains a single-file HTML+JS demo that visualizes how memory (stack and heap),
pointers, function calls and object lifetimes evolve for short C++ example programs, for teaching and visualization purposes.

Access the visualize: https://aarav911.github.io/Memory-visualizer/

Included:
- `memory-visualizer.html` — interactive visualizer (minimalist, single-file) with sample controls and examples.
- `prog1.cpp` — pointers, functions, recursion (stack & heap interactions).
- `prog2.cpp` — dynamic array, pointer arithmetic, function mutation.
- `prog3.cpp` — RAII & smart pointer demo (object owns heap memory, destructor frees memory).
- Timeline JSON for each program is embedded inside the demo (hard-coded). The visualizer plays a precomputed sequence
  of memory events and animates stack/heap/pointer state for teaching purposes.

How to use
1. Open `memory-visualizer.html` in a modern browser (Chrome/Firefox).
2. Use the controls to push/pop stack frames, allocate/free heap blocks, and create pointers.
3. The demo is pedagogical and intentionally curated for clarity.

Purpose
This toolkit is a teaching aid to explain:
- stack frames and local variables
- heap allocations (`new`/`new[]`) and freeing (`delete`/`delete[]`)
- pointer relationships and pointer arithmetic
- recursion and function call lifetimes
- RAII (destructors) and smart pointers (`std::unique_ptr`)

  Note: this is a purely hard coded animation, and wont work for other cpp examples.

  ###Future ambitions
  If i can create something that take in a general cpp program, and allow me to visualize everything, ie variables, scopes, pointers, heaps and stacks, and other advanced concepts, then THAT WILL BE VERY COOL. 

License
MIT
