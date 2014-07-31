##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=LockFreeQueue_2
ConfigurationName      :=Debug
WorkspacePath          := "E:\data\example"
ProjectPath            := "E:\data\example\LockFreeQueue_2"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=AustinChen
Date                   :=2013/1/21
CodeLitePath           :="d:\Program Files\CodeLite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
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
ObjectsFileList        :="E:\data\example\LockFreeQueue_2\LockFreeQueue_2.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)


##
## User defined environment variables
##
CodeLiteDir:=d:\Program Files\CodeLite
UNIT_TEST_PP_SRC_DIR:=d:\UnitTest++-1.3
Objects=$(IntermediateDirectory)/main$(ObjectSuffix) $(IntermediateDirectory)/QueueUnitTest$(ObjectSuffix) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects) > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/data/example/LockFreeQueue_2/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main$(ObjectSuffix) -MF$(IntermediateDirectory)/main$(DependSuffix) -MM "E:/data/example/LockFreeQueue_2/main.cpp"

$(IntermediateDirectory)/main$(PreprocessSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main$(PreprocessSuffix) "E:/data/example/LockFreeQueue_2/main.cpp"

$(IntermediateDirectory)/QueueUnitTest$(ObjectSuffix): QueueUnitTest.cpp $(IntermediateDirectory)/QueueUnitTest$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/data/example/LockFreeQueue_2/QueueUnitTest.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/QueueUnitTest$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/QueueUnitTest$(DependSuffix): QueueUnitTest.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/QueueUnitTest$(ObjectSuffix) -MF$(IntermediateDirectory)/QueueUnitTest$(DependSuffix) -MM "E:/data/example/LockFreeQueue_2/QueueUnitTest.cpp"

$(IntermediateDirectory)/QueueUnitTest$(PreprocessSuffix): QueueUnitTest.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/QueueUnitTest$(PreprocessSuffix) "E:/data/example/LockFreeQueue_2/QueueUnitTest.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/main$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/main$(DependSuffix)
	$(RM) $(IntermediateDirectory)/main$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/QueueUnitTest$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/QueueUnitTest$(DependSuffix)
	$(RM) $(IntermediateDirectory)/QueueUnitTest$(PreprocessSuffix)
	$(RM) $(OutputFile)
	$(RM) $(OutputFile).exe
	$(RM) "E:\data\example\.build-debug\LockFreeQueue_2"


