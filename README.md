# -COMPILER-DESIGN-BASICS
NAME:MEGHPARNA BHAKAT
INTERN ID:CT04DL159
DOMAIM:C PROGRAMMING
DURATION:4 WEEKS
MENTOR:NEELA SANTOSH

During my internship in C programming, I was assigned a foundational project to implement a Lexical Analyzer using the C language. This task was a part of compiler design basics, and its goal was to scan source code and categorize tokens such as keywords, identifiers, and operators. This exercise not only deepened my understanding of compiler phases but also strengthened my command over C programming fundamentals like file handling, string operations, loops, and conditionals.

The lexical analyzer I developed reads a source code file (input.txt) character by character. When it detects a sequence that could represent a keyword, identifier, or operator, it applies logical checks to categorize it accordingly. Keywords like int, return, or if are matched against a predefined list. If the word isn't a keyword, it's considered an identifier. For operators, the analyzer checks for characters like +, -, =, etc.

The most significant takeaway from this task was understanding how compilers break down source code. Before this project, I saw C only as a language to solve algorithmic problems, but now I understand how compilers parse and translate code, which is a deeper and more intricate process. This also introduced me to the concept of lexical tokens, which are essential for syntax analysis and semantic checks that happen in later compiler phases.

Moreover, I learned how to work with file handling in C, using functions like fopen, fgetc, and fclose. Handling strings with character arrays, checking for alphanumeric patterns, and managing loops efficiently were skills I refined during this project. Error handling was another aspect I dealt with—ensuring the analyzer behaves gracefully when the file is missing or empty.

From an application perspective, lexical analyzers are the first phase in any compiler, and understanding their design is crucial for anyone pursuing systems programming, language processing tools, or even interpreters and scripting engines. They are also foundational in tools like syntax highlighters, linters, and IDEs that offer real-time code analysis.

The development environment I used for this project was Visual Studio Code (VS Code) on a Windows platform, along with the GCC compiler for building the C program. The terminal inside VS Code made it easy to compile the code using gcc lexical_analyzer.c -o lexical_analyzer and execute it with ./lexical_analyzer. The editor also provided useful feedback for syntax errors and made code navigation simpler.

By integrating file input and output, string manipulation, control structures, and custom logic for classification, this project gave me hands-on experience in building a real-world tool using C. It was satisfying to see how such a seemingly simple tool lays the groundwork for more advanced compiler components like syntax analyzers, parsers, and code generators.

To summarize, this internship project gave me a deeper appreciation for the internal workings of programming languages. I not only honed my technical skills in C but also learned how high-level code is broken into parts and interpreted by machines. This experience has prepared me for more advanced topics in systems programming, and I am now more confident in writing programs that interact closely with hardware and system software. It has also motivated me to explore compiler design more seriously, possibly even contributing to open-source tools in the future.


##OUTPUT
![Image](https://github.com/user-attachments/assets/ce36634a-803d-49e2-aaba-532e1f5ccb06)
