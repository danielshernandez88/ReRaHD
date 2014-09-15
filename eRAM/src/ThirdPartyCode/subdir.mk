################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ThirdPartyCode/cpufreq.c 

OBJS += \
./src/ThirdPartyCode/cpufreq.o 

C_DEPS += \
./src/ThirdPartyCode/cpufreq.d 


# Each subdirectory must supply rules for building sources it contributes
src/ThirdPartyCode/%.o: ../src/ThirdPartyCode/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: TriCore C Compiler'
	"$(TRICORE_TOOLS)/bin/tricore-gcc" -c -I"../h" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src\Common_Demo_Source" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src\Common_Demo_Source\include" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src\FreeRTOS_Source" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src\FreeRTOS_Source\include" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src\FreeRTOS_Source\portable\GCC\TriCore_1782" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src\FreeRTOS_Source\portable\MemMang" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src\ThirdPartyCode" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src\Dave\IO" -I"C:\Users\Daniel\workspace\FreeRTOSTC1797\src\Dave" -fno-common -Os -g3 -W -Wall -Wa,-ahlms=$(basename $(notdir $@)).lst -fshort-double -mcpu=tc1797 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


