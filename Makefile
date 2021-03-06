OPT = -Wall

OBJS = main.o Date.o Time.o Event.o Calendar.o Control.o View.o SchoolEvent.o WorkEvent.o

a4:	$(OBJS) EventServer.o Array.o
	g++ $(OPT) -o a4 $(OBJS) EventServer.o Array.o

main.o:	main.cc Date.h
	g++ $(OPT) -c main.cc

Time.o:	Time.cc Time.h
	g++ $(OPT) -c Time.cc


Date.o:	Date.cc Date.h
	g++ $(OPT) -c Date.cc


Event.o: Event.cc Event.h 
	g++ $(OPT) -c Event.cc


Calendar.o: Calendar.cc Calendar.h List.h
	g++ $(OPT) -c Calendar.cc

Control.o: Control.cc Control.h
	g++ $(OPT) -c Control.cc

View.o : View.cc View.h
	g++ $(OPT) -c View.cc

WorkEvent.o: WorkEvent.cc WorkEvent.h Event.h
	g++ $(OPT) -c WorkEvent.cc

SchoolEvent.o: SchoolEvent.cc SchoolEvent.h Event.h
	g++ $(OPT) -c SchoolEvent.cc

clean:
	rm -f $(OBJS) a4
