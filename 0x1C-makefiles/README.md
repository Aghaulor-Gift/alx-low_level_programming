#  Makefiles

This project contains a collection of Makefiles and a Python script.

## Makefiles
| File Name | Requirements | Features |
|-----------|--------------|----------|
| 0-Makefile | - Name of the executable: school <br> - Rules: all <br> - Variables: none | - Creates the first Makefile <br> - The 'all' rule builds the executable 'school' |
| 1-Makefile | - Name of the executable: school <br> - Rules: all <br> - Variables: CC, SRC | - Allows customization of the compiler and source files <br> - The 'all' rule builds the executable 'school' |
| 2-Makefile | - Name of the executable: school <br> - Rules: all <br> - Variables: CC, SRC, OBJ, NAME | - Enhanced Makefile with object files support <br> - The 'all' rule recompiles only updated source files |
| 3-Makefile | - Name of the executable: school <br> - Rules: all, clean, oclean, fclean, re <br> - Variables: CC, SRC, OBJ, NAME, RM | - Provides cleaning and recompilation options <br> - Rules 'clean', 'oclean', 'fclean', 're' never fail |
| 4-Makefile | - Name of the executable: school <br> - Rules: all, clean, fclean, oclean, re <br> - Variables: CC, SRC, OBJ, NAME, RM, CFLAGS | - Complete Makefile with customizable compiler flags <br> - Follows the requirements for cleaning and recompilation |
