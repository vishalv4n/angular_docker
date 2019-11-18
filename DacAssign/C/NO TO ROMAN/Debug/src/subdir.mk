################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/NO\ TO\ ROMAN.c 

OBJS += \
./src/NO\ TO\ ROMAN.o 

C_DEPS += \
./src/NO\ TO\ ROMAN.d 


# Each subdirectory must supply rules for building sources it contributes
src/NO\ TO\ ROMAN.o: ../src/NO\ TO\ ROMAN.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/NO TO ROMAN.d" -MT"src/NO\ TO\ ROMAN.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


