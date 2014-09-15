################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Common_Demo_Source/BlockQ.c \
../src/Common_Demo_Source/GenQTest.c \
../src/Common_Demo_Source/PollQ.c \
../src/Common_Demo_Source/QPeek.c \
../src/Common_Demo_Source/TimerDemo.c \
../src/Common_Demo_Source/blocktim.c \
../src/Common_Demo_Source/comtest.c \
../src/Common_Demo_Source/countsem.c \
../src/Common_Demo_Source/death.c \
../src/Common_Demo_Source/dynamic.c \
../src/Common_Demo_Source/flash.c \
../src/Common_Demo_Source/flop.c \
../src/Common_Demo_Source/integer.c \
../src/Common_Demo_Source/recmutex.c \
../src/Common_Demo_Source/semtest.c 

OBJS += \
./src/Common_Demo_Source/BlockQ.o \
./src/Common_Demo_Source/GenQTest.o \
./src/Common_Demo_Source/PollQ.o \
./src/Common_Demo_Source/QPeek.o \
./src/Common_Demo_Source/TimerDemo.o \
./src/Common_Demo_Source/blocktim.o \
./src/Common_Demo_Source/comtest.o \
./src/Common_Demo_Source/countsem.o \
./src/Common_Demo_Source/death.o \
./src/Common_Demo_Source/dynamic.o \
./src/Common_Demo_Source/flash.o \
./src/Common_Demo_Source/flop.o \
./src/Common_Demo_Source/integer.o \
./src/Common_Demo_Source/recmutex.o \
./src/Common_Demo_Source/semtest.o 

C_DEPS += \
./src/Common_Demo_Source/BlockQ.d \
./src/Common_Demo_Source/GenQTest.d \
./src/Common_Demo_Source/PollQ.d \
./src/Common_Demo_Source/QPeek.d \
./src/Common_Demo_Source/TimerDemo.d \
./src/Common_Demo_Source/blocktim.d \
./src/Common_Demo_Source/comtest.d \
./src/Common_Demo_Source/countsem.d \
./src/Common_Demo_Source/death.d \
./src/Common_Demo_Source/dynamic.d \
./src/Common_Demo_Source/flash.d \
./src/Common_Demo_Source/flop.d \
./src/Common_Demo_Source/integer.d \
./src/Common_Demo_Source/recmutex.d \
./src/Common_Demo_Source/semtest.d 


# Each subdirectory must supply rules for building sources it contributes
src/Common_Demo_Source/%.o: ../src/Common_Demo_Source/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: TriCore C Compiler'
	"$(TRICORE_TOOLS)/bin/tricore-gcc" -c -I"../h" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src\Common_Demo_Source" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src\Common_Demo_Source\include" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src\FreeRTOS_Source" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src\FreeRTOS_Source\include" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src\FreeRTOS_Source\portable\GCC\TriCore_1782" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src\FreeRTOS_Source\portable\MemMang" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src\ThirdPartyCode" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src\Dave\IO" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src\Dave" -fno-common -Os -g3 -W -Wall -Wa,-ahlms=$(basename $(notdir $@)).lst -fshort-double -mcpu=tc1797 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


