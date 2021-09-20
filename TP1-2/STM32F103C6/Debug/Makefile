###############################################################################
# Makefile for project 
###############################################################################

## General options
PROJECT = 
MCU = STM32F103C6
COMPILER = "Keil for ARM"
TARGET = Debug
SHELL = C:\WINDOWS\system32\cmd.exe

## Tools general options
ASMFLAGS=--cpu=cortex-m3 --thumb -g
CCFLAGS=--cpu=cortex-m3 --thumb -I.. -I../../../../../../../../Keil_v5/ARM/CMSIS/Include -g
LDFLAGS=--scatter ../stm32f103x6.sct

## Processing Tools
CC=armcc.exe
LD=armlink.exe
ASM=armasm.exe
BIN2HEX=fromelf.exe
#  C:/Users/Edelmiro/Desktop/Taller de proyecto I/Proyectos/TP1-2/STM32F103C6/Debug/Debug.elf: TOOL=LD
#     C:/Users/Edelmiro/Desktop/Taller de proyecto I/Proyectos/TP1-2/STM32F103C6/Debug/main.o: TOOL=CC
#        C:/Users/Edelmiro/Desktop/Taller de proyecto I/Proyectos/TP1-2/STM32F103C6/main.c
#     C:/Users/Edelmiro/Desktop/Taller de proyecto I/Proyectos/TP1-2/STM32F103C6/Debug/SYSTEM~1.o: TOOL=CC
#        C:/Users/Edelmiro/Desktop/Taller de proyecto I/Proyectos/TP1-2/STM32F103C6/system_stm32f1xx.c
#     C:/Users/Edelmiro/Desktop/Taller de proyecto I/Proyectos/TP1-2/STM32F103C6/Debug/STARTU~1.o: TOOL=ASM
#        C:/Users/Edelmiro/Desktop/Taller de proyecto I/Proyectos/TP1-2/STM32F103C6/startup_stm32f103.s
#     C:/Users/Edelmiro/Desktop/Taller de proyecto I/Proyectos/TP1-2/STM32F103C6/Debug/lcd.o: TOOL=CC
#        C:/Users/Edelmiro/Desktop/Taller de proyecto I/Proyectos/TP1-2/STM32F103C6/lcd.c
#     C:/Users/Edelmiro/Desktop/Taller de proyecto I/Proyectos/TP1-2/STM32F103C6/Debug/keypad.o: TOOL=CC
#        C:/Users/Edelmiro/Desktop/Taller de proyecto I/Proyectos/TP1-2/STM32F103C6/keypad.c
#     C:/Users/Edelmiro/Desktop/Taller de proyecto I/Proyectos/TP1-2/STM32F103C6/Debug/clockhms.o: TOOL=CC
#        C:/Users/Edelmiro/Desktop/Taller de proyecto I/Proyectos/TP1-2/STM32F103C6/clockhms.c
#     C:/Users/Edelmiro/Desktop/Taller de proyecto I/Proyectos/TP1-2/STM32F103C6/Debug/seos.o: TOOL=CC
#        C:/Users/Edelmiro/Desktop/Taller de proyecto I/Proyectos/TP1-2/STM32F103C6/seos.c
#     C:/Users/Edelmiro/Desktop/Taller de proyecto I/Proyectos/TP1-2/STM32F103C6/Debug/PASSWO~1.o: TOOL=CC
#        C:/Users/Edelmiro/Desktop/Taller de proyecto I/Proyectos/TP1-2/STM32F103C6/password_manager.c

# Build tree:
all:	Debug

Debug:	Debug.elf

Debug.elf:	main.o SYSTEM~1.o STARTU~1.o lcd.o keypad.o clockhms.o seos.o PASSWO~1.o 
	$(LD)  $(LDFLAGS)  "main.o" "SYSTEM~1.o" "STARTU~1.o" "lcd.o" "keypad.o" "clockhms.o" "seos.o" "PASSWO~1.o" --output "Debug.elf"

main.o:	../main.c 
	$(CC) $(CCFLAGS)  "../main.c" -c -o "main.o"

SYSTEM~1.o:	../system_stm32f1xx.c 
	$(CC) $(CCFLAGS)  "../system_stm32f1xx.c" -c -o "SYSTEM~1.o"

STARTU~1.o:	../startup_stm32f103.s 
	$(ASM) $(ASMFLAGS)  "../startup_stm32f103.s" -o "STARTU~1.o"

lcd.o:	../lcd.c 
	$(CC) $(CCFLAGS)  "../lcd.c" -c -o "lcd.o"

keypad.o:	../keypad.c 
	$(CC) $(CCFLAGS)  "../keypad.c" -c -o "keypad.o"

clockhms.o:	../clockhms.c 
	$(CC) $(CCFLAGS)  "../clockhms.c" -c -o "clockhms.o"

seos.o:	../seos.c 
	$(CC) $(CCFLAGS)  "../seos.c" -c -o "seos.o"

PASSWO~1.o:	../password_manager.c 
	$(CC) $(CCFLAGS)  "../password_manager.c" -c -o "PASSWO~1.o"

# tidy - delete all temporary files which are not involved in the target generation
tidy:

# cleanup - delete all generated files
clean:	tidy
	rm -rf Debug.elf
	rm -rf main.o
	rm -rf SYSTEM~1.o
	rm -rf STARTU~1.o
	rm -rf lcd.o
	rm -rf keypad.o
	rm -rf clockhms.o
	rm -rf seos.o
	rm -rf PASSWO~1.o
