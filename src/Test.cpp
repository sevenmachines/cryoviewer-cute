#include "cute.h"
#include "ide_listener.h"
#include "cute_runner.h"

#include "common/SimpleGLDrawingAreaTest.h"


void runCommonSuite(){
	cryotests::viewer::common::SimpleGLDrawingAreaTest::runSuite();
}

int main(){
    runCommonSuite();
    return 0;
}



