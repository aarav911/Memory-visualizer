# Memory Visualizer — Teaching Toolkit (single-file demos)

This repo contains a small set of curated, single-file HTML+JS demos that visualize how memory (stack and heap),
pointers, function calls and object lifetimes evolve for short C++ example programs.

Included:
- `memory-visualizer.html` — interactive visualizer (single-file) with sample controls and examples.
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

License
MIT
