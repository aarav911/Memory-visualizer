# Memory Visualizer — Teaching Toolkit (minimalist single file visualization for cpp memory)

This repo contains a single-file HTML+JS demo that visualizes how memory (stack and heap),
pointers, function calls and object lifetimes evolve for short C++ example programs, for teaching and visualization purposes.

Access the visualizer: https://aarav911.github.io/Memory-visualizer/

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

### Future ambitions
Right now this visualizer is a small, hand-crafted teaching tool. I built it mainly to make a few concepts easier to see, and to remind myself how much I enjoy breaking things down visually.

At some point, I’d love to take this idea further, ideally into something that can accept a general C++ program and generate a full execution trace: variables, scopes, pointers, heap activity, call stacks, everything. Even a basic version of that would be very cool.

The rough idea is to instrument the program during compilation, capture events like function calls, allocations, and variable updates, and then feed that into the visualizer so it can replay the execution step by step. Nothing too fancy:  just a clean, intuitive way to see what the machine is doing underneath your code.

I can also see how this could potentially be a sort of debugger, and help up understand the algorithms and the step by step working of any general program... I am pretty sure that this is very very difficult. But, lets see...
License
MIT
