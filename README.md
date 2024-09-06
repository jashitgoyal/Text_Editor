Text Editor - Inspired by Kilo
Author: Jashit Goyal

This project is a lightweight text editor built in C, inspired by the minimalistic kilo editor. It operates within the terminal using raw mode, offering a simple interface with core editing features such as reading, writing, and navigating text files. It also supports more advanced features like syntax highlighting and scrolling. The goal of the project was to create a fully functional, customizable text editor that mimics the behavior of popular terminal editors like vi and nano.

Features :-

1. Raw Mode Operation: The editor operates in terminal raw mode, allowing direct control of keypresses and output.
2. File Handling: Reads and displays existing files while allowing editing within the terminal window.
3. Cursor Movements: Supports precise navigation using arrow keys, moving horizontally and vertically across the text.
4. Scrolling: Handles both vertical and horizontal scrolling, allowing users to navigate through larger files efficiently.
5. Status Bar: Displays information about the file, such as filename, current line, and character position.
6. Syntax Highlighting: Implements basic syntax highlighting for programming languages, making code more readable.
7. Backup Functionality: Contains a mechanism for dynamically adjusting the number of visual UI elements like pipes, enhancing the overall display and interaction.

Keybindings
Arrow Keys: Move the cursor up, down, left, or right.
Ctrl+Q: Quit the editor.
Ctrl+S: Save the current file.
Ctrl+F: Search functionality (coming soon).

Development Timeline

- > Sep 5, 2024
  > Syntax Highlighting: Completed the syntax highlighting feature, allowing for color-coded keywords, strings, and comments based on file type.
  > Working on Syntax Highlighting: Added preliminary support for syntax highlighting and began detecting programming file types.

- > Sep 4, 2024
  > Text Viewing and Status Bar: Added features for reading files and displaying a status bar, which shows information such as file name, cursor position, and the current line number.
  > Scrolling Enhancements: Improved the editor’s scrolling behavior to handle both vertical and horizontal scrolling smoothly.
  > Horizontal and Vertical Scrolling: Implemented scrolling, enabling navigation through files larger than the terminal window.
  > File Reading: Added the ability to read existing files and display their contents, adjusting to the current terminal size.
  > Character Line Reading: Integrated functionality for reading character lines from the user input and rendering them row by row on the screen.

- > Sep 2, 2024
  > Cursor Movements: Added support for cursor movements using arrow keys, allowing navigation across the text.
  > Initial UI Work: Began working on the interface, setting up the display and basic navigation logic.
  > Backup Function for Pipes: Introduced a backup feature to manage and customize the display of pipes (UI elements), enhancing the visual representation of the text.

- > Aug 31, 2024
  > Dynamic Pipe Display: Customized the number of pipes displayed based on the terminal’s size, improving visual clarity and overall layout.

- > Aug 28, 2024
  > Building an Editor: Added features that made the program resemble a functioning text editor, with the ability to edit files and move the cursor.
  > Terminal in Raw Mode: Transitioned the terminal into raw mode, allowing the program to capture keypresses without the terminal’s default behavior, and turned off various terminal flags to customize input handling.

- > Aug 27, 2024
  > Raw Mode & Custom Flags: Switched the terminal into raw mode and disabled many default terminal functionalities, providing greater control over input and output.

- > Aug 22, 2024
  > README Update: Updated the documentation to reflect new features and improvements.
  > Initial Raw Mode Testing: Successfully implemented a mechanism to toggle the terminal between raw mode and normal mode, with proper exit functionality.

- > Aug 22, 2024
  > Keypress Reading: Added the ability to read keypresses from the user in raw mode and implemented a simple quit command (Ctrl+Q).
  > Basic Setup: Created the basic structure and foundational files for the project.
  > Initial Commit: Began the project and established the initial version control setup.

Planned Features

1.Search Functionality: Implementing a search feature to allow users to find specific text in a file.
2.Undo/Redo: Adding functionality for undoing and redoing actions within the editor.
3.Extended Syntax Highlighting: Expanding syntax highlighting to support a wider variety of programming languages and file types.

References

This project was heavily inspired by the Kilo Editor Guide, which provided detailed steps on building a terminal-based text editor.
