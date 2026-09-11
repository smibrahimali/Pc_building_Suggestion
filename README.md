# MIB Computers — PC Building Suggestion

A console-based C++ application that recommends a complete PC build based on the user's budget. It also lets users browse individual components, sign up / log in, and read about the fictional "MIB Computers" shop.

## Features

- **Budget-based build recommendations** — enter a budget (in PKR) and get a full build across 8 categories (CPU, RAM, GPU, Storage, Motherboard, PSU, Case, Cooling) with a running total, chosen from predefined price tiers ranging from Rs. 10,000 to Rs. 1,158,000.
- **Component catalog** — browse every available CPU, RAM kit, GPU, storage drive, motherboard, power supply, case, and cooler with prices, independent of the recommendation flow.
- **Sign up / Login** — a simple session-based credential check gates access to the recommendation engine.
- **Review prompt** — after each recommendation, the user can leave short feedback on the suggested build.
- **About screen** — an animated, typewriter-style company blurb plus project credits.
- **Colored console UI** — uses Windows console text-color APIs and ASCII-art branding.

## How it works

1. **Main menu** — Sign up, Login, All Components, About, Exit.
2. **Sign up** creates a temporary username/password for the current run only (nothing is saved to disk).
3. **Login** checks those credentials, then asks for a budget and prints a matching build with a total price.
4. **All Components** lets you browse each part category on its own, with a shortcut back to the main menu or between categories.
5. **About** shows the team behind the project and a short pitch, printed with a typewriter effect.

## Budget tiers

| Budget range (Rs.)     | Outcome                                          |
|-------------------------|--------------------------------------------------|
| > 1,158,000              | No pre-built recommendation; offers to check again |
| 900,000 – 1,158,000      | Flagship build (e.g. Ryzen 7 9800X3D / RTX 5090)  |
| 750,000 – 899,999        | High-end build                                    |
| 625,000 – 749,999        | High-end build                                    |
| 350,000 – 624,999        | Upper mid-range build                             |
| 200,000 – 349,999        | Mid-range build                                   |
| 100,000 – 199,999        | Mid-range build                                   |
| 65,000 – 99,999          | Budget build                                      |
| 35,000 – 64,999          | Budget build                                      |
| 20,000 – 34,999          | Entry-level build                                 |
| 10,000 – 19,999          | Entry-level build                                 |
| < 10,000                | Budget too low for a recommendation               |

All prices and part choices are hardcoded in `PBS.cpp.cpp` and reflect the Pakistani retail market (PKR) — update them there as prices change.

## Requirements

- **Windows** — the program relies on `<windows.h>` and `<conio.h>` for console colors and keypress input, so it will not build as-is on Linux or macOS.
- A C++ compiler, e.g. **MinGW g++**, or the bundled **Code::Blocks** project.

## Build & run

### Using g++ (MinGW)
```bash
g++ Pc-Building-Suggestion-master/PBS.cpp.cpp -o pc_builder.exe
pc_builder.exe
```

### Using Code::Blocks
1. Open `Pc-Building-Suggestion-master/PBS.cbp` in Code::Blocks.
2. Build the Debug or Release target.
3. Run from the IDE, or launch the executable from `bin/Debug` or `bin/Release`.

## Project structure

```
Pc-Building-Suggestion-master/
├── PBS.cpp.cpp   # All application logic (menus, components, pricing, UI)
├── PBS.cbp       # Code::Blocks project file
├── PBS.layout    # Code::Blocks editor layout (safe to ignore)
└── Readme.txt    # Original plain-text notes
```

## Known limitations

- Windows-only console app; no cross-platform support out of the box.
- Credentials and reviews exist only for the current run — nothing persists between sessions.
- Prices and component lists are hardcoded, so keeping them current requires editing the source directly.
- Menu navigation relies on `goto` statements, which work but make the control flow harder to extend.

## Credits

Created by **Muzammil Ansari**, **Syed Bilal Ali**, and **Syed Muhammad Ibrahim Ali**.

## License

No license file is currently included in the repository. Consider adding one (e.g. MIT) if you plan to share this project or accept contributions.
