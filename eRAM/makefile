################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/ThirdPartyCode/subdir.mk
-include src/FreeRTOS_Source/portable/MemMang/subdir.mk
-include src/FreeRTOS_Source/portable/GCC/TriCore_1782/subdir.mk
-include src/FreeRTOS_Source/subdir.mk
-include src/Dave/IO/subdir.mk
-include src/Dave/CAN/subdir.mk
-include src/Dave/subdir.mk
-include src/Common_Demo_Source/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

#rebuild target
rebuild: clean all

# All Target
all: FreeRTOSTC1797.elf

# Tool invocations
FreeRTOSTC1797.elf: $(OBJS) $(USER_OBJS) $(ASM)
	@echo 'Building target: $@'
	@echo 'Invoking: TriCore C Linker'
	"$(TRICORE_TOOLS)/bin/tricore-gcc" -o  "FreeRTOSTC1797.elf" "src\Common_Demo_Source\BlockQ.o" "src\Common_Demo_Source\GenQTest.o" "src\Common_Demo_Source\PollQ.o" "src\Common_Demo_Source\QPeek.o" "src\Common_Demo_Source\TimerDemo.o" "src\Common_Demo_Source\blocktim.o" "src\Common_Demo_Source\comtest.o" "src\Common_Demo_Source\countsem.o" "src\Common_Demo_Source\death.o" "src\Common_Demo_Source\dynamic.o" "src\Common_Demo_Source\flash.o" "src\Common_Demo_Source\flop.o" "src\Common_Demo_Source\integer.o" "src\Common_Demo_Source\recmutex.o" "src\Common_Demo_Source\semtest.o" "src\Dave\Dave.o" "src\Dave\IO\IO.o" "src\FreeRTOS_Source\list.o" "src\FreeRTOS_Source\portable\GCC\TriCore_1782\port.o" "src\FreeRTOS_Source\portable\GCC\TriCore_1782\porttrap.o" "src\FreeRTOS_Source\portable\MemMang\heap_2.o" "src\FreeRTOS_Source\queue.o" "src\FreeRTOS_Source\tasks.o" "src\FreeRTOS_Source\timers.o" "src\InterruptNestTest.o" "src\ParTest.o" "src\ThirdPartyCode\cpufreq.o" "src\main.o" "src\serial.o" "src\Dave\CAN\CAN.o" -Wl,--gc-sections -mcpu=tc1797 -Wl,--mem-holes -Wl,--no-warn-flags -Wl,-Map="$(basename $(notdir $@)).map" -Wl,--cref -fshort-double -Wl,--extmap="a"
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(CPCP_DEPS)$(C_DEPS)$(EXECUTABLES) FreeRTOSTC1797.elf
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
