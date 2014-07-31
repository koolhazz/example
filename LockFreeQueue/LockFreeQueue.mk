##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=LockFreeQueue
ConfigurationName      :=Debug
WorkspacePath          := "E:\data\example"
ProjectPath            := "E:\data\example\LockFreeQueue"
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
ObjectsFileList        :="E:\data\example\LockFreeQueue\LockFreeQueue.txt"
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
Objects=$(IntermediateDirectory)/main$(ObjectSuffix) $(IntermediateDirectory)/test_blocking_q$(ObjectSuffix) $(IntermediateDirectory)/test_lock_free_q$(ObjectSuffix) $(IntermediateDirectory)/test_lock_free_single_producer_q$(ObjectSuffix) 

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
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/data/example/LockFreeQueue/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main$(ObjectSuffix) -MF$(IntermediateDirectory)/main$(DependSuffix) -MM "E:/data/example/LockFreeQueue/main.cpp"

$(IntermediateDirectory)/main$(PreprocessSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main$(PreprocessSuffix) "E:/data/example/LockFreeQueue/main.cpp"

$(IntermediateDirectory)/test_blocking_q$(ObjectSuffix): test_blocking_q.cpp $(IntermediateDirectory)/test_blocking_q$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/data/example/LockFreeQueue/test_blocking_q.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/test_blocking_q$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/test_blocking_q$(DependSuffix): test_blocking_q.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/test_blocking_q$(ObjectSuffix) -MF$(IntermediateDirectory)/test_blocking_q$(DependSuffix) -MM "E:/data/example/LockFreeQueue/test_blocking_q.cpp"

$(IntermediateDirectory)/test_blocking_q$(PreprocessSuffix): test_blocking_q.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/test_blocking_q$(PreprocessSuffix) "E:/data/example/LockFreeQueue/test_blocking_q.cpp"

$(IntermediateDirectory)/test_lock_free_q$(ObjectSuffix): test_lock_free_q.cpp $(IntermediateDirectory)/test_lock_free_q$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/data/example/LockFreeQueue/test_lock_free_q.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/test_lock_free_q$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/test_lock_free_q$(DependSuffix): test_lock_free_q.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/test_lock_free_q$(ObjectSuffix) -MF$(IntermediateDirectory)/test_lock_free_q$(DependSuffix) -MM "E:/data/example/LockFreeQueue/test_lock_free_q.cpp"

$(IntermediateDirectory)/test_lock_free_q$(PreprocessSuffix): test_lock_free_q.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/test_lock_free_q$(PreprocessSuffix) "E:/data/example/LockFreeQueue/test_lock_free_q.cpp"

$(IntermediateDirectory)/test_lock_free_single_producer_q$(ObjectSuffix): test_lock_free_single_producer_q.cpp $(IntermediateDirectory)/test_lock_free_single_producer_q$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/data/example/LockFreeQueue/test_lock_free_single_producer_q.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/test_lock_free_single_producer_q$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/test_lock_free_single_producer_q$(DependSuffix): test_lock_free_single_producer_q.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/test_lock_free_single_producer_q$(ObjectSuffix) -MF$(IntermediateDirectory)/test_lock_free_single_producer_q$(DependSuffix) -MM "E:/data/example/LockFreeQueue/test_lock_free_single_producer_q.cpp"

$(IntermediateDirectory)/test_lock_free_single_producer_q$(PreprocessSuffix): test_lock_free_single_producer_q.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/test_lock_free_single_producer_q$(PreprocessSuffix) "E:/data/example/LockFreeQueue/test_lock_free_single_producer_q.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/main$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/main$(DependSuffix)
	$(RM) $(IntermediateDirectory)/main$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/test_blocking_q$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/test_blocking_q$(DependSuffix)
	$(RM) $(IntermediateDirectory)/test_blocking_q$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/test_lock_free_q$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/test_lock_free_q$(DependSuffix)
	$(RM) $(IntermediateDirectory)/test_lock_free_q$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/test_lock_free_single_producer_q$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/test_lock_free_single_producer_q$(DependSuffix)
	$(RM) $(IntermediateDirectory)/test_lock_free_single_producer_q$(PreprocessSuffix)
	$(RM) $(OutputFile)
	$(RM) $(OutputFile).exe
	$(RM) "E:\data\example\.build-debug\LockFreeQueue"


