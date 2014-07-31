##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=RBTree_3
ConfigurationName      :=Debug
WorkspacePath          := "E:\data\example"
ProjectPath            := "E:\data\example\RBTree_3"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=AustinChen
Date                   :=2013/10/15
CodeLitePath           :="D:\Program Files\CodeLite"
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
ObjectsFileList        :="RBTree_3.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=windres
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
CodeLiteDir:=D:\Program Files\CodeLite
UNIT_TEST_PP_SRC_DIR:=d:\UnitTest++-1.3
Objects0=$(IntermediateDirectory)/rbtest2$(ObjectSuffix) $(IntermediateDirectory)/rbtree$(ObjectSuffix) $(IntermediateDirectory)/rbtree_rc$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/rbtest2$(ObjectSuffix): rbtest2.c $(IntermediateDirectory)/rbtest2$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/data/example/RBTree_3/rbtest2.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/rbtest2$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/rbtest2$(DependSuffix): rbtest2.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/rbtest2$(ObjectSuffix) -MF$(IntermediateDirectory)/rbtest2$(DependSuffix) -MM "rbtest2.c"

$(IntermediateDirectory)/rbtest2$(PreprocessSuffix): rbtest2.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/rbtest2$(PreprocessSuffix) "rbtest2.c"

$(IntermediateDirectory)/rbtree$(ObjectSuffix): rbtree.c $(IntermediateDirectory)/rbtree$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/data/example/RBTree_3/rbtree.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/rbtree$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/rbtree$(DependSuffix): rbtree.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/rbtree$(ObjectSuffix) -MF$(IntermediateDirectory)/rbtree$(DependSuffix) -MM "rbtree.c"

$(IntermediateDirectory)/rbtree$(PreprocessSuffix): rbtree.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/rbtree$(PreprocessSuffix) "rbtree.c"

$(IntermediateDirectory)/rbtree_rc$(ObjectSuffix): rbtree_rc.c $(IntermediateDirectory)/rbtree_rc$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/data/example/RBTree_3/rbtree_rc.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/rbtree_rc$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/rbtree_rc$(DependSuffix): rbtree_rc.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/rbtree_rc$(ObjectSuffix) -MF$(IntermediateDirectory)/rbtree_rc$(DependSuffix) -MM "rbtree_rc.c"

$(IntermediateDirectory)/rbtree_rc$(PreprocessSuffix): rbtree_rc.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/rbtree_rc$(PreprocessSuffix) "rbtree_rc.c"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/rbtest2$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/rbtest2$(DependSuffix)
	$(RM) $(IntermediateDirectory)/rbtest2$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/rbtree$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/rbtree$(DependSuffix)
	$(RM) $(IntermediateDirectory)/rbtree$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/rbtree_rc$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/rbtree_rc$(DependSuffix)
	$(RM) $(IntermediateDirectory)/rbtree_rc$(PreprocessSuffix)
	$(RM) $(OutputFile)
	$(RM) $(OutputFile).exe
	$(RM) "../.build-debug/RBTree_3"


