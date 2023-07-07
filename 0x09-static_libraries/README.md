0x09. C - Static libraries

Resources
Read or watch:

What Is A “C” Library? What Is It Good For?
Creating A Static “C” Library Using “ar” and “ranlib”
Using A “C” Library In A Program
What is difference between Dynamic and Static library(Static and Dynamic linking) 


man or help:
ar
ranlib
nm


Tasks
0. A library is not a luxury but one of the necessities of life
mandatory
Create the static library libmy.a containing all the functions listed below:
If you haven’t coded all of the above functions create empty ones with the right prototype.
Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.

1. Without libraries what have we? We have no past and no future
mandatory
Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
