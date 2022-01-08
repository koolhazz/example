##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=MurmurHash
ConfigurationName      :=Debug
WorkspacePath          :=/Users/ac/Desktop/example
ProjectPath            :=/Users/ac/Desktop/example/MurmurHash
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=austin chen
Date                   :=29/12/2021
CodeLitePath           :="/Users/ac/Library/Application Support/codelite"
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -dynamiclib -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="MurmurHash.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/Applications/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/MurmurHash3.cpp$(ObjectSuffix) $(IntermediateDirectory)/MurmurHash2.cpp$(ObjectSuffix) $(IntermediateDirectory)/MurmurHash1.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)


$(IntermediateDirectory)/.d:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/ac/Desktop/example/MurmurHash/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/MurmurHash3.cpp$(ObjectSuffix): MurmurHash3.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MurmurHash3.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MurmurHash3.cpp$(DependSuffix) -MM MurmurHash3.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/ac/Desktop/example/MurmurHash/MurmurHash3.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MurmurHash3.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MurmurHash3.cpp$(PreprocessSuffix): MurmurHash3.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MurmurHash3.cpp$(PreprocessSuffix) MurmurHash3.cpp

$(IntermediateDirectory)/MurmurHash2.cpp$(ObjectSuffix): MurmurHash2.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MurmurHash2.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MurmurHash2.cpp$(DependSuffix) -MM MurmurHash2.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/ac/Desktop/example/MurmurHash/MurmurHash2.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MurmurHash2.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MurmurHash2.cpp$(PreprocessSuffix): MurmurHash2.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MurmurHash2.cpp$(PreprocessSuffix) MurmurHash2.cpp

$(IntermediateDirectory)/MurmurHash1.cpp$(ObjectSuffix): MurmurHash1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MurmurHash1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MurmurHash1.cpp$(DependSuffix) -MM MurmurHash1.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/ac/Desktop/example/MurmurHash/MurmurHash1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MurmurHash1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MurmurHash1.cpp$(PreprocessSuffix): MurmurHash1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MurmurHash1.cpp$(PreprocessSuffix) MurmurHash1.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


