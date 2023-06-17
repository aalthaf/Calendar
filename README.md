# Events Calendar
A program where you can create calendars with school and work events, which are sorted by date and priority respectively. Events are retrieved from the server and added to the specific calendar. More events can be
added to the calendars using user inputs, and uploaded to the server. These events are then printed out by the server


## Compilation
To compile, use `make` command to compile everything

## Launching
Execute the program using the command `./a4 < in.txt` where `in.txt` contains inputs. 
To check for memory leaks use `valgrind ./a4 < in.txt`. 
To simply use the server without any inputs, comment the contents of the launch function and then you can use `./a4` to execute the program after compilation.
