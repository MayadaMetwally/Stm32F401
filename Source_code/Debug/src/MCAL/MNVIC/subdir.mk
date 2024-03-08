################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/MCAL/MNVIC/NVIC.c 

C_DEPS += \
./src/MCAL/MNVIC/NVIC.d 

OBJS += \
./src/MCAL/MNVIC/NVIC.o 


# Each subdirectory must supply rules for building sources it contributes
src/MCAL/MNVIC/%.o: ../src/MCAL/MNVIC/%.c src/MCAL/MNVIC/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F401xC -DUSE_HAL_DRIVER -DHSE_VALUE=25000000 -I"../include" -I"E:\ITI\Work_SpaceTourky\Src_Code\Source_code\include\APP" -I"E:\ITI\Work_SpaceTourky\Src_Code\Source_code\include\HAL" -I"E:\ITI\Work_SpaceTourky\Src_Code\Source_code\include\LIB" -I"E:\ITI\Work_SpaceTourky\Src_Code\Source_code\include\MCAL" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

