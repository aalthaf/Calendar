				Author: Althaf Ahamed Sadique

   Purpose : The purpose of this program is make a two calendars which are either school or Work events.
   The school events are in ascending order of date whereas the work events are in ascending order of priority.
   Events are retrieved from the server and added to their specfic calendars. More events can be
   added to the calendars using inputs. These are then uploaded to the server.These events are then printed out by the server

	      	      	      List of source/header/data files:

			      source		header
			      
			      Calender.cc	Calender.h
			      Event.cc		Event.h
			      Date.cc		Date.h
			      Time.cc		Time.h
			      WorkEvent.cc	WorkEvent.h
			      SchoolEvent.cc	SchoolEvent.h
			      main.cc		List.h
						Array.h
								
			   
	      Compilation: To compile, use "make" command to compile everything. ( For linux)

             Launching: Execute the program using the command "./a4 < in.txt" where in.txt contains inputs. To check for memory leaks
	     		use "valgrind ./a4 < in.txt". To simply use teh server without any inputs , comment the
			contents of the launch function and then you can use "./a4" to execute the program after compilation.
		

	
