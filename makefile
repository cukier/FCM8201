CC=Ccsc.exe
CFLAGS=+FH +LN -T -A -M -Z +DF +Y=9 +STDOUT

PK2=pk2cmd
PK2FLAGS=-E -P$(DEVICE) -M -R -J -F
DEVICE=PIC18F25K22

all: FCM8201

FCM8201: main.c
	$(CC) $(CFLAGS) main.c
	
burn:
	$(PK2) $(PK2FLAGS) main.hex

clean:
	rm *.cof *.err *.esym *.hex *.lst *.PWI *.STA *.sym *.tre *.DBK