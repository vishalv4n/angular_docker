################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/if\ vov.c 

OBJS += \
./src/if\ vov.o 

C_DEPS += \
./src/if\ vov.d 


# Each subdirectory must supply rules for building sources it contributes
src/if\ vov.o: ../src/if\ vov.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/if vov.d" -MT"src/if\ vov.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


