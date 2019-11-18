################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no\ to\ ROMAN.c \
../src/no\ to\ word.c 

OBJS += \
./src/no\ to\ ROMAN.o \
./src/no\ to\ word.o 

C_DEPS += \
./src/no\ to\ ROMAN.d \
./src/no\ to\ word.d 


# Each subdirectory must supply rules for building sources it contributes
src/no\ to\ ROMAN.o: ../src/no\ to\ ROMAN.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/no to ROMAN.d" -MT"src/no\ to\ ROMAN.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/no\ to\ word.o: ../src/no\ to\ word.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/no to word.d" -MT"src/no\ to\ word.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


