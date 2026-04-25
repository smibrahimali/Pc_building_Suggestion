MIB Computers PC Builder
                        This is a simple console-based C++ application that helps users select a PC build based on their budget.
                        The program provides a menu with various options, including recommendations, pre-built systems, and information about the company.

Features
        Budget-based Recommendations: Users can input their budget, and the program will suggest a PC build with a list of components and a total price.
        Pre-defined Builds: The application includes several pre-defined PC builds for different price ranges.
        Company Information: A dedicated section provides details about MIB Computers, its services, and values.
        User Reviews: Users can provide feedback and reviews on the suggested builds.
        Interactive Interface: The program uses console commands to clear the screen and change text color for a more engaging user experience.
        Components and Pricing

The code includes a struct PCComponent to store the name and price of various computer parts. 
These components are categorized as:
                                    CPU
                                        RAM
                                            GPU
                                                Storage
                                                        Motherboard
                                                                    PSU
                                                                        Case
                                                                            Cooling

The prices are hardcoded in the C++ file and are used to calculate the total price of each recommended build.

How to Run
Compiler: You will need a C++ compiler (like g++).
Compile: Compile the PBS.cpp file using your compiler.
For example:
            g++ PBS.cpp -o pc_builder
            Run: Execute the compiled file.
            ./pc_builder

Development
            This project was created to demonstrate a basic interactive console application in C++.
            The code uses windows.h for console-specific functions like changing text color,
            which means it is intended for use on a Windows operating system.

