################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Dave/CAN/CAN.c 

OBJS += \
./src/Dave/CAN/CAN.o 

C_DEPS += \
./src/Dave/CAN/CAN.d 


# Each subdirectory must supply rules for building sources it contributes
src/Dave/CAN/%.o: ../src/Dave/CAN/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: TriCore C Compiler'
	"$(TRICORE_TOOLS)/bin/tricore-gcc" -c -I"../h" -I"C:\Users\Daniel\workspace\ReRaHD\src" -I"C:\Users\Daniel\workspace\ReRaHD\src\Common_Demo_Source" -I"C:\Users\Daniel\workspace\ReRaHD\src\Common_Demo_Source\include" -I"C:\Users\Daniel\workspace\ReRaHD\src\FreeRTOS_Source" -I"C:\Users\Daniel\workspace\ReRaHD\src\FreeRTOS_Source\include" -I"C:\Users\Daniel\workspace\ReRaHD\src\FreeRTOS_Source\portable\GCC\TriCore_1782" -I"C:\Users\Daniel\workspace\ReRaHD\src\FreeRTOS_Source\portable\MemMang" -I"C:\Users\Daniel\workspace\ReRaHD\src\ThirdPartyCode" -I"C:\Users\Daniel\workspace\ReRaHD\src\Dave\IO" -I"C:\Users\Daniel\workspace\ReRaHD\src\Dave" -I"C:\Users\Daniel\workspace\ReRaHD\src\Dave\CAN" -fno-common -Os -g3 -W -Wall -Wa,-ahlms=$(basename $(notdir $@)).lst -fshort-double -mcpu=tc1797 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


