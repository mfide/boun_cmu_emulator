#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-DEBUG.mk)" "nbproject/Makefile-local-DEBUG.mk"
include nbproject/Makefile-local-DEBUG.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=DEBUG
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/CMU_EMUL.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/CMU_EMUL.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

ifdef SUB_IMAGE_ADDRESS

else
SUB_IMAGE_ADDRESS_COMMAND=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=../Source/lwip_pic32_enc/lwiplib.c ../Source/lwip_pic32_enc/enc424j600.c ../Source/lwip_pic32_enc/enc424j600if.c ../Source/main.c ../Source/io.c ../Source/lcd.c ../Source/pulse_input.c ../Source/rtc.c ../Source/flash.c ../Source/mcp3913.c ../Source/menu.c ../Source/printf.c ../Source/filter.c ../Source/aes.c ../Source/crc.c ../Source/pc_serial.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/1875622460/lwiplib.o ${OBJECTDIR}/_ext/1875622460/enc424j600.o ${OBJECTDIR}/_ext/1875622460/enc424j600if.o ${OBJECTDIR}/_ext/1728301206/main.o ${OBJECTDIR}/_ext/1728301206/io.o ${OBJECTDIR}/_ext/1728301206/lcd.o ${OBJECTDIR}/_ext/1728301206/pulse_input.o ${OBJECTDIR}/_ext/1728301206/rtc.o ${OBJECTDIR}/_ext/1728301206/flash.o ${OBJECTDIR}/_ext/1728301206/mcp3913.o ${OBJECTDIR}/_ext/1728301206/menu.o ${OBJECTDIR}/_ext/1728301206/printf.o ${OBJECTDIR}/_ext/1728301206/filter.o ${OBJECTDIR}/_ext/1728301206/aes.o ${OBJECTDIR}/_ext/1728301206/crc.o ${OBJECTDIR}/_ext/1728301206/pc_serial.o
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/1875622460/lwiplib.o.d ${OBJECTDIR}/_ext/1875622460/enc424j600.o.d ${OBJECTDIR}/_ext/1875622460/enc424j600if.o.d ${OBJECTDIR}/_ext/1728301206/main.o.d ${OBJECTDIR}/_ext/1728301206/io.o.d ${OBJECTDIR}/_ext/1728301206/lcd.o.d ${OBJECTDIR}/_ext/1728301206/pulse_input.o.d ${OBJECTDIR}/_ext/1728301206/rtc.o.d ${OBJECTDIR}/_ext/1728301206/flash.o.d ${OBJECTDIR}/_ext/1728301206/mcp3913.o.d ${OBJECTDIR}/_ext/1728301206/menu.o.d ${OBJECTDIR}/_ext/1728301206/printf.o.d ${OBJECTDIR}/_ext/1728301206/filter.o.d ${OBJECTDIR}/_ext/1728301206/aes.o.d ${OBJECTDIR}/_ext/1728301206/crc.o.d ${OBJECTDIR}/_ext/1728301206/pc_serial.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/1875622460/lwiplib.o ${OBJECTDIR}/_ext/1875622460/enc424j600.o ${OBJECTDIR}/_ext/1875622460/enc424j600if.o ${OBJECTDIR}/_ext/1728301206/main.o ${OBJECTDIR}/_ext/1728301206/io.o ${OBJECTDIR}/_ext/1728301206/lcd.o ${OBJECTDIR}/_ext/1728301206/pulse_input.o ${OBJECTDIR}/_ext/1728301206/rtc.o ${OBJECTDIR}/_ext/1728301206/flash.o ${OBJECTDIR}/_ext/1728301206/mcp3913.o ${OBJECTDIR}/_ext/1728301206/menu.o ${OBJECTDIR}/_ext/1728301206/printf.o ${OBJECTDIR}/_ext/1728301206/filter.o ${OBJECTDIR}/_ext/1728301206/aes.o ${OBJECTDIR}/_ext/1728301206/crc.o ${OBJECTDIR}/_ext/1728301206/pc_serial.o

# Source Files
SOURCEFILES=../Source/lwip_pic32_enc/lwiplib.c ../Source/lwip_pic32_enc/enc424j600.c ../Source/lwip_pic32_enc/enc424j600if.c ../Source/main.c ../Source/io.c ../Source/lcd.c ../Source/pulse_input.c ../Source/rtc.c ../Source/flash.c ../Source/mcp3913.c ../Source/menu.c ../Source/printf.c ../Source/filter.c ../Source/aes.c ../Source/crc.c ../Source/pc_serial.c


CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-DEBUG.mk dist/${CND_CONF}/${IMAGE_TYPE}/CMU_EMUL.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=32MZ0512EFE100
MP_LINKER_FILE_OPTION=
# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/_ext/1875622460/lwiplib.o: ../Source/lwip_pic32_enc/lwiplib.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1875622460" 
	@${RM} ${OBJECTDIR}/_ext/1875622460/lwiplib.o.d 
	@${RM} ${OBJECTDIR}/_ext/1875622460/lwiplib.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1875622460/lwiplib.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1875622460/lwiplib.o.d" -o ${OBJECTDIR}/_ext/1875622460/lwiplib.o ../Source/lwip_pic32_enc/lwiplib.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1875622460/enc424j600.o: ../Source/lwip_pic32_enc/enc424j600.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1875622460" 
	@${RM} ${OBJECTDIR}/_ext/1875622460/enc424j600.o.d 
	@${RM} ${OBJECTDIR}/_ext/1875622460/enc424j600.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1875622460/enc424j600.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1875622460/enc424j600.o.d" -o ${OBJECTDIR}/_ext/1875622460/enc424j600.o ../Source/lwip_pic32_enc/enc424j600.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1875622460/enc424j600if.o: ../Source/lwip_pic32_enc/enc424j600if.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1875622460" 
	@${RM} ${OBJECTDIR}/_ext/1875622460/enc424j600if.o.d 
	@${RM} ${OBJECTDIR}/_ext/1875622460/enc424j600if.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1875622460/enc424j600if.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1875622460/enc424j600if.o.d" -o ${OBJECTDIR}/_ext/1875622460/enc424j600if.o ../Source/lwip_pic32_enc/enc424j600if.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/main.o: ../Source/main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/main.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/main.o.d" -o ${OBJECTDIR}/_ext/1728301206/main.o ../Source/main.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/io.o: ../Source/io.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/io.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/io.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/io.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/io.o.d" -o ${OBJECTDIR}/_ext/1728301206/io.o ../Source/io.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/lcd.o: ../Source/lcd.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/lcd.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/lcd.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/lcd.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/lcd.o.d" -o ${OBJECTDIR}/_ext/1728301206/lcd.o ../Source/lcd.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/pulse_input.o: ../Source/pulse_input.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/pulse_input.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/pulse_input.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/pulse_input.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/pulse_input.o.d" -o ${OBJECTDIR}/_ext/1728301206/pulse_input.o ../Source/pulse_input.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/rtc.o: ../Source/rtc.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/rtc.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/rtc.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/rtc.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/rtc.o.d" -o ${OBJECTDIR}/_ext/1728301206/rtc.o ../Source/rtc.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/flash.o: ../Source/flash.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/flash.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/flash.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/flash.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/flash.o.d" -o ${OBJECTDIR}/_ext/1728301206/flash.o ../Source/flash.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/mcp3913.o: ../Source/mcp3913.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/mcp3913.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/mcp3913.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/mcp3913.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/mcp3913.o.d" -o ${OBJECTDIR}/_ext/1728301206/mcp3913.o ../Source/mcp3913.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/menu.o: ../Source/menu.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/menu.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/menu.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/menu.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/menu.o.d" -o ${OBJECTDIR}/_ext/1728301206/menu.o ../Source/menu.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/printf.o: ../Source/printf.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/printf.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/printf.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/printf.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/printf.o.d" -o ${OBJECTDIR}/_ext/1728301206/printf.o ../Source/printf.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/filter.o: ../Source/filter.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/filter.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/filter.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/filter.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/filter.o.d" -o ${OBJECTDIR}/_ext/1728301206/filter.o ../Source/filter.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/aes.o: ../Source/aes.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/aes.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/aes.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/aes.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/aes.o.d" -o ${OBJECTDIR}/_ext/1728301206/aes.o ../Source/aes.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/crc.o: ../Source/crc.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/crc.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/crc.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/crc.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/crc.o.d" -o ${OBJECTDIR}/_ext/1728301206/crc.o ../Source/crc.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/pc_serial.o: ../Source/pc_serial.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/pc_serial.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/pc_serial.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/pc_serial.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/pc_serial.o.d" -o ${OBJECTDIR}/_ext/1728301206/pc_serial.o ../Source/pc_serial.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
else
${OBJECTDIR}/_ext/1875622460/lwiplib.o: ../Source/lwip_pic32_enc/lwiplib.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1875622460" 
	@${RM} ${OBJECTDIR}/_ext/1875622460/lwiplib.o.d 
	@${RM} ${OBJECTDIR}/_ext/1875622460/lwiplib.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1875622460/lwiplib.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1875622460/lwiplib.o.d" -o ${OBJECTDIR}/_ext/1875622460/lwiplib.o ../Source/lwip_pic32_enc/lwiplib.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1875622460/enc424j600.o: ../Source/lwip_pic32_enc/enc424j600.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1875622460" 
	@${RM} ${OBJECTDIR}/_ext/1875622460/enc424j600.o.d 
	@${RM} ${OBJECTDIR}/_ext/1875622460/enc424j600.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1875622460/enc424j600.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1875622460/enc424j600.o.d" -o ${OBJECTDIR}/_ext/1875622460/enc424j600.o ../Source/lwip_pic32_enc/enc424j600.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1875622460/enc424j600if.o: ../Source/lwip_pic32_enc/enc424j600if.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1875622460" 
	@${RM} ${OBJECTDIR}/_ext/1875622460/enc424j600if.o.d 
	@${RM} ${OBJECTDIR}/_ext/1875622460/enc424j600if.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1875622460/enc424j600if.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1875622460/enc424j600if.o.d" -o ${OBJECTDIR}/_ext/1875622460/enc424j600if.o ../Source/lwip_pic32_enc/enc424j600if.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/main.o: ../Source/main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/main.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/main.o.d" -o ${OBJECTDIR}/_ext/1728301206/main.o ../Source/main.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/io.o: ../Source/io.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/io.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/io.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/io.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/io.o.d" -o ${OBJECTDIR}/_ext/1728301206/io.o ../Source/io.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/lcd.o: ../Source/lcd.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/lcd.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/lcd.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/lcd.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/lcd.o.d" -o ${OBJECTDIR}/_ext/1728301206/lcd.o ../Source/lcd.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/pulse_input.o: ../Source/pulse_input.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/pulse_input.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/pulse_input.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/pulse_input.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/pulse_input.o.d" -o ${OBJECTDIR}/_ext/1728301206/pulse_input.o ../Source/pulse_input.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/rtc.o: ../Source/rtc.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/rtc.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/rtc.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/rtc.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/rtc.o.d" -o ${OBJECTDIR}/_ext/1728301206/rtc.o ../Source/rtc.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/flash.o: ../Source/flash.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/flash.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/flash.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/flash.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/flash.o.d" -o ${OBJECTDIR}/_ext/1728301206/flash.o ../Source/flash.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/mcp3913.o: ../Source/mcp3913.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/mcp3913.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/mcp3913.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/mcp3913.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/mcp3913.o.d" -o ${OBJECTDIR}/_ext/1728301206/mcp3913.o ../Source/mcp3913.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/menu.o: ../Source/menu.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/menu.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/menu.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/menu.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/menu.o.d" -o ${OBJECTDIR}/_ext/1728301206/menu.o ../Source/menu.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/printf.o: ../Source/printf.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/printf.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/printf.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/printf.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/printf.o.d" -o ${OBJECTDIR}/_ext/1728301206/printf.o ../Source/printf.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/filter.o: ../Source/filter.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/filter.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/filter.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/filter.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/filter.o.d" -o ${OBJECTDIR}/_ext/1728301206/filter.o ../Source/filter.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/aes.o: ../Source/aes.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/aes.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/aes.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/aes.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/aes.o.d" -o ${OBJECTDIR}/_ext/1728301206/aes.o ../Source/aes.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/crc.o: ../Source/crc.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/crc.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/crc.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/crc.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/crc.o.d" -o ${OBJECTDIR}/_ext/1728301206/crc.o ../Source/crc.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
${OBJECTDIR}/_ext/1728301206/pc_serial.o: ../Source/pc_serial.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/pc_serial.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/pc_serial.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1728301206/pc_serial.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__DEBUG_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MMD -MF "${OBJECTDIR}/_ext/1728301206/pc_serial.o.d" -o ${OBJECTDIR}/_ext/1728301206/pc_serial.o ../Source/pc_serial.c    -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compileCPP
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/CMU_EMUL.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -g -mdebugger -D__MPLAB_DEBUGGER_ICD3=1 -mprocessor=$(MP_PROCESSOR_OPTION) -Os --fill=0xFFFFFFFF -o dist/${CND_CONF}/${IMAGE_TYPE}/CMU_EMUL.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)   -mreserve=data@0x0:0x37F   -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,-D=__DEBUG_D,--defsym=__MPLAB_DEBUGGER_ICD3=1,--defsym=_min_heap_size=0,--defsym=_min_stack_size=8192,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--report-mem,--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/CMU_EMUL.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION) -Os --fill=0xFFFFFFFF -o dist/${CND_CONF}/${IMAGE_TYPE}/CMU_EMUL.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_DEBUG=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=_min_heap_size=0,--defsym=_min_stack_size=8192,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--report-mem,--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml
	${MP_CC_DIR}\\xc32-bin2hex dist/${CND_CONF}/${IMAGE_TYPE}/CMU_EMUL.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} 
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/DEBUG
	${RM} -r dist/DEBUG

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
