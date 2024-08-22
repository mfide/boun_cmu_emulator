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
ifeq "$(wildcard nbproject/Makefile-local-RELEASE.mk)" "nbproject/Makefile-local-RELEASE.mk"
include nbproject/Makefile-local-RELEASE.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=RELEASE
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
SOURCEFILES_QUOTED_IF_SPACED=../Source/lwip_pic32_enc/lwiplib.c ../Source/lwip_pic32_enc/enc424j600.c ../Source/lwip_pic32_enc/enc424j600if.c ../Source/main.c ../Source/io.c ../Source/lcd.c ../Source/rtc.c ../Source/flash.c ../Source/menu.c ../Source/printf.c ../Source/aes.c ../Source/crc.c ../Source/cmu_emulator.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/1875622460/lwiplib.o ${OBJECTDIR}/_ext/1875622460/enc424j600.o ${OBJECTDIR}/_ext/1875622460/enc424j600if.o ${OBJECTDIR}/_ext/1728301206/main.o ${OBJECTDIR}/_ext/1728301206/io.o ${OBJECTDIR}/_ext/1728301206/lcd.o ${OBJECTDIR}/_ext/1728301206/rtc.o ${OBJECTDIR}/_ext/1728301206/flash.o ${OBJECTDIR}/_ext/1728301206/menu.o ${OBJECTDIR}/_ext/1728301206/printf.o ${OBJECTDIR}/_ext/1728301206/aes.o ${OBJECTDIR}/_ext/1728301206/crc.o ${OBJECTDIR}/_ext/1728301206/cmu_emulator.o
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/1875622460/lwiplib.o.d ${OBJECTDIR}/_ext/1875622460/enc424j600.o.d ${OBJECTDIR}/_ext/1875622460/enc424j600if.o.d ${OBJECTDIR}/_ext/1728301206/main.o.d ${OBJECTDIR}/_ext/1728301206/io.o.d ${OBJECTDIR}/_ext/1728301206/lcd.o.d ${OBJECTDIR}/_ext/1728301206/rtc.o.d ${OBJECTDIR}/_ext/1728301206/flash.o.d ${OBJECTDIR}/_ext/1728301206/menu.o.d ${OBJECTDIR}/_ext/1728301206/printf.o.d ${OBJECTDIR}/_ext/1728301206/aes.o.d ${OBJECTDIR}/_ext/1728301206/crc.o.d ${OBJECTDIR}/_ext/1728301206/cmu_emulator.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/1875622460/lwiplib.o ${OBJECTDIR}/_ext/1875622460/enc424j600.o ${OBJECTDIR}/_ext/1875622460/enc424j600if.o ${OBJECTDIR}/_ext/1728301206/main.o ${OBJECTDIR}/_ext/1728301206/io.o ${OBJECTDIR}/_ext/1728301206/lcd.o ${OBJECTDIR}/_ext/1728301206/rtc.o ${OBJECTDIR}/_ext/1728301206/flash.o ${OBJECTDIR}/_ext/1728301206/menu.o ${OBJECTDIR}/_ext/1728301206/printf.o ${OBJECTDIR}/_ext/1728301206/aes.o ${OBJECTDIR}/_ext/1728301206/crc.o ${OBJECTDIR}/_ext/1728301206/cmu_emulator.o

# Source Files
SOURCEFILES=../Source/lwip_pic32_enc/lwiplib.c ../Source/lwip_pic32_enc/enc424j600.c ../Source/lwip_pic32_enc/enc424j600if.c ../Source/main.c ../Source/io.c ../Source/lcd.c ../Source/rtc.c ../Source/flash.c ../Source/menu.c ../Source/printf.c ../Source/aes.c ../Source/crc.c ../Source/cmu_emulator.c



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
	${MAKE}  -f nbproject/Makefile-RELEASE.mk dist/${CND_CONF}/${IMAGE_TYPE}/CMU_EMUL.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

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
${OBJECTDIR}/_ext/1875622460/lwiplib.o: ../Source/lwip_pic32_enc/lwiplib.c  .generated_files/bd44219bd6b97f4d37a270f16c5960520f0ee6b3.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1875622460" 
	@${RM} ${OBJECTDIR}/_ext/1875622460/lwiplib.o.d 
	@${RM} ${OBJECTDIR}/_ext/1875622460/lwiplib.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1875622460/lwiplib.o.d" -o ${OBJECTDIR}/_ext/1875622460/lwiplib.o ../Source/lwip_pic32_enc/lwiplib.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1875622460/enc424j600.o: ../Source/lwip_pic32_enc/enc424j600.c  .generated_files/42822065425604a5873c54a2eb6e1636e15621c0.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1875622460" 
	@${RM} ${OBJECTDIR}/_ext/1875622460/enc424j600.o.d 
	@${RM} ${OBJECTDIR}/_ext/1875622460/enc424j600.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1875622460/enc424j600.o.d" -o ${OBJECTDIR}/_ext/1875622460/enc424j600.o ../Source/lwip_pic32_enc/enc424j600.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1875622460/enc424j600if.o: ../Source/lwip_pic32_enc/enc424j600if.c  .generated_files/f02b70e9e49dd69e8aba5ded089a017464dce8f7.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1875622460" 
	@${RM} ${OBJECTDIR}/_ext/1875622460/enc424j600if.o.d 
	@${RM} ${OBJECTDIR}/_ext/1875622460/enc424j600if.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1875622460/enc424j600if.o.d" -o ${OBJECTDIR}/_ext/1875622460/enc424j600if.o ../Source/lwip_pic32_enc/enc424j600if.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/main.o: ../Source/main.c  .generated_files/da094a15ee8ba3d60e7cf4d0ede5007066e75788.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/main.o.d" -o ${OBJECTDIR}/_ext/1728301206/main.o ../Source/main.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/io.o: ../Source/io.c  .generated_files/d86a419738f434dfa2ad071b0b0504d6950e46d1.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/io.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/io.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/io.o.d" -o ${OBJECTDIR}/_ext/1728301206/io.o ../Source/io.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/lcd.o: ../Source/lcd.c  .generated_files/bc22c86bfec6505171501466b5897b7433943ad.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/lcd.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/lcd.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/lcd.o.d" -o ${OBJECTDIR}/_ext/1728301206/lcd.o ../Source/lcd.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/rtc.o: ../Source/rtc.c  .generated_files/4b2555212cfb8d28d4068d1b09ef5a10dba4f5dd.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/rtc.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/rtc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/rtc.o.d" -o ${OBJECTDIR}/_ext/1728301206/rtc.o ../Source/rtc.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/flash.o: ../Source/flash.c  .generated_files/f2510dfdb1148856ddec2ae6910560f0222e175d.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/flash.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/flash.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/flash.o.d" -o ${OBJECTDIR}/_ext/1728301206/flash.o ../Source/flash.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/menu.o: ../Source/menu.c  .generated_files/abff36b443e2a481e645b8cc314cd39841f4486d.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/menu.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/menu.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/menu.o.d" -o ${OBJECTDIR}/_ext/1728301206/menu.o ../Source/menu.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/printf.o: ../Source/printf.c  .generated_files/d529bb3dc85e68b24a76a1b11ba92071cf033bcf.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/printf.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/printf.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/printf.o.d" -o ${OBJECTDIR}/_ext/1728301206/printf.o ../Source/printf.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/aes.o: ../Source/aes.c  .generated_files/66216ee1ce971b37ee3242b74bf923150e92e0b1.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/aes.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/aes.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/aes.o.d" -o ${OBJECTDIR}/_ext/1728301206/aes.o ../Source/aes.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/crc.o: ../Source/crc.c  .generated_files/f5665146e28d87301738ce1fff2827dd9ea72721.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/crc.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/crc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/crc.o.d" -o ${OBJECTDIR}/_ext/1728301206/crc.o ../Source/crc.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/cmu_emulator.o: ../Source/cmu_emulator.c  .generated_files/cfda46214fb6058e481b10bd06d28c55aa623d47.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/cmu_emulator.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/cmu_emulator.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/cmu_emulator.o.d" -o ${OBJECTDIR}/_ext/1728301206/cmu_emulator.o ../Source/cmu_emulator.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
else
${OBJECTDIR}/_ext/1875622460/lwiplib.o: ../Source/lwip_pic32_enc/lwiplib.c  .generated_files/c0eb5a88a2235f354f821a78a50018753665b585.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1875622460" 
	@${RM} ${OBJECTDIR}/_ext/1875622460/lwiplib.o.d 
	@${RM} ${OBJECTDIR}/_ext/1875622460/lwiplib.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1875622460/lwiplib.o.d" -o ${OBJECTDIR}/_ext/1875622460/lwiplib.o ../Source/lwip_pic32_enc/lwiplib.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1875622460/enc424j600.o: ../Source/lwip_pic32_enc/enc424j600.c  .generated_files/1563606d21846b817143b998b941355be5bebc2b.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1875622460" 
	@${RM} ${OBJECTDIR}/_ext/1875622460/enc424j600.o.d 
	@${RM} ${OBJECTDIR}/_ext/1875622460/enc424j600.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1875622460/enc424j600.o.d" -o ${OBJECTDIR}/_ext/1875622460/enc424j600.o ../Source/lwip_pic32_enc/enc424j600.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1875622460/enc424j600if.o: ../Source/lwip_pic32_enc/enc424j600if.c  .generated_files/5cf498519719e773b747260e4fe938120f0377a7.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1875622460" 
	@${RM} ${OBJECTDIR}/_ext/1875622460/enc424j600if.o.d 
	@${RM} ${OBJECTDIR}/_ext/1875622460/enc424j600if.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1875622460/enc424j600if.o.d" -o ${OBJECTDIR}/_ext/1875622460/enc424j600if.o ../Source/lwip_pic32_enc/enc424j600if.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/main.o: ../Source/main.c  .generated_files/9eb1f1324ab9f7206d5356c6bc0ccaba79bdd8fa.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/main.o.d" -o ${OBJECTDIR}/_ext/1728301206/main.o ../Source/main.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/io.o: ../Source/io.c  .generated_files/c7d2bdc021c3580fe1d881e2f0c1a2c72b45d48c.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/io.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/io.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/io.o.d" -o ${OBJECTDIR}/_ext/1728301206/io.o ../Source/io.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/lcd.o: ../Source/lcd.c  .generated_files/9330f003d7b1f009b3fd1e3a087897b1a4ef164c.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/lcd.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/lcd.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/lcd.o.d" -o ${OBJECTDIR}/_ext/1728301206/lcd.o ../Source/lcd.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/rtc.o: ../Source/rtc.c  .generated_files/3211bfedcd1dff040ffaae081c400365ac425b57.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/rtc.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/rtc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/rtc.o.d" -o ${OBJECTDIR}/_ext/1728301206/rtc.o ../Source/rtc.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/flash.o: ../Source/flash.c  .generated_files/1c29a77f647b56b371f88128b955a94eeafb1881.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/flash.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/flash.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/flash.o.d" -o ${OBJECTDIR}/_ext/1728301206/flash.o ../Source/flash.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/menu.o: ../Source/menu.c  .generated_files/1906c164daff13254fc4c25c3b09ac44e449251.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/menu.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/menu.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/menu.o.d" -o ${OBJECTDIR}/_ext/1728301206/menu.o ../Source/menu.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/printf.o: ../Source/printf.c  .generated_files/90d0df227022cd6cb17667e2b16839ac19c6ff2e.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/printf.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/printf.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/printf.o.d" -o ${OBJECTDIR}/_ext/1728301206/printf.o ../Source/printf.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/aes.o: ../Source/aes.c  .generated_files/52a6870cf584607108c19cae50257c241e579d46.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/aes.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/aes.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/aes.o.d" -o ${OBJECTDIR}/_ext/1728301206/aes.o ../Source/aes.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/crc.o: ../Source/crc.c  .generated_files/23cd36c0c4cd5095860072731feb3ab74ccdebeb.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/crc.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/crc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/crc.o.d" -o ${OBJECTDIR}/_ext/1728301206/crc.o ../Source/crc.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1728301206/cmu_emulator.o: ../Source/cmu_emulator.c  .generated_files/c312ba10ca072a34b40dc1c0ddfdc1a4d26d7197.flag .generated_files/45048f0189efc76ba5efc161f9aa97e18cfb21eb.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1728301206" 
	@${RM} ${OBJECTDIR}/_ext/1728301206/cmu_emulator.o.d 
	@${RM} ${OBJECTDIR}/_ext/1728301206/cmu_emulator.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -Os -funroll-loops -D__RELEASE_HEX -I"../Source/lwip-2.1.2" -I"../Source/lwip-2.1.2/src/include" -I"../Source/lwip_pic32_enc" -MP -MMD -MF "${OBJECTDIR}/_ext/1728301206/cmu_emulator.o.d" -o ${OBJECTDIR}/_ext/1728301206/cmu_emulator.o ../Source/cmu_emulator.c    -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=gnu99 -fgnu89-inline -fno-short-double -mdfp="${DFP_DIR}"  
	
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
	${MP_CC} $(MP_EXTRA_LD_PRE) -g   -mprocessor=$(MP_PROCESSOR_OPTION) -Os --fill=0xFFFFFFFF -o dist/${CND_CONF}/${IMAGE_TYPE}/CMU_EMUL.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)      -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,-D=__DEBUG_D,--defsym=_min_heap_size=0,--defsym=_min_stack_size=8192,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--report-mem,--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml -mdfp="${DFP_DIR}"
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/CMU_EMUL.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION) -Os --fill=0xFFFFFFFF -o dist/${CND_CONF}/${IMAGE_TYPE}/CMU_EMUL.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_RELEASE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=_min_heap_size=0,--defsym=_min_stack_size=8192,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--report-mem,--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml -mdfp="${DFP_DIR}"
	${MP_CC_DIR}\\xc32-bin2hex dist/${CND_CONF}/${IMAGE_TYPE}/CMU_EMUL.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} 
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/RELEASE
	${RM} -r dist/RELEASE

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
